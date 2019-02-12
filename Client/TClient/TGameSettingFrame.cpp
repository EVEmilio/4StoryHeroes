#include "Stdafx.h"
#include "TGameSettingFrame.h"
#include "TClientGame.h"
#include "TClientWnd.h"
#include "TClient.h"


LPBYTE CTGameSettingFrame::TOPTIONPTR[OPTION_COUNT] =
{
	&CTClientGame::m_vTOPTION.m_bNpcNAME,
	&CTClientGame::m_vTOPTION.m_bPcNAME,
	&CTClientGame::m_vTOPTION.m_bMonNAME,
	&CTClientGame::m_vTOPTION.m_bAutoHelp,
	&CTClientGame::m_vTOPTION.m_bTalkBox,
	&CTClientGame::m_vTOPTION.m_bDenyWhisper,
	&CTClientGame::m_vTOPTION.m_bDenyCommunity,
	&CTClientGame::m_vTOPTION.m_bUIBar,
	&CTClientGame::m_vTOPTION.m_bContinualChat,
	&CTClientGame::m_vTOPTION.m_bMouseClickMove,
	&CTClientGame::m_vTOPTION.m_bAutoTargeting,
	&CTClientGame::m_vTOPTION.m_bDisableDoubleSkill,
	&CTClientGame::m_vTOPTION.m_bDontShowOtherCompanions,
	&CTClientGame::m_vTOPTION.m_bHideTournament,
	&CTClientGame::m_vTOPTION.m_bHideArena,
	&CTClientGame::m_vTOPTION.m_bHideDuel,
	&CTClientGame::m_vTOPTION.m_bDisableAutoSelectSFX,
	&CTClientGame::m_vTOPTION.m_bDisableChatTransparency,
};

DWORD CTGameSettingFrame::TNAME[OPTION_COUNT] = 
{
	TSTR_GAMEOPTION_SHOW_NPC_NAME, //NPC �̸� ǥ��
	TSTR_GAMEOPTION_SHOW_PLAYER_NAME, //ĳ���� �̸� ǥ��
	TSTR_GAMEOPTION_SHOW_MONSTER_NAME, //���� �̸� ǥ��
	TSTR_GAMEOPTION_AUTO_HELP, //�ڵ� ����
	TSTR_GAMEOPTION_SHOW_TALK_BOX, //��ǳ�� ���̱�
	TSTR_GAMEOPTION_DENY_WHISPER, //�Ӹ� �ź�
	TSTR_GAMEOPTION_DENY_COMMUNITY, //Ŀ�´�Ƽ �ź�
	TSTR_GAMEOPTION_QUICKBAR, //HUD ���̱�
	TSTR_GAMEOPTION_CONTINUOUS_CHAT, //���� ä��
	TSTR_GAMEOPTION_MOUSE_CLICK_MOVE, //���콺 Ŭ�� �̵�
	TSTR_GAMEOPTION_AUTO_TARGETING, //�ڵ� Ÿ���� ���
	3000,
	3001,
	3002,
	3003,
	3004,
	3005,
	3008
};

// ===============================================================================
CTGameSettingFrame::CTGameSettingFrame(TComponent *pParent, FRAMEDESC_SHAREDPTR pDesc)
	: ITInnerFrame(pParent, pDesc, TSETTING_FRAME_GAME)
{
	m_pTLIST = (TList*) FindKid( ID_CTRLINST_LIST );

	for( int i=0 ; i < OPTION_COUNT ; ++i )
	{
		int nLine = m_pTLIST->AddString( CTChart::LoadString( (TSTRING) CTGameSettingFrame::TNAME[i] ) );
		m_pTLIST->SetItemData( nLine, 0, i );
	}

	CPoint ptBasisPos;
	m_pTLIST->GetComponentPos(&ptBasisPos);
    
	TButton* pTCHECK = (TButton*) FindKid( ID_CTRLINST_CHECK );
	RemoveKid(pTCHECK);

	CPoint ptOffset;
	pTCHECK->GetComponentPos(&ptOffset);
	ptOffset = ptOffset - ptBasisPos;
	int n = m_pTLIST->GetMaxItemHeight();
	int nTotal = m_pTLIST->GetItemPerPage();
	m_pTCHECK = new TButton*[nTotal];

	for( int i=0 ; i < nTotal ; ++i )
	{
		m_pTCHECK[ i ] = new TButton( this, pTCHECK->m_pDESC );
		m_pTCHECK[ i ]->m_id = GetUniqueID();
		m_pTCHECK[ i ]->SetStateButton();
		m_pTCHECK[ i ]->MoveComponent( ptBasisPos + ptOffset );
		AddKid( m_pTCHECK[ i ] );
		ptOffset.y += n;
	}

	delete pTCHECK;

	UpdateUI();
}
// -------------------------------------------------------------------------------
CTGameSettingFrame::~CTGameSettingFrame()
{
	if( m_pTCHECK )
		delete [] m_pTCHECK;
}
// ===============================================================================
void CTGameSettingFrame::UpdateUI()
{
	for( INT i=0 ; i < m_pTLIST->GetItemPerPage() ; ++i )
	{
		BOOL bValid = ( m_pTLIST->GetTop() + i < m_pTLIST->GetItemCount() );
		if( bValid )
		{
			m_pTCHECK[ i ]->Select( *(CTGameSettingFrame::TOPTIONPTR[ m_pTLIST->GetTop()+i ]) );
			RemoveKid(m_pTCHECK[ i ] );
			AddKid(m_pTCHECK[ i ] );
			m_pTCHECK[ i ]->ShowComponent(TRUE);
		}
		else
		{
			m_pTCHECK[ i ]->ShowComponent(FALSE);
		}
	}
}
// ===============================================================================
void CTGameSettingFrame::OnLButtonDown( UINT nFlags, CPoint pt)
{
	ITInnerFrame::OnLButtonDown(nFlags, pt);

	if( IsVisible() )
	{
		for( int i=0 ; i < m_pTLIST->GetItemPerPage() ; ++i )
		{
			BOOL bChecked = m_pTCHECK[ i ]->IsStateDown();

			BOOL bValid = ( m_pTLIST->GetTop() + i < m_pTLIST->GetItemCount() );
			if( bValid )
			{
				int index = m_pTLIST->GetTop() + i;
				BOOL bChecked = m_pTCHECK[i]->IsStateDown() ? TRUE : FALSE;
				BOOL bCurrent = *(CTGameSettingFrame::TOPTIONPTR[ index ]);
				CTGaugePannel* pTGAUGE = static_cast<CTGaugePannel*>( CTClientGame::GetInstance()->GetFrame( TFRAME_GAUGE ) );

				if( bChecked != bCurrent && index == 0 ) // ���ǥ�� ����
				{
					CTGaugePannel* pTGAUGE = static_cast<CTGaugePannel*>( CTClientGame::GetInstance()->GetFrame( TFRAME_GAUGE ) );

					if( bChecked  )
						pTGAUGE->AttachCaution15();
					else
						pTGAUGE->DettachCaution15();
				}

				CTClientGame* pGAME = CTClientGame::GetInstance();
				if (index == 12 && bChecked != bCurrent && bChecked)
				{
					for (MAPSPOLECNIK::iterator it = pGAME->m_mapSPOLECNIK.begin(); it != pGAME->m_mapSPOLECNIK.end(); ++it)
					{
						if ((*it).second->m_dwHostID == pGAME->GetMainChar()->m_dwID)
							continue;

						pGAME->DeleteDynimicOBJ((*it).second);
						pGAME->m_mapSPOLECNIK.erase(it);
					}
				}
				else if (index == 12 && bChecked != bCurrent && !bChecked)
					pGAME->GetMainWnd()->MessageBoxOK("You have to teleport for this to be applied.", TSTR_OK, GM_CLOSE_MSGBOX, GM_CLOSE_MSGBOX);

				else if (index == 3 && bChecked != bCurrent)
					pTGAUGE->NotifyFrameStaticMove(bChecked);

				*(CTGameSettingFrame::TOPTIONPTR[ index ]) = bChecked;
				if (bChecked != bCurrent)
					theApp.SaveStdProfileSettings();
			}
		}
	}
}
// ===============================================================================

HRESULT CTGameSettingFrame::Render(DWORD dwTickCount)
{
	if( IsVisible() )
	{
		UpdateUI();
	}

	return ITInnerFrame::Render(dwTickCount);
}
