#include "StdAfx.h"
#include "TClientGame.h"
#include "Resource.h"
#include "TPetManageDlg.h"

LPTEXTURESET CTMainUI::m_pNOTIFYMAIL = NULL;


CTMainUI::CTMainUI( TComponent *pParent, FRAMEDESC_SHAREDPTR pDesc, TCMLParser *pParser, CTClientChar *pHost )
:CTClientUIBase( pParent, pDesc)
{
#ifdef NEW_IF
	DWORD dwMainButtonID[] = {
		ID_CTRLINST_SYSTEM,
		ID_CTRLINST_INVEN_NEW,
		ID_CTRLINST_CHAR_NEW,
		ID_CTRLINST_MESSENGER,
		ID_CTRLINST_WAR,
		ID_CTRLINST_COMMUNITY,
		27362
	};

	CTClientGame* pMainGame = CTClientGame::GetInstance();

	m_pCENTER = new CTClientUIBase( this, pParser->FindFrameTemplate(ID_FRAME_EXPBAR_NEW));
	m_pRIGHT = new CTClientUIBase( this, pParser->FindFrameTemplate(ID_FRAME_MAIN_RIGHT_NEW));

	TComponent* pExp = m_pCENTER->FindKid(ID_CTRLINST_EXP_COMP);
	pExp->ShowComponent(FALSE);

	TComponent* pLot = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_COMP);
	pLot->ShowComponent(FALSE);

	m_pLotBtn = (TButton*) m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_BTN);
	m_pLotBtn->ShowComponent(FALSE);

	m_pLotBtnBlink = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_BTNBLINK);
	m_pLotBtnBlink->ShowComponent(FALSE);

	m_pLotBlink = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_BLINK);
	m_pLotBlink->ShowComponent(FALSE);

	m_bUseBasis = FALSE;
	GAMEOPTION& GameOption = CTClientGame::GetInstance()->GetDevice()->m_option;

	for( INT i=0; i<TMAINBUTTONNEW_COUNT; ++i)
	{
		m_pTMAINBTN_NEW[i] = m_pRIGHT->FindKid(dwMainButtonID[i]);
		m_pTMAINBTN_NEW[i]->GetComponentPos(&m_ptDefaultMainPos[i]);
	}

	TFrame* pRanks = new CTClientUIBase( this, pParser->FindFrameTemplate( 1205 ) );
	m_pRankImage = (TImageList*) pRanks->FindKid( 27288 );
	m_pTCHAPTERMSG = FindKid(ID_CTRLINST_CHAPTER_MSG);
	m_pTREGIONMSG = FindKid(ID_CTRLINST_REGION_MSG);
	m_pTQUESTMSG = FindKid(ID_CTRLINST_QUEST_MSG);
	m_pPOSITIONMSG = FindKid(26121);

	m_pTCHAPTERMSG->m_bUseImageClrForText = TRUE;
	m_pTREGIONMSG->m_bUseImageClrForText = TRUE;
	m_pTQUESTMSG->m_bUseImageClrForText = TRUE;
	m_pPOSITIONMSG->m_bUseImageClrForText = TRUE;

	RemoveKid(m_pTCHAPTERMSG);
	RemoveKid(m_pTREGIONMSG);
	RemoveKid(m_pTQUESTMSG);
	RemoveKid(m_pPOSITIONMSG);

	AddKid(m_pTCHAPTERMSG);
	AddKid(m_pTREGIONMSG);
	AddKid(m_pTQUESTMSG);
	AddKid(m_pPOSITIONMSG);

	m_pTCHAPTERMSG->m_bNoHIT = TRUE;
	m_pTREGIONMSG->m_bNoHIT = TRUE;
	m_pTQUESTMSG->m_bNoHIT = TRUE;
	m_pPOSITIONMSG->m_bNoHIT = TRUE;

	CD3DFont *pTFONT = m_pTCHAPTERMSG->Get3DFont();
	pTFONT->m_dwColor = TTITLEMSG_COLOR;
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	pTFONT = m_pTREGIONMSG->Get3DFont();
	pTFONT->m_dwColor = TTITLEMSG_COLOR;
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	pTFONT = m_pTQUESTMSG->Get3DFont();
	pTFONT->m_dwColor = TTITLEMSG_COLOR;
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	pTFONT = m_pPOSITIONMSG->Get3DFont();
	pTFONT->m_dwColor = D3DCOLOR_ARGB(255,240,124,8);
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	m_bNotifyNewMail = FALSE;
	m_bNotifyNewMsg = FALSE;
	m_bNotifyNewCashCabinet = FALSE;

	m_bCashMenu = FALSE;

	m_pTCHAPTERMSG->ShowComponent(FALSE);
	m_pTREGIONMSG->ShowComponent(FALSE);
	m_pTQUESTMSG->ShowComponent(FALSE);
	m_pPOSITIONMSG->ShowComponent(FALSE);

	m_bSND = FALSE;
	m_ptPrev = CPoint(0,0);

	m_dwNotifyMailTick = 0;
	m_vNotifyMailStart = m_vNotifyMailEnd = D3DXVECTOR2( -1000.0f, -1000.0f );

	// ä�ù� ����
		// A?Aac ��Ls
	{
		CPoint point;
		FRAMEDESC_SHAREDPTR pGAUGE = pParser->FindFrameTemplate( ID_FRAME_CHATNEW );
		TComponent *pTPOS = FindKid( ID_CTRLINST_POS_CHAT );
		CTChatFrame* pTFRAME = new CTChatFrame( this, pGAUGE, pMainGame, pParser);
		pTPOS->GetComponentPos(&point);
		RemoveKid(pTPOS);
		delete pTPOS;
		AddKid(pTFRAME);
		pTFRAME->MoveComponent(point);
		pMainGame->m_pChatFrame = pTFRAME;

		pTFRAME->m_bCanDrag = TRUE;
	}

	AddKid( m_pRIGHT );
	AddKid( m_pCENTER );






















































#else

	DWORD dwMainButtonID[] = {
		ID_CTRLINST_CHAR,
		ID_CTRLINST_SKILL,
		ID_CTRLINST_QUEST,
		ID_CTRLINST_COMMUNITY,
		ID_CTRLINST_SYSTEM,
		ID_CTRLINST_INVEN_SLOT,
		ID_CTRLINST_PET,
		ID_CTRLINST_FAMERANK,
		ID_CTRLINST_HELP };

	DWORD dwMsgButtonID[] = {
		ID_CTRLINST_MESSENGER,
		ID_CTRLINST_MAIL,
		ID_CTRLINST_CHAT_LOCK};

	DWORD dwCashMenuID[] = {
		ID_CTRLINST_CASH_ITEM,
		ID_CTRLINST_CASH_CAB,
		ID_CTRLINST_CASH_CHARGE};
	CTClientGame* pMainGame = CTClientGame::GetInstance();

	m_pCENTER = new CTClientUIBase( this, pParser->FindFrameTemplate(ID_FRAME_MAIN_CENTER));
	m_pCabinetButton = (TButton*) m_pCENTER->FindKid( ID_CTRLINST_CABINET );
	m_pCashShopButton = (TButton*) m_pCENTER->FindKid( ID_CTRLINST_CASHSHOP );
	m_pRIGHT = new CTClientUIBase( this, pParser->FindFrameTemplate(ID_FRAME_MAIN_RIGHT));
	m_pTPARTYITEM = m_pRIGHT->FindKid( ID_CTRLINST_PARTY_ITEM);

	m_bUseBasis = FALSE;

	CTDurationFrame *pDuration = new CTDurationFrame( this, pParser->FindFrameTemplate(ID_FRAME_DURATION));

	m_pLotBtn = (TButton*) m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_BTN_OLD);
	m_pLotBtn->ShowComponent(FALSE);

	m_pLotBtnBlink = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_BTNBLINK_OLD);
	m_pLotBtnBlink->ShowComponent(FALSE);

	m_pSoulForm = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_FORM_OLD);
	
	GAMEOPTION& GameOption = CTClientGame::GetInstance()->GetDevice()->m_option;

	TComponent *pPOS = NULL;
	CPoint point;
	pPOS = m_pCENTER->FindKid( ID_CTRLINST_DURATION);
	pPOS->GetComponentPos(&point);
	m_pCENTER->RemoveKid(pPOS);
	delete pPOS;
	m_pCENTER->AddKid(pDuration);

	pDuration->MoveComponent(point);
	pDuration->ShowComponent(TRUE);
	pDuration->EnableFloat(FALSE);

	for( INT i=0; i<TMAINBUTTON_COUNT; ++i)
		m_pTMAINBTN[i] = m_pRIGHT->FindKid(dwMainButtonID[i]);

	for( INT i=0; i<TMSGBUTTON_COUNT; ++i)
		m_pTMSGBTN[i] = m_pRIGHT->FindKid(dwMsgButtonID[i]);

	for( INT i=0; i<TCASHMENU_COUNT; ++i)
	{
		m_pTTCASHMENU[i] = m_pCENTER->FindKid(dwCashMenuID[i]);

		m_pCENTER->RemoveKid(m_pTTCASHMENU[i]);
		m_pCENTER->AddKid(m_pTTCASHMENU[i]);
	}

	m_pTCHAPTERMSG = FindKid(ID_CTRLINST_CHAPTER_MSG);
	m_pTREGIONMSG = FindKid(ID_CTRLINST_REGION_MSG);
	m_pTQUESTMSG = FindKid(ID_CTRLINST_QUEST_MSG);

	m_pTCHAPTERMSG->m_bUseImageClrForText = TRUE;
	//m_pTREGIONMSG->m_bUseImageClrForText = TRUE;
	m_pTQUESTMSG->m_bUseImageClrForText = TRUE;

	RemoveKid(m_pTCHAPTERMSG);
	RemoveKid(m_pTREGIONMSG);
	RemoveKid(m_pTQUESTMSG);

	AddKid(m_pTCHAPTERMSG);
	AddKid(m_pTREGIONMSG);
	AddKid(m_pTQUESTMSG);

	m_pTCHAPTERMSG->m_bNoHIT = TRUE;
	m_pTREGIONMSG->m_bNoHIT = TRUE;
	m_pTQUESTMSG->m_bNoHIT = TRUE;

	CD3DFont *pTFONT = m_pTCHAPTERMSG->Get3DFont();
	pTFONT->m_dwColor = TTITLEMSG_COLOR;
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	pTFONT = m_pTREGIONMSG->Get3DFont();

	pTFONT->m_dwColor = D3DCOLOR_ARGB(255,240,124,8);
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	pTFONT = m_pTQUESTMSG->Get3DFont();
	pTFONT->m_dwColor = TTITLEMSG_COLOR;
	pTFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
	pTFONT->m_bOutLine = TRUE;

	m_pMESSENGER = (TButton *) m_pRIGHT->FindKid( ID_CTRLINST_MESSENGER);
	m_pMAIL = (TButton *) m_pRIGHT->FindKid( ID_CTRLINST_MAIL );

	m_bNotifyNewMail = FALSE;
	m_bNotifyNewMsg = FALSE;
	m_bNotifyNewCashCabinet = FALSE;

	m_bCashMenu = FALSE;

	m_pTCHAPTERMSG->ShowComponent(FALSE);
	m_pTREGIONMSG->ShowComponent(FALSE);
	m_pTQUESTMSG->ShowComponent(FALSE);

	m_bSND = FALSE;
	m_ptPrev = CPoint(0,0);

	m_dwNotifyMailTick = 0;
	m_vNotifyMailStart = m_vNotifyMailEnd = D3DXVECTOR2( -1000.0f, -1000.0f );

	// ä�ù� ����
	{
		CPoint point;
		FRAMEDESC_SHAREDPTR pGAUGE = pParser->FindFrameTemplate( ID_FRAME_CHAT );
		TComponent *pTPOS = FindKid( ID_CTRLINST_POS_CHAT );
		CTChatFrame* pTFRAME = new CTChatFrame( this, pGAUGE, pMainGame, pParser);
		pTPOS->GetComponentPos(&point);
		RemoveKid(pTPOS);
		delete pTPOS;
		AddKid(pTFRAME);
		point.y += 200;
		pTFRAME->MoveComponent(point);
		pMainGame->m_pChatFrame = pTFRAME;
	}

	AddKid( m_pRIGHT );
	AddKid( m_pCENTER );
#endif
}

CTMainUI::~CTMainUI()
{
}

BYTE CTMainUI::MakeSlotID( TMAINSLOTID_TYPE eSlotType, BYTE bSlotNumber)
{
	return MAX_HOTKEY_POS * eSlotType + bSlotNumber;
}

TMAINSLOTID_TYPE CTMainUI::ToSlotType( BYTE bSlotID)
{
	return (TMAINSLOTID_TYPE)( bSlotID / MAX_HOTKEY_POS );
}

BYTE CTMainUI::ToSlotNumber(BYTE bSlotID)
{
	return bSlotID % MAX_HOTKEY_POS;
}



void CTMainUI::CheckMSGCTRL()
{
	if( m_pTCHAPTERMSG->IsVisible() && m_pTCHAPTERMSG->GetRepeatCount() > 0 )
	{
		m_pTCHAPTERMSG->ShowComponent(FALSE);
		m_pTCHAPTERMSG->ResetAnimation();
	}

	if( m_pTREGIONMSG->IsVisible() && m_pTREGIONMSG->GetRepeatCount() > 0 )
	{
		m_pTREGIONMSG->ShowComponent(FALSE);
		m_pTREGIONMSG->ResetAnimation();
	}

	if( m_pTQUESTMSG->IsVisible() && m_pTQUESTMSG->GetRepeatCount() > 0 )
	{
		m_pTQUESTMSG->ShowComponent(FALSE);
		m_pTQUESTMSG->ResetAnimation();
	}
	if(m_pPOSITIONMSG->IsVisible() && m_pPOSITIONMSG->GetRepeatCount()> 0)
	{
		m_pPOSITIONMSG->ShowComponent(FALSE);
		m_pPOSITIONMSG->ResetAnimation();
	}
}

void CTMainUI::ResetChapterMSG( CString& strTEXT)
{
	CTGaugePannel* pTGAUGE = static_cast<CTGaugePannel*>(CTClientGame::GetInstance()->GetFrame(TFRAME_GAUGE));
	pTGAUGE->RemoveKid(m_pTCHAPTERMSG);

	LPIMAGESET pImageset = m_pTCHAPTERMSG->GetDefaultImage();

	if(pImageset->m_dwCurTick > pImageset->m_dwTotalTick/2.0f)
		m_pTCHAPTERMSG->ResetTotalTick( pImageset->m_dwTotalTick-pImageset->m_dwCurTick);

	m_pTCHAPTERMSG->m_strText = strTEXT;
	m_pTCHAPTERMSG->ShowComponent(TRUE);
	pTGAUGE->AddKid(m_pTCHAPTERMSG);
}

void CTMainUI::ResetRegionMSG( CString& strTEXT)
{
	CTGaugePannel* pTGAUGE = static_cast<CTGaugePannel*>(CTClientGame::GetInstance()->GetFrame(TFRAME_GAUGE));
	pTGAUGE->RemoveKid(m_pTREGIONMSG);
	LPIMAGESET pImageset = m_pTREGIONMSG->GetDefaultImage();

	if(pImageset->m_dwCurTick > pImageset->m_dwTotalTick/2.0f)
		m_pTREGIONMSG->ResetTotalTick( pImageset->m_dwTotalTick-pImageset->m_dwCurTick);

	m_pTREGIONMSG->m_strText = strTEXT;
	m_pTREGIONMSG->ShowComponent(TRUE);
	pTGAUGE->AddKid(m_pTREGIONMSG);
}

void CTMainUI::ResetPositionMsg( CString& strTEXT)
{
	LPIMAGESET pImageset = m_pPOSITIONMSG->GetDefaultImage();

	if(pImageset->m_dwCurTick > pImageset->m_dwTotalTick/2.0f)
		m_pPOSITIONMSG->ResetTotalTick( pImageset->m_dwTotalTick-pImageset->m_dwCurTick);

	m_pPOSITIONMSG->m_strText = strTEXT;
	m_pPOSITIONMSG->ShowComponent(TRUE);
}

void CTMainUI::ResetQuestMSG( CString& strTITLE,
							  CString& strRESULT)
{
	CTGaugePannel* pTGAUGE = static_cast<CTGaugePannel*>(CTClientGame::GetInstance()->GetFrame(TFRAME_GAUGE));
	pTGAUGE->RemoveKid(m_pTQUESTMSG);
	LPIMAGESET pImageset = m_pTQUESTMSG->GetDefaultImage();

	if(pImageset->m_dwCurTick > pImageset->m_dwTotalTick/2.0f)
		m_pTQUESTMSG->ResetTotalTick( pImageset->m_dwTotalTick-pImageset->m_dwCurTick);

	m_pTQUESTMSG->m_strText = CTChart::Format( TSTR_FMT_QUEST_STATUS, strTITLE, strRESULT);
	m_pTQUESTMSG->ShowComponent(TRUE);

	pTGAUGE->AddKid(m_pTQUESTMSG);
}


void CTMainUI::ResetCashMenu()
{
#ifdef NEW_IF
#else
	for( BYTE i=0; i<TCASHMENU_COUNT; ++i)
		m_pTTCASHMENU[i]->ShowComponent(m_bCashMenu);
#endif
}

void CTMainUI::ShowComponent( BOOL bVisible)
{
	m_bVisible = bVisible;
}

BOOL CTMainUI::CanWithItemUI()
{
	return TRUE;
}

ITDetailInfoPtr CTMainUI::GetTInfoKey( const CPoint& point )
{
	ITDetailInfoPtr pInfo;

#ifdef NEW_IF
	for( INT i=0; i<TMAINBUTTONNEW_COUNT; i++)
	{
		pInfo = GetTInfoKey_MainBtn( point, i);

		if(pInfo)
			return pInfo;
	}

























#else
	for( INT i=0; i<TMAINBUTTON_COUNT; i++)
	{
		pInfo = GetTInfoKey_MainBtn( point, i);

		if(pInfo)
			return pInfo;
	}

	for( INT i=0; i<TMSGBUTTON_COUNT; i++)
	{
		pInfo = GetTInfoKey_MsgBtn( point, i);

		if(pInfo)
			return pInfo;
	}

	// ĳ���� ��ư üũ

	if( m_pCashShopButton->HitTest(point) )
	{
		CRect rc;
		m_pCashShopButton->GetComponentRect(&rc);
		m_pCashShopButton->ComponentToScreen( &rc );

		CString strTITLE;
		strTITLE = CTChart::LoadString( TSTR_CASHSHOP_TITLE );

		pInfo = CTDetailInfoManager::NewNorInst(
			strTITLE,
			0, 0, rc);
		pInfo->SetDir(FALSE, TRUE, TRUE);
		return pInfo;
	}

	// ������ ��ư üũ
	if( m_pCabinetButton->HitTest(point) )
	{
		CRect rc;
		m_pCabinetButton->GetComponentRect(&rc);
		m_pCabinetButton->ComponentToScreen( &rc );

		CString strTITLE;
		strTITLE = CTChart::LoadString( TSTR_CABINET );

		pInfo = CTDetailInfoManager::NewNorInst(
			strTITLE,
			0, 0, rc);
		pInfo->SetDir(FALSE, TRUE, TRUE);
		return pInfo;
	}
#endif

#ifdef NEW_IF
	TComponent* pLotG = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP);

	if( pLotG->HitRect(point) ||
		m_pLotBtn->HitRect(point) ||
		m_pLotBtnBlink->HitRect(point) ||
		m_pLotBlink->HitRect(point))
	{
		CRect rc;
		pLotG->GetComponentRect(&rc);
		pLotG->ComponentToScreen( &rc );

		pInfo = CTDetailInfoManager::NewDefTooltipInst(
			CTChart::LoadString(TSTR_SOULLOT_HEAD),
			CTChart::LoadString(TSTR_SOULLOT_DESC),
			rc);
		pInfo->SetDir(FALSE, FALSE, TRUE);
		return pInfo;
	}
#else
	if( m_pSoulForm->HitTest(point))
	{
		CRect rc;
		m_pSoulForm->GetComponentRect(&rc);
		m_pSoulForm->ComponentToScreen( &rc );

		pInfo = CTDetailInfoManager::NewDefTooltipInst(
			CTChart::LoadString(TSTR_SOULLOT_HEAD),
			CTChart::LoadString(TSTR_SOULLOT_DESC),
			rc);
		pInfo->SetDir(FALSE, TRUE, TRUE);
		return pInfo;
	}
#endif
	return pInfo;
}

ITDetailInfoPtr CTMainUI::GetTInfoKey_MainBtn(const CPoint& point, INT nID)
{
	ITDetailInfoPtr pInfo;

#ifdef NEW_IF
	static const DWORD dwBtnStr[TMAINBUTTONNEW_COUNT] = {
		TSTR_TOPMENU_FRAME_SETTINGS,
		TSTR_TOPMENU_FRAME_INVEN,
		TSTR_TOPMENU_FRAME_CHAR,
		TSTR_TOPMENU_FRAME_MESSENGER,
		TSTR_TOPMENU_FRAME_WAR,
		TSTR_TOPMENU_FRAME_COMMUNITY,
		TSTR_TOPMENU_FRAME_WAR
	};

	if(m_pTMAINBTN_NEW[nID]->HitTest(point))
	{
		CString strTITLE = CTChart::LoadString( (TSTRING) dwBtnStr[nID] );

		CRect rc;
		m_pTMAINBTN_NEW[nID]->GetComponentRect(&rc);
		m_pTMAINBTN_NEW[nID]->ComponentToScreen( &rc );

		pInfo = CTDetailInfoManager::NewNorInst(
			strTITLE,
			0,
			0, rc);

		pInfo->SetDir(FALSE, TRUE, FALSE);
	}
#else
	static const DWORD MAINBTNINFOIDS[TMAINBUTTON_COUNT] = {
		31001,					// TMAINBUTTON_CHAR,
		31002,					// TMAINBUTTON_SKILL,
		31003,					// TMAINBUTTON_QUEST,
		31004,					// TMAINBUTTON_COMMUNITY,
		31006,					// TMAINBUTTON_SYSTEM
        31007,					// TMAINBUTTON_INVEN_SLOT
		31008,					// TMAINBUTTON_PET
		31009,					// TMAINBUTTON_FAMERANK
		31010						// TMAINBUTTON_HELP
	};					

	static const DWORD MAINBTNINFOSTRS[TMAINBUTTON_COUNT] = {
		TSTR_MENU_CHAR,			// TMAINBUTTON_CHAR,
		TSTR_MENU_SKILL,    		// TMAINBUTTON_SKILL,
		TSTR_MENU_QUEST,			// TMAINBUTTON_QUEST,
		TSTR_MENU_COMMUNITY,    	// TMAINBUTTON_COMMUNITY,
		TSTR_MENU_SYSTEM,   		// TMAINBUTTON_SYSTEM
		TSTR_MENU_INVEN_SLOT,	// TMAINBUTTON_INVEN_SLOT
		TSTR_MENU_PET,				// TMAINBUTTON_PET
		TSTR_MENU_FAMERANK,			// TMAINBUTTON_FAMERNAK
		TSTR_MENU_HELP			// TMAINBUTTON_HELP
	};			

	static const TKEY_SET MAINBTNKEYINFOS[TMAINBUTTON_COUNT] = {
		TKEY_CHAR_INFO,				// ĳ���� ����â ����/�ݱ�
		TKEY_SKILL_INFO,			// ��ų â ����/�ݱ�
		TKEY_QUEST_INFO,			// ����Ʈ â ����/�ݱ�	
		TKEY_TOGGLE_GUILD_UI,		// ���â ����/�ݱ�
		TKEY_NONE,					// �ý��� �޴� ����Ű�� ���� ����(ESC)
		TKEY_INVEN,				// ���� ����/�ݱ�
		TKEY_PET_INFO,			// ��������â ����/�ݱ�
		TKEY_FAMERANK,			// ���� ����
		TKEY_HELP				// ����
	};

	CTKeySetting *pKeySet = CTKeySetting::GetInstance();

	if(m_pTMAINBTN[nID]->HitTest(point))
	{
		CString strTITLE;
		strTITLE = CTChart::LoadString( (TSTRING) MAINBTNINFOSTRS[nID] );

		WORD wVKey = pKeySet->GetCurVKey(MAINBTNKEYINFOS[nID]);
		WORD wModKey = pKeySet->GetCurModKey(MAINBTNKEYINFOS[nID]);
		CString strKey = pKeySet->VKeyToStr(wVKey, wModKey);

		CString strSHORTCUT;

		if( MAINBTNINFOSTRS[nID] == TSTR_MENU_SYSTEM )
			strSHORTCUT.Format( " (%s)", "ESC");
		else
			strSHORTCUT.Format( " (%s)", strKey );

		strTITLE += strSHORTCUT;
		
		CRect rc;
		m_pTMAINBTN[nID]->GetComponentRect(&rc);
		m_pTMAINBTN[nID]->ComponentToScreen( &rc );

		pInfo = CTDetailInfoManager::NewNorInst(
			strTITLE,
			0,
			0, rc);

		pInfo->SetDir(FALSE, TRUE, TRUE);
	}
#endif

	return pInfo;
}

ITDetailInfoPtr CTMainUI::GetTInfoKey_MsgBtn(const CPoint& point, INT nID)
{
#ifdef NEW_IF
#else
	static const DWORD MSGBTNINFOIDS[TMAINBUTTON_COUNT] = {
		33001,					// TCHAT_LINK_TYPE_ITEM,
		33002,					// TCHAT_LINK_TYPE_QUEST
		33003,					// TCHAT_LINK_TYPE_COUNT
		33004};					// TCHAT_LINK_TYPE_CHAT_LOCK

	static const DWORD MSGBTNINFOSTRS[TMAINBUTTON_COUNT] = {
		TSTR_MENU_MESSENGER,		// TCHAT_LINK_TYPE_ITEM,
		TSTR_MENU_MAIL,    		// TCHAT_LINK_TYPE_QUEST
		TSTR_MENU_CHAT_LOCK};	// TCHAT_LINK_TYPE_CHAT_LOCK
	
	if(m_pTMSGBTN[nID]->HitTest(point))
	{
		CString strTITLE;
		strTITLE = CTChart::LoadString( (TSTRING) MSGBTNINFOSTRS[nID] );

		CRect rc;
		m_pTMSGBTN[nID]->GetComponentRect(&rc);
		m_pTMSGBTN[nID]->ComponentToScreen(&rc);

		ITDetailInfoPtr pInfo = CTDetailInfoManager::NewNorInst(
			strTITLE,
			0,
			0,
			rc);

		pInfo->SetDir(FALSE, TRUE, TRUE);
		return pInfo;
	}
#endif

	return ITDetailInfoPtr();
}

void CTMainUI::OnLButtonDown( UINT nFlags, CPoint pt)
{
#ifdef NEW_IF
#else
	if(m_pTPARTYITEM->HitTest(pt))
		m_pCommandHandler->m_vCOMMAND.push_back(GM_CHANGE_PARTY_ITEM_TYPE);
#endif



















	CTClientUIBase::OnLButtonDown( nFlags, pt);
}

























HRESULT CTMainUI::Render( DWORD dwTickCount)
{
	if(IsVisible())
	{
		static BYTE bIsInBOWMap = FALSE;


		if(bIsInBOWMap != CTClientGame::IsInBOWMap() || bIsInBOWMap != CTClientGame::IsInBRMap())
		{
			if(CTClientGame::IsInBOWMap() || CTClientGame::IsInBRMap())
			{
				m_pTMAINBTN_NEW[TMAINBUTTONNEW_INVEN_SLOT]->ShowComponent(FALSE);
				m_pTMAINBTN_NEW[TMAINBUTTONNEW_WAR]->ShowComponent(FALSE);
				m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY]->ShowComponent(FALSE);
				m_pTMAINBTN_NEW[TMAINBUTTONNEW_BATTLE]->ShowComponent(FALSE);

				if (!CTClientGame::IsInBRMap())
					m_pTMAINBTN_NEW[TMAINBUTTONNEW_HELP]->ShowComponent(FALSE);
				else
					m_pTMAINBTN_NEW[TMAINBUTTONNEW_HELP]->MoveComponent(m_ptDefaultMainPos[TMAINBUTTONNEW_CHAR]);

				m_pTMAINBTN_NEW[TMAINBUTTONNEW_CHAR]->MoveComponent(CPoint(
					m_ptDefaultMainPos[TMAINBUTTONNEW_INVEN_SLOT].x + 5, 
					m_ptDefaultMainPos[TMAINBUTTONNEW_INVEN_SLOT].y));

				bIsInBOWMap = TRUE;
			}
			else
			{
				if(!m_pTMAINBTN_NEW[TMAINBUTTONNEW_WAR]->IsVisible())
				{
					for(BYTE i = 0; i < TMAINBUTTONNEW_COUNT; ++i)
					{
						m_pTMAINBTN_NEW[i]->ShowComponent(TRUE);
						m_pTMAINBTN_NEW[i]->MoveComponent(m_ptDefaultMainPos[i]);
					}

					bIsInBOWMap = FALSE;
				}
			}
		}

		static DWORD dwTotalTick = 0;
		dwTotalTick += dwTickCount;

#ifdef NEW_IF
		if(m_bNotifyNewMail)
			if(dwTotalTick % 1000 > 500)
			{
				((TButton*)m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY])->Select(FALSE);
				CTClientGame::GetInstance()->SetMsgMenuBlinkMail(FALSE);
			}
			else
			{
				((TButton*)m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY])->Select(TRUE);
				CTClientGame::GetInstance()->SetMsgMenuBlinkMail(TRUE);
			}

			if(m_bNotifyNewCashCabinet)
				if( dwTotalTick % 1000 > 500 )
				{
					((TButton*)m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY])->Select(FALSE);
					CTClientGame::GetInstance()->SetMsgMenuBlinkCD(FALSE);
				}
				else
				{
					((TButton*)m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY])->Select(TRUE);
					CTClientGame::GetInstance()->SetMsgMenuBlinkCD(TRUE);
				}
				//exp
				TGauge* pExpG = (TGauge*)m_pCENTER->FindKid(ID_CTRLINST_EXP);
				TComponent* pExp = m_pCENTER->FindKid(ID_CTRLINST_EXP_COMP);
				if(pExpG->GetCurValue() == 0)
					pExp->ShowComponent(FALSE);
				else
				{
					TComponent* pBar = pExpG->FindKid(pExpG->GetGaugeDesc().bar[0]);
					CRect rcBar;
					pBar->GetComponentRect( &rcBar );
					CSize size = rcBar.Size();
					CRect rcSrc = CRect( 0, 0, size.cx, size.cy );

					rcSrc.right = (long) ( pExpG->GetMaxValue() == 0 ? 0 : size.cx * ((FLOAT)(pExpG->GetCurValue()) / pExpG->GetMaxValue()) );

					pExp->ShowComponent(TRUE);
					pExp->MoveComponent(CPoint(577+rcSrc.right,30));
				}
				//

				//lot
				TGauge* pLotG = (TGauge*)m_pCENTER->FindKid(ID_CTRLINST_SOULEXP);
				TComponent* pLot = m_pCENTER->FindKid(ID_CTRLINST_SOULEXP_COMP);

				if(pLotG->GetCurValue() == 0)
					pLot->ShowComponent(FALSE);
				else
				{
					TComponent* pBar = pLotG->FindKid(pLotG->GetGaugeDesc().bar[0]);
					CRect rcBar;
					pBar->GetComponentRect( &rcBar );
					CSize size = rcBar.Size();
					CRect rcSrc = CRect( 0, 0, size.cx, size.cy );				

					rcSrc.left = ( pLotG->GetMaxValue() == 0 ? 0 : size.cx - ((int) (size.cx * ((FLOAT)(pLotG->GetCurValue()) / pLotG->GetMaxValue()))) );

					pLot->ShowComponent(TRUE);
					pLot->MoveComponent(CPoint(62 +rcSrc.left,30));
				}
				//
#else
		if(m_bNotifyNewMsg)
			if( dwTotalTick % 1000 > 500 )
				m_pMESSENGER->Select(FALSE);
			else
				m_pMESSENGER->Select(TRUE);

		if(m_bNotifyNewMail)
			if( dwTotalTick % 1000 > 500 )
				m_pMAIL->Select(FALSE);
			else
				m_pMAIL->Select(TRUE);

		if(m_bNotifyNewCashCabinet)
			if( dwTotalTick % 1000 > 500 )
				m_pCabinetButton->Select(FALSE);
			else
				m_pCabinetButton->Select(TRUE);
#endif
	}

	HRESULT hr = CTClientUIBase::Render(dwTickCount);

	if( IsVisible() )
	{
		if( m_dwNotifyMailTick > 0 && !CTClientGame::IsInBOWMap() && !CTClientGame::IsInBRMap())
		{
			FLOAT t = (FLOAT)(m_dwNotifyMailTick) / (FLOAT)(900.0f);
			D3DXVECTOR2 vPos = m_vNotifyMailStart + (m_vNotifyMailEnd - m_vNotifyMailStart) * t;

			if( m_pNOTIFYMAIL )
			{
				LPDIRECT3DDEVICE9 pDevice = CTachyonRes::m_pDEVICE->m_pDevice;

				pDevice->SetTextureStageState( 0, D3DTSS_TEXTURETRANSFORMFLAGS, D3DTTFF_COUNT2);

				pDevice->SetTextureStageState( 0, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
				pDevice->SetTextureStageState( 0, D3DTSS_ALPHAOP, D3DTOP_SELECTARG1);
				pDevice->SetTextureStageState( 0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
				pDevice->SetTextureStageState( 0, D3DTSS_ALPHAARG1, D3DTA_TEXTURE);
				pDevice->SetTextureStageState( 1, D3DTSS_COLOROP, D3DTOP_DISABLE );
				pDevice->SetTextureStageState( 1, D3DTSS_ALPHAOP, D3DTOP_DISABLE );

				pDevice->SetSamplerState( 0, D3DSAMP_MAGFILTER, D3DTEXF_POINT);
				pDevice->SetSamplerState( 0, D3DSAMP_MINFILTER, D3DTEXF_POINT);
				pDevice->SetSamplerState( 0, D3DSAMP_MIPFILTER, D3DTEXF_NONE);

				pDevice->SetRenderState( D3DRS_FILLMODE, D3DFILL_SOLID);
				pDevice->SetRenderState( D3DRS_ALPHABLENDENABLE, TRUE);
				pDevice->SetRenderState( D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
				pDevice->SetRenderState( D3DRS_SRCBLEND, D3DBLEND_SRCALPHA);
				pDevice->SetRenderState( D3DRS_ZWRITEENABLE, FALSE);
				pDevice->SetRenderState( D3DRS_ZENABLE, FALSE);
				pDevice->SetRenderState( D3DRS_ALPHATESTENABLE, FALSE);

				CRect rtScreen = CTClientUIBase::GetScreenRect();
				FLOAT fScreenWidth = (FLOAT) rtScreen.Width();
				FLOAT fScreenHeight = (FLOAT) rtScreen.Height();

				D3DXMATRIXA16 mat;

				D3DXMatrixIdentity( &mat );
				mat._11 = 2.0f * 184.0f / fScreenWidth * (t * 1.2f);
				mat._22 = 1.0f * t;
				mat._33 = 2.0f * 136.0f / fScreenHeight * (t * 1.2f);
				mat._41 = ( ((INT)vPos.x) - 0.5f) * 2.0f / fScreenWidth - 1.0f;
				mat._42 = 1.0f;
				mat._43 = -( ((INT)vPos.y) - 0.5f) * 2.0f / fScreenHeight + 1.0f;
				pDevice->SetTransform( D3DTS_WORLD, &mat );

				D3DXMatrixIdentity( &mat );
				mat._12 = 0.0f;
				mat._22 = 0.0f;
				mat._32 = 1.0f;
				mat._13 = 0.0f;
				mat._23 = 1.0f;
				mat._33 = 0.0f;
				pDevice->SetTransform( D3DTS_VIEW, &mat );

				D3DXMatrixIdentity( &mat );
				pDevice->SetTransform( D3DTS_PROJECTION, &mat );

				D3DXMatrixScaling( &mat,
					184.0f / 256.0f,
					136.0f / 256.0f,
					1.0f );
				pDevice->SetTransform( D3DTS_TEXTURE0, &mat );

				pDevice->SetTexture( 0, m_pNOTIFYMAIL ? m_pNOTIFYMAIL->GetTexture() : NULL);
				pDevice->SetFVF(T3DFVF_PVERTEX);
				pDevice->SetStreamSource( 0, CTClientGame::m_vTRECTVB.GetVB(), 0, sizeof(PVERTEX));

				pDevice->DrawPrimitive( D3DPT_TRIANGLESTRIP, 0, 2);
			}

			m_dwNotifyMailTick -= min( m_dwNotifyMailTick, dwTickCount);
		}
	}

	return hr;
}

void CTMainUI::ResetPosition()
{
	CTClientUIBase::ResetPosition();

#ifdef NEW_IF
	DWORD vCOMP[8][2] =
	{
		{ ID_FRAME_EXPBAR_NEW, TBASISPOINT_CENTER_BOTTOM },
		{ ID_FRAME_MAIN_RIGHT_NEW, TBASISPOINT_RIGHT_TOP },
		{ ID_CTRLINST_BREATH, TBASISPOINT_CENTER_BOTTOM },
		{ ID_CTRLINST_CHARGE, TBASISPOINT_CENTER_BOTTOM },
		{ ID_CTRLINST_QUEST_MSG, TBASISPOINT_CENTER_TOP },
		{ ID_CTRLINST_CHAPTER_MSG, TBASISPOINT_CENTER_TOP },
		{ ID_CTRLINST_REGION_MSG, TBASISPOINT_CENTER_TOP },

		{ 26121, TBASISPOINT_CENTER_TOP }
	};

	INT nOffset[8][2] =
	{
		{ -512, -70 },
		{ -280, 0 },

		{ -105, -284 },
		{ -105, -260 },
		{ -512, 120 },
		{ -512, 168 },
		{ -512, 216 },

		{ -512, 264 }
	};
#else
	DWORD vCOMP[7][2] =
	{
		{ ID_FRAME_MAIN_CENTER, TBASISPOINT_CENTER_BOTTOM },
		{ ID_FRAME_MAIN_RIGHT, TBASISPOINT_RIGHT_BOTTOM },
		{ ID_CTRLINST_BREATH, TBASISPOINT_CENTER_BOTTOM },
		{ ID_CTRLINST_CHARGE, TBASISPOINT_CENTER_BOTTOM },
		{ ID_CTRLINST_QUEST_MSG, TBASISPOINT_CENTER_TOP },
		{ ID_CTRLINST_CHAPTER_MSG, TBASISPOINT_CENTER_TOP },
		{ ID_CTRLINST_REGION_MSG, TBASISPOINT_CENTER_TOP }
	};

	INT nOffset[7][2] =
	{
		{ -512, -198 },
		{ -436, -32 },
		{ -105, -205 },
		{ -105, -181 },
		{ -512, 120 },
		{ -512, 168 },
		{ -512, 216 }
	};
#endif

	for( INT i=0 ; i < 8 ; ++i )
	{
		TComponent* pCOMP = FindKid( vCOMP[ i ][0] );
		if( pCOMP )
		{
			CPoint vOffset = CTClientUIBase::m_vBasis[ vCOMP[ i ][1] ];
			vOffset.x += nOffset[i][0];
			vOffset.y += nOffset[i][1];
			pCOMP->MoveComponent( vOffset );
		}
	}
#ifdef NEW_IF

	CPoint ptMail;
	m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY]->GetComponentPos(&ptMail);
	m_pTMAINBTN_NEW[TMAINBUTTONNEW_COMMUNITY]->ComponentToScreen(&ptMail);

	m_vNotifyMailStart = D3DXVECTOR2((FLOAT) ptMail.x, (FLOAT) ptMail.y);
	m_vNotifyMailEnd = m_vNotifyMailStart - D3DXVECTOR2( 212, -212 );

#endif
#ifdef NEW_IF
	{
		DWORD vCOMP2[1] =
		{
			ID_FRAME_CHATNEW
		};

		GAMEOPTION& pJIRKTION = CTClientGame::GetInstance()->GetDevice()->m_option;

		CTClientUIBase* pCOMP = (CTClientUIBase*) FindKid( vCOMP2[ 0 ] );
		pCOMP->ResetPosition();
		pCOMP->m_rcDrag.SetRect(
			0,0,
			pJIRKTION.m_dwScreenX,
			pJIRKTION.m_dwScreenY);

	}
#else
	{
		DWORD vCOMP2[1] =
		{
			ID_FRAME_CHAT
		};

		GAMEOPTION& pJIRKTION = CTClientGame::GetInstance()->GetDevice()->m_option;

		CTClientUIBase* pCOMP = (CTClientUIBase*) FindKid( vCOMP2[ 0 ] );
		pCOMP->m_rcDrag.SetRect(
			0,0,
			pJIRKTION.m_dwScreenX,
			pJIRKTION.m_dwScreenY);
		pCOMP->ResetPosition();

	}
#endif
































}


void CTMainUI::DefaultPosition( CPoint* vBASIS, BOOL bRestore )
{
	#ifdef NEW_IF
	static DWORD vCOMP[1][2] =
	{
		{ ID_FRAME_CHATNEW, TBASISPOINT_LEFT_MIDDLE }
	};

	static CPoint vCOMP_OFFSET[1];
	static BYTE vCOMP_BASIS[1];

	if( bRestore )
	{
		for( INT i=0 ; i < 1 ; ++i )
		{
			CTClientUIBase* pCOMP = (CTClientUIBase*) FindKid( vCOMP[ i ][0] );
			if( pCOMP )
			{
				pCOMP->m_vCompOffset = vCOMP_OFFSET[i];
				pCOMP->m_bBasisPoint = vCOMP_BASIS[i];

				pCOMP->DefaultPosition( vBASIS, bRestore);
			}
		}
	}
	else
	{
		for( INT i=0 ; i < 1 ; ++i )
		{
			CTClientUIBase* pCOMP = (CTClientUIBase*) FindKid( vCOMP[ i ][0] );
			if( pCOMP )
			{
				CPoint pt;
				pCOMP->GetComponentPos(&pt);
				pt -= vBASIS[ vCOMP[i][1] ];

				pCOMP->m_vCompOffset = pt;
				pCOMP->m_bBasisPoint = (BYTE) vCOMP[i][1];

				vCOMP_OFFSET[i] = pCOMP->m_vCompOffset;
				vCOMP_BASIS[i] = pCOMP->m_bBasisPoint;

				pCOMP->DefaultPosition( vBASIS, bRestore);
			}
		}
	}
#else
	static DWORD vCOMP[1][2] =
	{
		{ ID_FRAME_CHAT, TBASISPOINT_LEFT_BOTTOM }
	};

	static CPoint vCOMP_OFFSET[1];
	static BYTE vCOMP_BASIS[1];

	if( bRestore )
	{
		for( INT i=0 ; i < 1 ; ++i )
		{
			CTClientUIBase* pCOMP = (CTClientUIBase*) FindKid( vCOMP[ i ][0] );
			if( pCOMP )
			{
				pCOMP->m_vCompOffset = vCOMP_OFFSET[i];
				pCOMP->m_bBasisPoint = vCOMP_BASIS[i];

				pCOMP->DefaultPosition( vBASIS, bRestore);
			}
		}
	}
	else
	{
		for( INT i=0 ; i < 1 ; ++i )
		{
			CTClientUIBase* pCOMP = (CTClientUIBase*) FindKid( vCOMP[ i ][0] );
			if( pCOMP )
			{
				CPoint pt;
				pCOMP->GetComponentPos(&pt);
				pt -= vBASIS[ vCOMP[i][1] ];

				pCOMP->m_vCompOffset = pt;
				pCOMP->m_bBasisPoint = (BYTE) vCOMP[i][1];

				vCOMP_OFFSET[i] = pCOMP->m_vCompOffset;
				vCOMP_BASIS[i] = pCOMP->m_bBasisPoint;

				pCOMP->DefaultPosition( vBASIS, bRestore);
			}
		}
	}
#endif
}

void CTMainUI::SwitchFocus(TComponent *pCandidate)
{
	CTClientUIBase::SwitchFocus( pCandidate );

	RemoveKid( m_pCENTER );
	AddKid( m_pCENTER );
}




























struct ADJUSTCOMP
{
	DWORD dwCompID;
	CRect rtORG;
	INT nHeight;
};

typedef std::vector<ADJUSTCOMP>	ADJUSTCOMPARRAY;

void CTMainUI::AdjustOtherCompByTREECALLSLOT( BOOL bShow )
{
	static ADJUSTCOMPARRAY array;

	if( bShow )
	{
		array.clear();

		CRect rtTRECALLSLOT;
		CTGaugePannel* pGaugePannel = static_cast<CTGaugePannel*>( CTClientGame::GetInstance()->GetFrame( TFRAME_GAUGE ) );
		pGaugePannel->m_pTRECALLFRM->GetComponentRect( &rtTRECALLSLOT );

		for(TCOMP_LIST::iterator it=GetFirstKidsFinder() ; !EndOfKids(it) ; )
		{
			TComponent* pCOMP = GetNextKid( it );
			if( pCOMP->m_id == ID_CTRLINST_POS_CHAT ||
#ifdef NEW_IF
				pCOMP->m_id == ID_FRAME_EXPBAR_NEW ||
				pCOMP->m_id == ID_FRAME_MAIN_RIGHT_NEW ||
#else
				pCOMP->m_id == ID_FRAME_MAIN_CENTER ||
				pCOMP->m_id == ID_FRAME_MAIN_RIGHT ||
#endif
				pCOMP->m_id == ID_CTRLINST_MAIN_SLOT_2 ||
				pCOMP->m_id == ID_CTRLINST_MAIN_SLOT_1 ||
				pCOMP->m_id == ID_CTRLINST_MAIN_SLOT_1_NEW ||
				pCOMP->m_id == ID_CTRLINST_MAIN_SLOT_2_NEW )
			{
				continue;
			}

			CRect rtCOMP;
			pCOMP->GetComponentRect( &rtCOMP );

			CRect intr;
			if( intr.IntersectRect( &rtTRECALLSLOT, &rtCOMP ) )
			{
				INT dHeight = 0;

				if( 	rtTRECALLSLOT.top > rtCOMP.top )
					dHeight = intr.Height();
				else
					dHeight = rtCOMP.bottom - rtTRECALLSLOT.bottom + rtTRECALLSLOT.Height();

				rtCOMP.top -= dHeight;
				rtCOMP.bottom -= dHeight;

				ADJUSTCOMP adjust;
					adjust.dwCompID = pCOMP->GetID();
					adjust.nHeight = dHeight;
					adjust.rtORG = rtCOMP;

				pCOMP->SetComponentRect( &rtCOMP );
				array.push_back( adjust );
			}
		} // end for()
	}
	else if( bShow == FALSE && array.empty() == false )
	{
		ADJUSTCOMPARRAY::iterator it, end;
		it = array.begin();
		end = array.end();

		for(; it != end ; ++it )
		{
			TComponent* pCOMP = FindKid( it->dwCompID );

			if( pCOMP )
			{
				CRect rtCOMP;
				pCOMP->GetComponentRect( &rtCOMP );

				if( rtCOMP == it->rtORG )
				{
					rtCOMP.top += it->nHeight;
					rtCOMP.bottom += it->nHeight;
					pCOMP->SetComponentRect( &rtCOMP );
				}
			} // end if( pCOMP )
		} // end for

		array.clear();
	}
}

