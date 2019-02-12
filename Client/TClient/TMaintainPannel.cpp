#include "StdAfx.h"
#include "Resource.h"
#include "TClientGame.h"
#include "TPotionPannel.h"
#include "TMaintainPannel.h"

CTMaintainPannel::CTMaintainPannel( TComponent *pParent, FRAMEDESC_SHAREDPTR pDesc)
:CTClientUIBase( pParent, pDesc)
{
	if(m_id == ID_FRAME_MAINTAIN2R)
	{
		const int MAINTAIN_COUNT = 10;

		static DWORD dwIconID[TMTYPE_COUNT][MAINTAIN_COUNT] =
		{
			{
				ID_CTRLINST_P1,
				ID_CTRLINST_P2,
				ID_CTRLINST_P3,
				ID_CTRLINST_P4,
				ID_CTRLINST_P5,
				ID_CTRLINST_P6,
				ID_CTRLINST_P7,
				ID_CTRLINST_P8,
				ID_CTRLINST_P9,
				ID_CTRLINST_P10
			},
			{
				ID_CTRLINST_N1,
				ID_CTRLINST_N2,
				ID_CTRLINST_N3,
				ID_CTRLINST_N4,
				ID_CTRLINST_N5,
				ID_CTRLINST_N6,
				ID_CTRLINST_N7,
				ID_CTRLINST_N8,
				ID_CTRLINST_N9,
				ID_CTRLINST_N10
			}
		};

		static DWORD dwTextID[TMTYPE_COUNT][MAINTAIN_COUNT] =
		{
			{
				ID_CTRLINST_PT1,
				ID_CTRLINST_PT2,
				ID_CTRLINST_PT3,
				ID_CTRLINST_PT4,
				ID_CTRLINST_PT5,
				ID_CTRLINST_PT6,
				ID_CTRLINST_PT7,
				ID_CTRLINST_PT8,
				ID_CTRLINST_PT9,
				ID_CTRLINST_PT10
			},
			{
				ID_CTRLINST_NT1,
				ID_CTRLINST_NT2,
				ID_CTRLINST_NT3,
				ID_CTRLINST_NT4,
				ID_CTRLINST_NT5,
				ID_CTRLINST_NT6,
				ID_CTRLINST_NT7,
				ID_CTRLINST_NT8,
				ID_CTRLINST_NT9,
				ID_CTRLINST_NT10
			}
		};

		for( BYTE i=0; i<TMTYPE_COUNT; i++)
		{
			m_bCount[i] = 0;

			for( BYTE j=0; j<MAINTAIN_COUNT; j++)
			{
				m_pMAINTAIN_ICON[i].push_back((TImageList *) FindKid(dwIconID[i][j]));
				m_pMAINTAIN_TIME[i].push_back((TComponent*) FindKid(dwTextID[i][j]));

				if(m_pMAINTAIN_ICON[i][j])
				{
					m_pMAINTAIN_ICON[i][j]->EnableComponent(TRUE);
					m_pMAINTAIN_ICON[i][j]->ShowComponent(TRUE);
					m_pMAINTAIN_ICON[i][j]->SetCurImage(0);
				}

				if( m_pMAINTAIN_TIME[i][j])
				{
					m_pMAINTAIN_TIME[i][j]->m_strText = "";
					m_pMAINTAIN_TIME[i][j]->SetTextAlign(ALIGN_CENTER);
				}

				m_vMAINTAININFO_TSKILL[i].push_back(NULL);
				m_vMAINTAININFO_LEVEL[i].push_back(0);
			}
		}

		m_bSND = FALSE;

		m_pNextBtn[TMTYPE_P] = static_cast<TButton*>( FindKid( ID_CTRLINST_PB ) );
		m_pNextBtn[TMTYPE_N] = static_cast<TButton*>( FindKid( ID_CTRLINST_NB ) );

		for( int i=0; i<TMTYPE_COUNT; ++i )
			if( m_pNextBtn[i] )
			{	
				m_pNextBtn[i]->ShowComponent( FALSE );
				m_pNextBtn[i]->m_bHitTestType = HITTEST_TYPE_RECT;
			}

		m_pOBJ = NULL;
	}
	else
	{
		const int MAINTAIN_COUNT = 6;

		static DWORD dwIconID[TMTYPE_COUNT][MAINTAIN_COUNT] =
		{
			{
				ID_CTRLINST_P1,
				ID_CTRLINST_P2,
				ID_CTRLINST_P3,
				ID_CTRLINST_P4,
				ID_CTRLINST_P5,
				ID_CTRLINST_P6
			},
			{
				ID_CTRLINST_N1,
				ID_CTRLINST_N2,
				ID_CTRLINST_N3,
				ID_CTRLINST_N4,
				ID_CTRLINST_N5,
				ID_CTRLINST_N6
			}
		};

		static DWORD dwTextID[TMTYPE_COUNT][MAINTAIN_COUNT] =
		{
			{
				ID_CTRLINST_PT1,
				ID_CTRLINST_PT2,
				ID_CTRLINST_PT3,
				ID_CTRLINST_PT4,
				ID_CTRLINST_PT5,
				ID_CTRLINST_PT6
			},
			{
				ID_CTRLINST_NT1,
				ID_CTRLINST_NT2,
				ID_CTRLINST_NT3,
				ID_CTRLINST_NT4,
				ID_CTRLINST_NT5,
				ID_CTRLINST_NT6
			}
		};

		for( BYTE i=0; i<TMTYPE_COUNT; i++)
		{
			m_bCount[i] = 0;

			for( BYTE j=0; j<MAINTAIN_COUNT; j++)
			{
				m_pMAINTAIN_ICON[i].push_back((TImageList *) FindKid(dwIconID[i][j]));
				m_pMAINTAIN_TIME[i].push_back((TComponent*) FindKid(dwTextID[i][j]));

				if(m_pMAINTAIN_ICON[i][j])
				{
					m_pMAINTAIN_ICON[i][j]->EnableComponent(TRUE);
					m_pMAINTAIN_ICON[i][j]->ShowComponent(TRUE);
					m_pMAINTAIN_ICON[i][j]->SetCurImage(0);
				}

				if( m_pMAINTAIN_TIME[i][j])
				{
					m_pMAINTAIN_TIME[i][j]->m_strText = "";
					m_pMAINTAIN_TIME[i][j]->SetTextAlign(ALIGN_CENTER);
				}

				m_vMAINTAININFO_TSKILL[i].push_back(NULL);
				m_vMAINTAININFO_LEVEL[i].push_back(0);
			}
		}

		m_bSND = FALSE;

		m_pNextBtn[TMTYPE_P] = static_cast<TButton*>( FindKid( ID_CTRLINST_PB ) );
		m_pNextBtn[TMTYPE_N] = static_cast<TButton*>( FindKid( ID_CTRLINST_NB ) );

		for( int i=0; i<TMTYPE_COUNT; ++i )
			if( m_pNextBtn[i] )
			{	
				m_pNextBtn[i]->ShowComponent( FALSE );
				m_pNextBtn[i]->m_bHitTestType = HITTEST_TYPE_RECT;
			}

		m_pOBJ = NULL;
	}
}

CTMaintainPannel::~CTMaintainPannel()
{
}

BOOL CTMaintainPannel::HitTest( CPoint pt)
{
	for( BYTE i=0; i<TMTYPE_COUNT; ++i )
		if( m_pNextBtn[i] &&
			m_pNextBtn[i]->IsVisible() &&
			m_pNextBtn[i]->HitTest( pt ) )
			return TRUE;

	for( BYTE i=0; i<TMTYPE_COUNT; i++)
		for( BYTE j=0; j<m_pMAINTAIN_ICON[i].size(); j++)
			if( m_pMAINTAIN_ICON[i][j] &&
				m_pMAINTAIN_ICON[i][j]->GetCurImage() &&
				m_pMAINTAIN_ICON[i][j]->HitTest(pt) )
				return TRUE;

	return FALSE;
}

void CTMaintainPannel::OnLButtonDown(UINT nFlags, CPoint pt)
{
	for( BYTE i=0; i<TMTYPE_COUNT; ++i )
	{
		if( m_pNextBtn[i] &&
			m_pNextBtn[i]->IsVisible() &&
			m_pNextBtn[i]->HitTest( pt ) )
		{
			m_pNextBtn[i]->OnLButtonDown( nFlags, pt );

			if( i == TMTYPE_P )
				ClickedPNext();
			else
				ClickedNNext();
		}
	}
}

BOOL CTMaintainPannel::DoMouseWheel( UINT nFlags, short zDelta, CPoint pt)
{
	if( !HitTest( pt ) )
		return FALSE;

	ITDetailInfoPtr pInfo = GetTInfoKey(pt);
	if( pInfo )
	{
		CTSkillDetInfoPtr pSkillInfo = pInfo.staticCast<CTSkillDetInfo>();
		LPTSKILL pTSKILL = pSkillInfo->GetSkillTemp();

		if( pTSKILL &&
			pTSKILL->m_bCanCancel &&
			IsPREMIUMMaintain( pTSKILL ) )
			return FALSE;
	}
	else
	{
		for( int i=0; i<TMTYPE_COUNT; ++i )
			if( !m_pNextBtn[i]->HitTest( pt ) )
				return FALSE;
			else
				break;
	}

	LISTTMAINTAIN::iterator itor;
	LISTTMAINTAIN::iterator end;

	for( BYTE i=0; i<TMTYPE_COUNT; ++i )
	{
		if( !m_pNextBtn[i] )
			continue;

		if( i == TMTYPE_P && m_pNextBtn[i]->IsVisible() )
		{
			itor = m_pOBJ->m_vTPRotation.begin();
			end = m_pOBJ->m_vTPRotation.end();
		}
		else if( i == TMTYPE_N && m_pNextBtn[i]->IsVisible() )
		{
			itor = m_pOBJ->m_vTNRotation.begin();
			end = m_pOBJ->m_vTNRotation.end();
		}
		else
		{
			return FALSE;
		}

		while( itor != end )
		{
			if( zDelta < 0 )
			{
				i == 0 ? ClickedPNext() : ClickedNNext();
				return TRUE;
			}
			else if( zDelta > 0 )
			{
				i == 0 ? ClickedPPrev() : ClickedNPrev();
				return TRUE;
			}
			++itor;
		}
	}

	return TRUE;
}

bool IsPREMIUMMaintain( CTClientMaintain* pMAINTAIN )
{
	static DWORD dwPremiumMaintain[] =
	{
		PREMIUM_MAINTAIN1,
		PREMIUM_MAINTAIN2,
		PREMIUM_MAINTAIN3,
		PREMIUM_MAINTAIN4,
		PREMIUM_MAINTAIN5,
		PREMIUM_MAINTAIN6,
		PREMIUM_MAINTAIN7
	};

	if( pMAINTAIN && pMAINTAIN->m_pTSKILL)
	{
		for( INT i=0 ; i < PREMIUM_MAINTAIN_COUNT ; ++i )
			if( dwPremiumMaintain[i] == pMAINTAIN->m_pTSKILL->m_wSkillID )
				return true;
	}
	return false;
}

bool IsPREMIUMMaintain( LPTSKILL pTSKILL )
{
	static DWORD dwPremiumMaintain[] =
	{
		PREMIUM_MAINTAIN1,
		PREMIUM_MAINTAIN2,
		PREMIUM_MAINTAIN3,
		PREMIUM_MAINTAIN4,
		PREMIUM_MAINTAIN5,
		PREMIUM_MAINTAIN6,
		PREMIUM_MAINTAIN7
	};

	if( pTSKILL)
	{
		for( INT i=0 ; i < PREMIUM_MAINTAIN_COUNT ; ++i )
			if( dwPremiumMaintain[i] == pTSKILL->m_wSkillID )
				return true;
	}
	return false;
}

bool SortCancelFirst( CTClientMaintain* p1, CTClientMaintain* p2 )
{
	if( p1->m_pTSKILL && p2->m_pTSKILL )
	{
		BOOL bPremium1 = IsPREMIUMMaintain(p1);
		BOOL bPremium2 = IsPREMIUMMaintain(p2);

		if( bPremium1 && bPremium2 )
			return p1->m_pTSKILL->m_wSkillID > p2->m_pTSKILL->m_wSkillID;
		else if( bPremium1 || bPremium2 )
		{
			if( bPremium1 )
				return true;
			else
				return false;
		}
		else
		{
			if( p2->m_pTSKILL->m_bCanCancel && !p1->m_pTSKILL->m_bCanCancel)
				return false;
		}
	}

	return p1->m_pTSKILL->m_wSkillID > p2->m_pTSKILL->m_wSkillID;
}

#ifdef NEW_IF
bool IsShown( CTClientMaintain* p1 )
{
	if( p1->m_pTSKILL )
	{
		if(p1->m_pTSKILL->m_bPremIconID != 0)
		{
			return true;
		}
	}

	return false;
}
#endif
	
void CTMaintainPannel::ResetMAINTAIN( CTClientObjBase* pOBJ, DWORD dwTick, CTClientObjBase* pMainChar)
{
	HideAll();

	m_pOBJ = pOBJ;
	m_pMainOBJ = pMainChar;
	VTMAINTAIN vTMAIN_TAIN;

	LPMAPTMAINTAIN pTMAINTAIN = pOBJ->GetTMAINTAIN();
	VTMAINTAIN vTMAINTAIN;
	VTMAINTAIN vTPRotation;
	VTMAINTAIN vTNRotation;

	{
		MAPTMAINTAIN::iterator itMAINTAIN;
		for( itMAINTAIN = pTMAINTAIN->begin(); itMAINTAIN != pTMAINTAIN->end(); itMAINTAIN++)
			vTMAINTAIN.push_back( itMAINTAIN->second );

		std::sort( vTMAINTAIN.begin(), vTMAINTAIN.end(), SortCancelFirst);
	}

	for( int i=0; i<TMTYPE_COUNT; ++i )
		m_bCount[i] = 0;

	VTMAINTAIN::iterator itMAINTAIN;

	for( int i=0; i<vTMAINTAIN.size(); ++ i )
	{
		CTClientMaintain *pTSKILL = vTMAINTAIN[i];

		if( !IsPREMIUMMaintain( pTSKILL ) )
			if( !pTSKILL->m_pTSKILL->m_bCanCancel )
				break;

#ifdef NEW_IF
	if( pTSKILL && pTSKILL->m_pTSKILL && pTSKILL->m_pTSKILL->m_bShowIcon && pTSKILL->m_pTSKILL->m_bPremIconID == 0)
		{
			BYTE bMType = (pTSKILL->m_pTSKILL->m_bPositive % 2) ? TMTYPE_P : TMTYPE_N;
			BYTE bTMCNT = m_bCount[bMType];
			TImageList* pTIMGLIST = m_pMAINTAIN_ICON[bMType][bTMCNT];
			TComponent* pTTIME = m_pMAINTAIN_TIME[bMType][bTMCNT];

			if( bTMCNT < TMAINTAIN_COUNT && pTIMGLIST )
			{
				if(pTSKILL->GetLeftTick(dwTick) > 0 && pTSKILL->m_pTSKILL->m_bShowTime)
				{
					pTTIME->m_strText = CTClientGame::ToTimeOneString(pTSKILL->GetLeftTick(dwTick));
					pTTIME->ShowComponent(TRUE);
				}
				else
				{
					pTTIME->m_strText.Empty();
					pTTIME->ShowComponent(FALSE);
				}

				if( pTSKILL->m_pTSKILL->m_wIconID != 0 )
				{
					pTIMGLIST->SetCurImage(pTSKILL->m_pTSKILL->m_wIconID);
					pTIMGLIST->ShowComponent(TRUE);
				}
				else
					pTIMGLIST->ShowComponent(FALSE);

				m_vMAINTAININFO_TSKILL[ bMType ][ bTMCNT ] = pTSKILL->m_pTSKILL;
				m_vMAINTAININFO_LEVEL[ bMType ][ bTMCNT ] = pTSKILL->m_bLevel;
			}
			
			++m_bCount[bMType];
		}
#else
	if( pTSKILL && pTSKILL->m_pTSKILL && pTSKILL->m_pTSKILL->m_bShowIcon)
		{

			BYTE bMType = (pTSKILL->m_pTSKILL->m_bPositive % 2) ? TMTYPE_P : TMTYPE_N;
			BYTE bTMCNT = m_bCount[bMType];
			TImageList* pTIMGLIST = m_pMAINTAIN_ICON[bMType][bTMCNT];
			TComponent* pTTIME = m_pMAINTAIN_TIME[bMType][bTMCNT];


			if( bTMCNT < m_pMAINTAIN_ICON[bMType].size() && pTIMGLIST )
			{
				if(pTSKILL->m_pTSKILL->m_bShowTime && pTSKILL->GetLeftTick(dwTick))
				{
					pTTIME->m_strText = CTClientGame::ToTimeOneString(pTSKILL->GetLeftTick(dwTick));
					pTTIME->ShowComponent(TRUE);
				}
				else
				{
					pTTIME->m_strText.Empty();
					pTTIME->ShowComponent(FALSE);
				}

				if( pTSKILL->m_pTSKILL->m_wIconID != 0 )
				{
					pTIMGLIST->SetCurImage(pTSKILL->m_pTSKILL->m_wIconID);
					pTIMGLIST->ShowComponent(TRUE);
				}
				else
					pTIMGLIST->ShowComponent(FALSE);


				m_vMAINTAININFO_TSKILL[ bMType ][ bTMCNT ] = pTSKILL->m_pTSKILL;
				m_vMAINTAININFO_LEVEL[ bMType ][ bTMCNT ] = pTSKILL->m_bLevel;
			}

			++m_bCount[bMType];
		}
#endif
	}
	ResetROTATION(dwTick);

	for( BYTE i=0; i<TMTYPE_COUNT; ++i)
	{
		for( BYTE j=m_bCount[i] ; j<m_pMAINTAIN_ICON[i].size(); ++j)
		{
			if( m_pMAINTAIN_ICON[i][j] )
				m_pMAINTAIN_ICON[i][j]->ShowComponent(FALSE);
			if( m_pMAINTAIN_TIME[i][j] )
				m_pMAINTAIN_TIME[i][j]->ShowComponent(FALSE);
		}
	}
#ifdef NEW_IF
		DWORD dwCount=0;
		CTClientGame* pGame = CTClientGame::GetInstance();
		CTPotionPannel* pPotion = static_cast<CTPotionPannel*>(pGame->GetFrame(TFRAME_POTIONS));
		LPMAPTMAINTAIN pTMAIN_TAIN = pMainChar->GetTMAINTAIN();
		MAPTMAINTAIN::iterator itMAIN_TAIN;
		
		for( itMAIN_TAIN = pTMAIN_TAIN->begin(); itMAIN_TAIN != pTMAIN_TAIN->end(); itMAIN_TAIN++)
			vTMAIN_TAIN.push_back( itMAIN_TAIN->second );
		
		std::sort( vTMAIN_TAIN.begin(), vTMAIN_TAIN.end(), SortCancelFirst);
		pPotion->HideAll();
		
		for (BYTE jj = 0; jj < vTMAIN_TAIN.size(); ++jj)
		{
			CTClientMaintain *pTSKILL = vTMAIN_TAIN[jj];
			LPTSKILL pSkill = CTChart::FindTSKILLTEMP(WORD(pTSKILL->m_pTSKILL->m_wSkillID));




			if (pSkill->m_bPremIconID != 0)
			{
				if (IsShown(pTSKILL))
					dwCount++;
				else
					dwCount--;



				pPotion->AddMaintain((BYTE)dwCount, pTSKILL->m_pTSKILL->m_bPremIconID, dwTick, pTSKILL, pMainChar);
			}
		}
#endif
}

void CTMaintainPannel::HideAll()
{
	for( BYTE i=0; i<TMTYPE_COUNT; ++i )
	{
		if( m_pNextBtn[i] )
			m_pNextBtn[i]->ShowComponent( FALSE );
	}

	for( BYTE i=0; i<TMTYPE_COUNT; ++i)
		for( BYTE j=0; j<m_pMAINTAIN_TIME[i].size(); ++j)
				if(m_pMAINTAIN_ICON[i][j])
				{
					m_pMAINTAIN_TIME[i][j]->m_strText.Empty();
					m_pMAINTAIN_TIME[i][j]->ShowComponent(FALSE);
					
					m_pMAINTAIN_ICON[i][j]->SetCurImage(0);
					m_pMAINTAIN_ICON[i][j]->ShowComponent(FALSE);

					m_vMAINTAININFO_TSKILL[i][j] = NULL;
					m_vMAINTAININFO_LEVEL[i][j] = 0;
				}	
}

ITDetailInfoPtr CTMaintainPannel::GetTInfoKey( const CPoint& point )
{
	ITDetailInfoPtr pInfo(NULL);

	for( BYTE i=0; i<TMTYPE_COUNT; ++i)
	{
		for( BYTE j=0; j<m_pMAINTAIN_ICON[i].size(); ++j)
		{
			if(m_pMAINTAIN_ICON[i][j] &&
				m_pMAINTAIN_ICON[i][j]->HitTest(point) &&
				m_vMAINTAININFO_TSKILL[i][j] != NULL )
			{
				CRect rc;
				m_pMAINTAIN_ICON[i][j]->GetComponentRect(&rc);
				m_pMAINTAIN_ICON[i][j]->ComponentToScreen(&rc);

				pInfo = CTDetailInfoManager::NewSkillInst( 
					m_vMAINTAININFO_TSKILL[i][j],
					m_vMAINTAININFO_LEVEL[i][j],
					FALSE,
					rc);

				pInfo->SetDir(TRUE, FALSE, TRUE);
				return pInfo;
			}
		}
	}

	return pInfo;
}

void CTMaintainPannel::ClickedPNext()
{
	if( !m_pOBJ || m_pOBJ->m_vTPRotation.empty() )
		return ;

	CTClientMaintain* pFront = m_pOBJ->m_vTPRotation.front();
	m_pOBJ->m_vTPRotation.push_back( pFront );
	m_pOBJ->m_vTPRotation.erase( m_pOBJ->m_vTPRotation.begin() );
}

void CTMaintainPannel::ClickedPPrev()
{
	if( !m_pOBJ || m_pOBJ->m_vTPRotation.empty() )
		return ;

	CTClientMaintain* pBack = m_pOBJ->m_vTPRotation.back();
	m_pOBJ->m_vTPRotation.push_front( pBack );
	m_pOBJ->m_vTPRotation.pop_back();
}

void CTMaintainPannel::ClickedNNext()
{
	if( !m_pOBJ || m_pOBJ->m_vTNRotation.empty() )
		return ;

	CTClientMaintain* pFront = m_pOBJ->m_vTNRotation.front();
	m_pOBJ->m_vTNRotation.push_back( pFront );
	m_pOBJ->m_vTNRotation.erase( m_pOBJ->m_vTNRotation.begin() );
}

void CTMaintainPannel::ClickedNPrev()
{
	if( !m_pOBJ || m_pOBJ->m_vTNRotation.empty() )
		return ;

	CTClientMaintain* pBack = m_pOBJ->m_vTNRotation.back();
	m_pOBJ->m_vTNRotation.push_front( pBack );
	m_pOBJ->m_vTNRotation.pop_back();
}

void CTMaintainPannel::SetMainOBJ(CTClientObjBase* pOBJ)
{
	
	m_pMainOBJ = pOBJ;
}
void CTMaintainPannel::ResetROTATION( DWORD dwTick)
{
	LISTTMAINTAIN::iterator itor;
	LISTTMAINTAIN::iterator end;
	for( int i=0; i<TMTYPE_COUNT; ++i )
	{
		if( i == TMTYPE_P )
		{
			itor = m_pOBJ->m_vTPRotation.begin();
			end = m_pOBJ->m_vTPRotation.end();
		}
		else
		{
			itor = m_pOBJ->m_vTNRotation.begin();
			end = m_pOBJ->m_vTNRotation.end();
		}

		while( itor != end )
		{
			BYTE bRCount = m_bCount[i];



			CTClientMaintain* pTSKILL = (*itor);
#ifdef NEW_IF
	if( pTSKILL && pTSKILL->m_pTSKILL && pTSKILL->m_pTSKILL->m_bShowIcon && pTSKILL->m_pTSKILL->m_bPremIconID == 0 )
			{
				TImageList* pTIMGLIST = m_pMAINTAIN_ICON[i][bRCount];
				TComponent* pTTIME = m_pMAINTAIN_TIME[i][bRCount];
				
				if( pTSKILL->m_pTSKILL->m_bPremIconID != 0)
				{
					pTIMGLIST->ShowComponent(FALSE);
					pTTIME->ShowComponent(FALSE);
				}

				if( bRCount < m_pMAINTAIN_TIME[i].size() && pTIMGLIST )
				{
					if(pTSKILL->GetLeftTick(dwTick) > 0 && pTSKILL->m_pTSKILL->m_bShowTime)
					{

						pTTIME->m_strText = CTClientGame::ToTimeOneString(pTSKILL->GetLeftTick(dwTick));
						pTTIME->ShowComponent(TRUE);
					}
					else
					{
						pTTIME->m_strText.Empty();
						pTTIME->ShowComponent(FALSE);
					}

					if( pTSKILL->m_pTSKILL->m_wIconID != 0 )
					{
						pTIMGLIST->SetCurImage(pTSKILL->m_pTSKILL->m_wIconID);
						pTIMGLIST->ShowComponent(TRUE);
					}
					else
						pTIMGLIST->ShowComponent(FALSE);

					m_vMAINTAININFO_TSKILL[ i ][ bRCount ] = pTSKILL->m_pTSKILL;
					m_vMAINTAININFO_LEVEL[ i ][ bRCount ] = pTSKILL->m_bLevel;
				}

				++m_bCount[i];
			}		
#else
	if( pTSKILL && pTSKILL->m_pTSKILL && pTSKILL->m_pTSKILL->m_bShowIcon )
			{
				TImageList* pTIMGLIST = m_pMAINTAIN_ICON[i][bRCount];
				TComponent* pTTIME = m_pMAINTAIN_TIME[i][bRCount];

				if( bRCount < m_pMAINTAIN_TIME[i].size() && pTIMGLIST )
				{
					if(pTSKILL->m_pTSKILL->m_bShowTime && pTSKILL->GetLeftTick(dwTick))
					{
						pTTIME->m_strText = CTClientGame::ToTimeOneString(pTSKILL->GetLeftTick(dwTick));
						pTTIME->ShowComponent(TRUE);
					}
					else
					{
						pTTIME->m_strText.Empty();
						pTTIME->ShowComponent(FALSE);
					}

					if( pTSKILL->m_pTSKILL->m_wIconID != 0 )
					{
						pTIMGLIST->SetCurImage(pTSKILL->m_pTSKILL->m_wIconID);
						pTIMGLIST->ShowComponent(TRUE);
					}
					else
						pTIMGLIST->ShowComponent(FALSE);

					m_vMAINTAININFO_TSKILL[ i ][ bRCount ] = pTSKILL->m_pTSKILL;
					m_vMAINTAININFO_LEVEL[ i ][ bRCount ] = pTSKILL->m_bLevel;
				}

				++m_bCount[i];
			}		
#endif
			++itor;
		}

		if( m_pNextBtn[i] && IsVisible() )
		{
			if( m_bCount[i] > m_pMAINTAIN_TIME[i].size() )
				m_pNextBtn[i]->ShowComponent( TRUE );
			else
				m_pNextBtn[i]->ShowComponent( FALSE );
		}
	}
}