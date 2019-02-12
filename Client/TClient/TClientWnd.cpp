#include "stdafx.h"
#include "md5.h"
#include <iostream>
#include <fstream> 
//#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <string.h>
#include "TClient.h"
#include "TClientWnd.h"
#include "TClientWnd.h"
#include "TMiniPopupDlg.h"
#include "SHA1.h"
#include "TItemUpDlg.h"
#include "TItemUpGaugeDlg.h"
#include "TItemRefineDlg.h"
#include "TCompanionInner.h"
#include "TCompanionStats.h"
#include "TCompanionAttrs.h"
#include "TCharInfoNewInner.h"
#include "TCharInfoNewDlg.h"
#include "TCharInfoNewWarDlg.h"
#include "TCharInfoNewPVPDlg.h"
#include "TItemRepairDlg.h"
#include "TItemGambleDlg.h"
#include "TItemExtPeriodDlg.h"
#include "TCommunityDlg.h"


#include "TGuildMemberFrame.h"
#include "TGuildNormalFrame.h"
#include "TGuildVolunteerFrame.h"
#include "TGuildTerritoryFrame.h"
#include "TRankingNewDlg.h"
#include "TPrivateShopDlg.h"
#include "TFrameGroupBase.h"
#include "TMessengerBase.h"
#include "TMsgGroupList.h"
#include "TMsgChatMemberList.h"
#include "TSoulmateFrame.h"
#include "TMessengerChat.h"
#include "TBlockListDlg.h"
#include "TMailListFrame.h"
#include "TMailSendDlg.h"
#include "TMailRecvDlg.h"
#include "TMailAskMoneyDlg.h"
#include "TPetMakeDlg.h"
#include "TPetManageDlg.h"
#include "PacketSpyDlg.h"
#include "TGUIPosition.h"
#include "TMailSender.h"
#include "TCandidateFrame.h"
#include "THelpFrame.h"
#include "TCraftQuestDlg.h"
#include "TRentSkillDlg.h"
#include "TGuildPvPRecordFrame.h"
#include "TGuildPointRewardFrame.h"
#include "TGuildPointLogFrame.h"
#include "TGuildPointLogFrame.h"
#include "TSiegeUI.h"
#include "TSiegeEnd.h"
#include "TSkygardenEnd.h"
#include "TSkygardenMap.h"
#include "TItemUpCashDlg.h"
#include "TUpItemSellDlg.h"
#include "TPortalShopDlgNew.h"
#include "TGuildRegularOffer.h"
#include "TGuildTacticsOffer.h"
#include "TTacticsInviteDlg.h"
#include "TItemColorDlg.h"
#include "TItemRegGuildDlg.h"
#include "TColorPicker.h"
#include "TFameRank.h"





#include "TFameBaseDlg.h"
#include "TFameListDlg.h"
#include "TChatCommander.h"
#include "TSettingFrame.h"
#include "TWebCashShopDlg.h"
#include "TTournamentEvent.h"
#include "TTournamentSelectWinner.h"
#include "TTournamentGage.h"
#include "TTournamentSelectTarget.h"
#include "TTournament.h"
#include "TTournamentResult.h"
#include "TTournamentMode.h"
#include "TWelcome.h"
#include "TRpcDlg.h"
#include "TRpcRewardDlg.h"
#include "TRpsRewardList.h"
#include "THtmlDocWnd.h"
#include "THttpCtrl.h"
#include "TAidCountry.h"
#include "TSelectCountry.h"
#include "TLimitEdit.h"
#include "TChallengeWaiting.h"
#include "TChallengeEvent.h"
#include "TChallengeItem.h"
#include <iostream> 
#include <comdef.h> 
#include <Wbemidl.h> 
#include <string.h> 
#include <windows.h> 
#include <tchar.h> 
#include <objbase.h> 
#include <atlbase.h>

#include "TUtilityBarDlg.h"
#include "TCompanionMiniUI.h"


#include "TSecuritySystemDlg.h"
#include "TBoxOpen.h"
#include "TArenaReg.h"
#include "TBoxOpenList.h"



#ifdef NEW_IF
#include "TPotionPannel.h"
#endif
#include "TSalutationDlg.h"
#include "TNewAuctionHouseDlg.h"


#include "TItemCraftDlg.h"
#include "TBattleInvenDlg.h"
#include "TBowRegisterDlg.h"
#include "TBowRegisterWaitingDlg.h"
#include "TBowRespawnDlg.h"
#include "TBowBPTradeDlg.h"
#include "TBowRankingDlg.h"
#include "BRTeamDlg.h"
#include "BRPannels.h"
#include "BRTRanking.h"
#include "BRRankingDlg.h"

#include "BattleRankTex.h"
#include "BattleRankProgressDlg.h"
#include "TSoulLotteryWinDlg.h"
#include "CompStyleDlg.h"
#include "TClientCustomCloak.h"
#include "TCustomCloakDlg.h"
#include "MacroProtection.h"

#include "TQuestNewDlg.h"
#include "GuildSkillsDlg.h"
#include "ArenaRanking.h"
#pragma comment(lib, "wbemuuid.lib") 

#define FILENAME ".\\Tcd\\TRace.tcd"

#define ID_FRAME_SALUTATION			(0x000004B7)
#define ID_FRAME_ITEMCRAFT			(0x000004BF)

#define ID_SERVERS_GROUP        (0x000068F0)
#define ID_SERVERS_CHANNEL       (0x000068F2)

BEGIN_MESSAGE_MAP(CTClientWnd, CTachyonWnd)
	ON_MESSAGE( WM_TOBJMSG, OnOBJMessage)
	ON_WM_DESTROY()
	ON_WM_KEYDOWN()
	ON_WM_KEYUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MBUTTONDOWN()
	ON_WM_MBUTTONUP()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
	ON_WM_RBUTTONDBLCLK()
	ON_WM_MBUTTONDBLCLK()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_MOUSEWHEEL()
	ON_WM_MOUSEMOVE()
	ON_WM_SETCURSOR()
	ON_WM_SYSKEYDOWN()
	ON_WM_SYSKEYUP()
END_MESSAGE_MAP()

CTClientWnd* CTClientWnd::m_pINSTANCE = NULL;
CTClientWnd* CTClientWnd::GetInstance() { return m_pINSTANCE; }
VTRESOLUTIONMODE CTClientWnd::m_vResolutionModes;

CReleaseChart::CReleaseChart()
{
}

CReleaseChart::~CReleaseChart()
{
	CTClientWnd::GetInstance()->ReleaseChart();
}

#ifdef ADD_SNOW
CString _on_chatcmd_snow(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame *pTGAME = (CTClientGame *) dwUSER;
	pTGAME->m_bSnowEventUserOn = !pTGAME->m_bSnowEventUserOn;
	
	if( pTGAME->m_bSnowEventUserOn &&
		pTGAME->GetMainChar()->m_pTREGION &&
		( pTGAME->GetMainChar()->m_pTREGION->m_dwID == 9729 ||
		pTGAME->GetMainChar()->m_pTREGION->m_dwID == 10498) )
		pTGAME->StartSnowEvent();
	else
		pTGAME->EndSnowEvent();

	return "";
}
#endif

CTClientWnd::CTClientWnd()
{
	m_pINSTANCE = this;

	m_MainGame.m_pTextCAM = &m_vTextCAM;
	m_MainGame.m_pCamera = &m_Camera;
	m_MainGame.m_pDevice = &m_Device;
	m_MainGame.m_pRES = &m_RES;
	m_MainGame.m_pMainWnd = this;

	m_MainGame.m_pMainChar->m_pHost = this;
	m_MainGame.m_pMainChar->ReleaseData();
	m_MainGame.m_pMainChar->m_bLOD = FALSE;

	m_TNet.m_pLIGHT = m_MainGame.m_vLIGHT;
	m_TNet.m_pHost = this;

	m_TNet.m_pDevice = &m_Device;
	//m_TNet.m_pCamera = &m_Camera;
	m_TNet.m_pRES = &m_RES;

	m_pTGROUP = NULL;

	m_vTCHARINFO.clear();
	m_bResetDevice = FALSE;
	m_bResetTick = TRUE;
	m_bRelogin = FALSE;
	m_bAutoLogin = FALSE;
	m_dwLoginDelay = 0;
	m_bChannel = 1;
	m_bSlotID = 0;

	m_dwUserID = 0;
	m_dwKickID = 0;
	m_dwKEY = 0;
	m_bCreateCardCnt = 0;
	m_bInPCROOM = FALSE;
	m_dwPrmPCROOM = 0;

	m_vNEWTCHAR.m_bContry = TCONTRY_PEACE;
	m_pTNet = &m_session[0];

	m_hResetEvent = CreateEvent(
		NULL,
		FALSE,
		FALSE,
		NULL);
	m_bModalFrame = T_INVALID;
	m_bNeedReadAgreement = TRUE;

	for( BYTE i=0; i<TCURSOR_COUNT; i++)
		m_vTCURSOR[i] = NULL;

	m_dwCmdParam = 0;
	m_bIntendLogout = FALSE;
	m_bNetCableDisconnected = FALSE;


#ifdef TEST_MODE
	CProfileSample::InitFrequency();
#endif	
}

CTClientWnd::~CTClientWnd()
{
	if( m_pTGROUP )
		delete m_pTGROUP;

	CloseHandle(m_hResetEvent);
}

/////////////////////////////////////////////////////////////////////////////
// CTClientWnd message handlers

void CTClientWnd::OnConnect( CTachyonSession *pSession, int nErrorCode)
{
	CTClientSession *pSESSION = (CTClientSession *) pSession;

	if(nErrorCode)
	{
		if( pSESSION->m_bSVR == SVR_MAP )
		{
			OnGM_EXIT_GAME();
			return ;
		}

		m_bRelogin = FALSE;



		OnClose( pSession, nErrorCode);
		pSession->End();

		m_TNet.EnableComponent(TRUE);
		ReFresh();

		return;
	}

	switch(pSESSION->m_bSVR)
	{
	case SVR_LOGIN	:
		{
			TFrame *pFRAME = m_TNet.FindFrame(ID_FRAME_LOGIN_NEW);

			TComponent *pEditID = pFRAME->FindKid(ID_CTRLINST_ID);
			TComponent *pEditPW = pFRAME->FindKid(ID_CTRLINST_PW);

			CString strPW;


			strPW = CTClientGame::GetSHA1String(pEditPW->m_strText);

			if( CTNationOption::MODIFY_DIRECTLOGIN )
			{
				if( m_bDirectLogin )
				{
					//m_pTNet->m_bValidLogin = TRUE;

					SendCS_LOGIN_REQ(
						m_strID,
						m_strPW,
						m_bSiteCode);
				}
				else
				{
					//m_pTNet->m_bValidLogin = TRUE;

					SendCS_LOGIN_REQ(
						pEditID->m_strText,
						strPW);
				}
			}
			else
			{
				//m_pTNet->m_bValidLogin = TRUE;

				SendCS_LOGIN_REQ(
					pEditID->m_strText,
					strPW );
			}


		}

		break;

	case SVR_MAP	:
		{
			/*if(!m_pTNet->m_bLock && m_pTNet->m_bValidLogin)
			{
				pSESSION->m_bValidLogin = TRUE;
				pSESSION->m_bLock = FALSE;
			}*/

			pSESSION->SendCS_CONNECT_REQ(
				TVERSION,
				m_bChannel,
				m_dwUserID,
				m_vTCHARINFO[m_bSlotID]->m_dwID,
				m_dwKEY,
				pSESSION->m_target.sin_addr.S_un.S_addr,
				htons(pSESSION->m_target.sin_port));
		}

		break;

	case SVR_KICK	:
		{
//			pSESSION->m_bValidLogin = TRUE;
			//pSESSION->m_bLock = FALSE;

			pSESSION->SendCS_KICKOUT_REQ(m_dwKickID);
			pSESSION->End();
			OnClose( pSESSION, 0);
		}

		break;

	case SVR_RELAY	:
		{
			/*if(!m_pTNet->m_bLock && m_pTNet->m_bValidLogin)
			{
				pSESSION->m_bValidLogin = TRUE;
				pSESSION->m_bLock = FALSE;
			}*/

			pSESSION->SendCS_RELAYCHARDATA_REQ(
				TVERSION,
				m_vTCHARINFO[m_bSlotID]->m_dwID,
				m_vTCHARINFO[m_bSlotID]->m_strNAME);
		}

		break;
	}
}

void CTClientWnd::OnClose( CTachyonSession *pSession, int nErrorCode)
{
	CTClientSession *pSESSION = (CTClientSession *) pSession;

	BYTE bSVR = m_MainGame.m_bLastSVR = pSESSION->m_bSVR;
	BYTE bSvrID = pSESSION->m_bSvrID;
	
	pSESSION->m_bSVR = SVR_NONE;
	pSESSION->m_bSvrID = 0;
	pSESSION->m_bLogicalValid = TRUE;

	if( bSVR == SVR_RELAY)
	{
		if(m_MainGame.m_pRelay == pSession)
			m_MainGame.m_pRelay = NULL;
		return;
	}
	else if( bSVR == SVR_MAP )
	{
		MAPTPENDINGMAPSESSION::iterator it = m_mapPendingMapSession.find( bSvrID );
		if( it != m_mapPendingMapSession.end() )
		{
			SOCKADDR_IN vTarget = (*it).second;
			m_mapPendingMapSession.erase( it );

			CTClientSession *pNEWSESSION = GetIdleSession();
			if( pNEWSESSION )
			{
				pNEWSESSION->m_target = vTarget;
				pNEWSESSION->m_bSvrID = bSvrID;
				pNEWSESSION->m_bSVR = SVR_MAP;

				pNEWSESSION->m_bLogicalValid = FALSE; // CS_CONNECT_ACK를 받기전까진 이 소켓은 연결은 유효해도 통신해서는 안된다.
				
				pNEWSESSION->Start(
					inet_ntoa(pNEWSESSION->m_target.sin_addr),
					pNEWSESSION->m_target.sin_port);
			}
		}
	}
	else if( bSVR == SVR_LOGIN )
	{
		m_bRelogin = FALSE;
	}

	BYTE bRelogin = m_bRelogin || bSVR == SVR_KICK ? TRUE : FALSE;
	BYTE bLogout = nErrorCode == 1 ? FALSE : TRUE;

	for( int i=0; i<MAX_CON; i++)
		if( m_session[i].m_bSVR != SVR_NONE && m_session[i].m_bSVR != SVR_RELAY)
		{
			bLogout = FALSE;
			break;
		}

	if (bLogout)
	{
		if (m_MainGame.m_dwBGM != ID_BGM_INTRO || !CTachyonRes::m_MEDIA.IsPlay(MEDIA_TMUSIC, m_MainGame.m_dwBGM, 0))
		{
			CTachyonRes::m_MEDIA.Stop(
				MEDIA_TMUSIC,
				m_MainGame.m_dwBGM, 0);

			CTachyonRes::m_MEDIA.Play(
				MEDIA_TMUSIC,
				ID_BGM_INTRO);

			m_MainGame.m_dwBGM = ID_BGM_INTRO;
		}

		/*if(m_MainGame.m_pRelay)
			m_MainGame.m_pRelay->OnClose(0);*/
		m_mapPendingMapSession.clear();
		for (int i = 0; i < MAX_CON; i++)
		{
			m_session[i].m_bSVR = SVR_NONE;
			m_session[i].m_bSvrID = 0;
			m_session[i].m_bLogicalValid = TRUE;
			m_session[i].End();
		}
		m_MainGame.m_pRelay = NULL;

		m_MainGame.ReleaseGame();
		SetMainFrame(&m_TNet);
		CloseMessageBox(TRUE);
		InitUI();

		if (!bRelogin)
		{
			if (!nErrorCode)
				OnGM_CLOSE_MSGBOX();

			m_TNet.SetLevel(ID_FRAME_LOGIN_NEW);
			m_TNet.EnableComponent(TRUE);
			ReFresh();

			TFrame *pFRAME = m_TNet.FindFrame(ID_FRAME_LOGIN_NEW);
			TEdit* pEditPW = (TEdit*)pFRAME->FindKid(ID_CTRLINST_PW);
			pEditPW->ClearText();

			if (theApp.m_bNeedWorldUnify)
			{
				MessageBoxOK(
					TSTR_NEEDWORLDUNIFY,
					TSTR_OK,
					GM_BEGIN_EXIT,


					0);
			}
			else if (m_bDirectLogin)
			{
				MessageBoxYesNo(
					TSTR_CONNET_RETRY,
					TSTR_YES,
					TSTR_NO,
					GM_LOGIN,
					GM_BEGIN_EXIT,
					GM_BEGIN_EXIT,
					TRUE,
					ID_SND_ERROR);
			}

			else if (!m_bIntendLogout) // 내가 의도한 세션종료가 아닌 경우 에러메시지 출력.
				OnERROR(TERR_CONNECT_FAILED);
		}
		else if (m_bRelogin)
		{
			m_bAutoLogin = TRUE;
			m_dwLoginDelay = 0;
		}
		else
		{
			m_TNet.EnableComponent(TRUE);

			MessageBoxYesNo(
				TSTR_MBOX_DUPLICATEDID,
				TSTR_YES,
				TSTR_NO,
				GM_LOGIN,
				m_bDirectLogin ? GM_BEGIN_EXIT : GM_CLOSE_MSGBOX,
				m_bDirectLogin ? GM_BEGIN_EXIT : GM_CLOSE_MSGBOX,
				TRUE,
				ID_SND_ERROR);
		}
	}

	m_bIntendLogout = FALSE;
}

void CTClientWnd::ProcessHotCommand( int nID)
{
	CTachyonWnd::ProcessHotCommand(nID);
}

void CTClientWnd::OnCommand( TCOMMAND Command)
{
	int nERROR = FALSE;
	
	m_dwCmdParam = Command.m_dwParam;

	switch(Command.m_dwID)
	{
	ON_GM_COMMAND(GM_CHANGE_SELECT_CHAR)
	ON_GM_COMMAND(GM_CHANGE_SELECT_SERVER)
		
	ON_GM_COMMAND(GM_START_4STORY)

	ON_GM_COMMAND(GM_TOGGLE_SCREEN_MODE)
	ON_GM_COMMAND(GM_BACKTO_SERVER)
	ON_GM_COMMAND(GM_BACKTO_LOGIN)
	ON_GM_COMMAND(GM_CLOSE_MSGBOX)
	ON_GM_COMMAND(GM_GOTO_CONTRY)
	ON_GM_COMMAND(GM_GOTO_NEWCHAR)
    ON_GM_COMMAND(GM_BACKTO_CHAR)
	ON_GM_COMMAND(GM_CHANGE_BACKTO_CHAR)
	ON_GM_COMMAND(GM_DEL_CHARMSG)
	ON_GM_COMMAND(GM_START_GAME)
	ON_GM_COMMAND(GM_CHANGE_START_GAME)
	ON_GM_COMMAND(GM_SHOW_LOADING_TEXT)
	ON_GM_COMMAND(GM_PREV_FACE)
	ON_GM_COMMAND(GM_PREV_HAIR)
	ON_GM_COMMAND(GM_NEXT_FACE)
	ON_GM_COMMAND(GM_NEXT_HAIR)
	ON_GM_COMMAND(GM_PREV_RACE)
	ON_GM_COMMAND(GM_PREV_CLASS)
	ON_GM_COMMAND(GM_NEXT_RACE)
	ON_GM_COMMAND(GM_NEXT_CLASS)
	ON_GM_COMMAND(GM_RACE_SEL_M)
	ON_GM_COMMAND(GM_RACE_SEL_W)
	ON_GM_COMMAND(GM_SEL_CHAR0)
	ON_GM_COMMAND(GM_SEL_CHAR1)
	ON_GM_COMMAND(GM_SEL_CHAR2)
	ON_GM_COMMAND(GM_SEL_CHAR3)
	ON_GM_COMMAND(GM_SEL_CHAR4)
	ON_GM_COMMAND(GM_SEL_CHAR5)
	ON_GM_COMMAND(GM_NEW_CHAR)
	ON_GM_COMMAND(GM_DEL_CHAR)
	ON_GM_COMMAND(GM_CONTRY_D)
	ON_GM_COMMAND(GM_CONTRY_C)
	ON_GM_COMMAND(GM_RSEL_HM)
	ON_GM_COMMAND(GM_RSEL_HW)
	ON_GM_COMMAND(GM_RSEL_BM)
	ON_GM_COMMAND(GM_RSEL_BW)
	ON_GM_COMMAND(GM_RSEL_NM)
	ON_GM_COMMAND(GM_RSEL_NW)
	ON_GM_COMMAND(GM_CSEL_0)
	ON_GM_COMMAND(GM_CSEL_1)
	ON_GM_COMMAND(GM_CSEL_2)
	ON_GM_COMMAND(GM_CSEL_3)
	ON_GM_COMMAND(GM_CSEL_4)
	ON_GM_COMMAND(GM_CSEL_5)
	ON_GM_COMMAND(GM_SELECT_CHANNEL)
	ON_GM_COMMAND(GM_CHANNEL_POPUP_CLICKED)
	ON_GM_COMMAND(GM_AGREEMENT)
	ON_GM_COMMAND(GM_OPEN_CHANNEL_LIST)
	ON_GM_COMMAND(GM_CHANGE_NEWCHAR)
	ON_GM_COMMAND(GM_NETCABLE_DISCONNECTED)
	ON_GM_COMMAND(GM_EXIT_GAME)
	ON_GM_COMMAND(GM_LOGIN)
	ON_GM_COMMAND(GM_EXIT)

	ON_GM_COMMAND(GM_NEXT_CHAR)
	ON_GM_COMMAND(GM_PREV_CHAR)
	ON_GM_COMMAND(GM_ROTATE_CHAR_LEFT)
	ON_GM_COMMAND(GM_ROTATE_CHAR_RIGHT)

	ON_GM_COMMAND(GM_CHAR_NAMING_OK)
	ON_GM_COMMAND(GM_CHAR_NAMING_LONG)
	ON_GM_COMMAND(GM_CHAR_NAMING_WRONG)

	ON_GM_COMMAND(GM_SECURITY_CONFIRM)

	default	: nERROR = m_MainGame.OnCommand(Command); break;
	}

	if(nERROR)
		OnERROR(nERROR);
}

void CTClientWnd::OnSessionMsg( CTachyonSession *pSession, CPacket *pPacket)
{
	if(!pPacket)
		return;

	DWORD dwID = pPacket->GetID();
	int nERROR = FALSE;

	switch(dwID)
	{
	ON_TRECEIVE(CS_CREATECHAR_ACK)
	ON_TRECEIVE(CS_DELCHAR_ACK)

	ON_TRECEIVE(CS_GROUPLIST_ACK)
	ON_TRECEIVE(CS_CHARLIST_ACK)
	ON_TRECEIVE(CS_LOGIN_ACK)
	ON_TRECEIVE(CS_START_ACK)

	ON_TRECEIVE(CS_CHANNELLIST_ACK)
	ON_TRECEIVE(CS_VETERAN_ACK)


	ON_TRECEIVE(CS_SECURITYCONFIRM_REQ)
	ON_TRECEIVE(CS_SECURITYRESULT_ACK)

	ON_TRECEIVE(CS_BOWPLAYERNOTIFY_ACK)

	default	: nERROR = m_MainGame.OnSessionMsg( pSession, pPacket); break;
	}

	if(nERROR)
		OnERROR(nERROR);
}

void CTClientWnd::OnERROR( int nERROR)
{
	DWORD dwFrameID = ID_FRAME_LOBBY_1BTN_MSGBOX;
	
	if( m_pMainFrame == &m_MainGame )
		dwFrameID = ID_FRAME_1BTNMSGBOX;

	DWORD dwYesID = GM_CLOSE_MSGBOX;
	DWORD dwNoID = GM_CLOSE_MSGBOX;

	DWORD dwNoTextID = TSTR_CANCEL;
	DWORD dwYesTextID = TSTR_OK;
	DWORD dwMsgID = 0;
			


	switch(nERROR)
	{
	case TERR_CONNECT_FAILED:
	case TERR_LOGIN_NOID:
	case TERR_DUP_CONNECT:
	case TERR_INVALID_VERSION:
	case TERR_INVALID_PASSWD:
	case TERR_INVALID_CHAR:
	case TERR_INVALID_USER:
	case TERR_IPBLOCK:
	case TERR_NOCHANNEL:


	{
		if( CTNationOption::MODIFY_DIRECTLOGIN )
		{
			if( m_bDirectLogin )
				dwYesID = GM_BEGIN_EXIT;
		}

		switch( nERROR )
		{
		case TERR_CONNECT_FAILED		:
			

			{
				dwMsgID = TSTR_CONNECT_FAILED;







#ifdef KEYHOOK_CTRLALTDEL
				// Keydown Error Message ( Contorl + Alt + Delete ).
				if( theApp.m_bKeyDownCAD )
				{
                    dwMsgID = TSTR_KEYDOWN_CAD;
					theApp.m_bKeyDownCAD = FALSE;
				}
#endif/*
#ifdef NEW_IF
				CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);

				if(m_MainGame.m_vTOPTION.m_bAutoHelp && m_MainGame.m_bLastSVR == SVR_MAP && m_MainGame.m_pSESSION)
					pTGaugePannel->DisconnectGaugeReset();
				
#endif*/
				break;
			}
		case TERR_LOGIN_NOID			: dwMsgID = TSTR_LOGIN_ID; break;
		case TERR_DUP_CONNECT			: dwMsgID = TSTR_DUPLICATE_CONNECT; break;
		case TERR_INVALID_VERSION		: dwMsgID = TSTR_INVALID_VERSION; break;
		case TERR_INVALID_PASSWD		: dwMsgID = TSTR_INVALID_PASSWD; break;
		case TERR_INVALID_CHAR			: dwMsgID = TSTR_INVALID_CHAR; break;
		case TERR_INVALID_USER			: dwMsgID = TSTR_INVALID_USER; break;
		case TERR_IPBLOCK				: dwMsgID = TSTR_IPBLOCK; break;
		case TERR_NOCHANNEL				: dwMsgID = TSTR_NOCHANNEL; break;

		}

		break;
	}

	case TERR_NETCABLE_DISCONNECTED	:
		{
			dwMsgID = TSTR_NETCABLE_DISCONNECTED;
			m_bNetCableDisconnected = FALSE;
			break;
		}
	case TERR_NOSERVER				: dwMsgID = TSTR_NOSERVER; break;
	case TERR_NOGROUP				: dwMsgID = TSTR_NOGROUP; break;	
	case TERR_INVALID_SLOT			: dwMsgID = TSTR_INVALID_SLOT; break;
	case TERR_NAME_TOO_LONG			: dwMsgID = TSTR_NAME_TOO_LONG; break;
	case TERR_INVALID_NAME			: dwMsgID = TSTR_INVALID_NAME; break;
	case TERR_DUPNAME				: dwMsgID = TSTR_DUPNAME; break;
	case TERR_NONAME				: dwMsgID = TSTR_NONAME; break;
	case TERR_NOCHAR				: dwMsgID = TSTR_NOCHAR; break;
	case TERR_NOSLOT				: dwMsgID = TSTR_NOSLOT; break;
	case TERR_NEEDCREATECARD		: dwMsgID = TSTR_NEEDCREATECARD; break;
	case TERR_ITEM_NOT_FOUND		: dwMsgID = TSTR_ITEM_NOT_FOUND; break;
	case TERR_CHANGECHARBASE_FAIL:	dwMsgID = TSTR_CHANGECHARBASE_FAIL; break;
	case TERR_ITEM_NO_MONEY			: dwMsgID = TSTR_ITEM_NO_MONEY; break;
	case TERR_ITEM_NO_POINT: dwMsgID = TSTR_ITEM_NO_POINT; break;
	case TERR_ITEM_NO_SLOT			: dwMsgID = TSTR_ITEM_NO_SLOT; break;
	case TERR_ITEM_DEALING			: dwMsgID = TSTR_ITEM_DEALING; break;
	case TERR_ITEM_CANNOT_SELL		: dwMsgID = TSTR_ITEM_CANNOT_SELL; break;
	case TERR_INTERNAL				: dwMsgID = TSTR_INTERNAL; break;
	case TERR_DELCHAR_INGUILD		: dwMsgID = TSTR_DELCHAR_ERR_INGUILD; break;
	case TERR_SERVER_BUSY			: dwMsgID = TSTR_ERR_SERVER_BUSY; break;
	case TERR_CHANNEL_BUSY			: dwMsgID = TSTR_ERR_CHANNEL_BUSY; break;
	case TERR_MAIL_REGION			: dwMsgID = TSTR_ERR_MAIL_REGION; break;
	case TERR_CABINET				: dwMsgID = TSTR_ERR_CABINET; break;
	case TERR_CABINET_NO_SLOT		: dwMsgID = TSTR_ERR_CABINET_NO_SLOT; break;
	case TERR_MAX_CABINET			: dwMsgID = TSTR_ERR_MAX_CABINET; break;
	case TERR_CURSE_STR				: dwMsgID = TSTR_ERR_CURSE_STR; break;
	case TERR_ITEM_INTERNAL			: dwMsgID = TSTR_ERR_ITEM_INTERNAL; break;
	case TERR_SND_TARGET			: dwMsgID = TSTR_ERR_SND_TARGET; break;
	case TERR_NO_GUILD				: dwMsgID = TSTR_ERR_NO_GUILD; break;
	case TERR_NEED_CASH				: dwMsgID = TSTR_ERR_NEED_CASH; break;
	case TERR_NOTARGET_CASH			: dwMsgID = TSTR_ERR_NOTARGET_CASH; break;
	case TERR_SOULMATE_SILENCE		: dwMsgID = TSTR_ERR_SOULMATE_SILENCE; break;
	case TERR_SOULMATE_NEEDMONEY	: dwMsgID = TSTR_ERR_SOULMATE_NEEDMONEY; break;
	case TERR_SOULMATE_NOTFOUND		: dwMsgID = TSTR_ERR_SOULMATE_NOTFOUND; break;
	case TERR_SOULMATE_FAIL			: dwMsgID = TSTR_ERR_SOULMATE_FAIL; break;
	case TERR_DURATIONREP_NOTNEED	: dwMsgID = TSTR_ERR_DURATIONREP_NOTNEED; break;
	case TERR_DURATIONREP_NOMONEY	: dwMsgID = TSTR_ERR_DURATIONREP_NOMONEY; break;
	case TERR_DURATIONREP_DISALLOW	: dwMsgID = TSTR_ERR_DURATIONREP_DISALLOW; break;
	case TERR_DURATIONREP_FAIL		: dwMsgID = TSTR_ERR_DURATIONREP_FAIL; break;
	case TERR_REFINE_NOMONEY		: dwMsgID = TSTR_ERR_REFINE_NOMONEY; break;
	case TERR_REFINE_MAXREFINE		: dwMsgID = TSTR_ERR_REFINE_MAXREFINE; break;
	case TERR_REFINE_LEVELDIFF		: dwMsgID = TSTR_ERR_REFINE_LEVELDIFF; break;
	case TERR_REFINE_FAIL			: dwMsgID = TSTR_ERR_REFINE_FAIL; break;
	case TERR_CASHSHOP_NOTFOUND: dwMsgID = TSTR_ERR_CASHSHOP_NOTFOUND; break;
	case TERR_CASHSHOP_MAXCOUNT: dwMsgID = TSTR_ERR_CASHSHOP_MAXCOUNT; break;
	case TERR_CASHSHOP_NEEDEXTEND: dwMsgID = TSTR_ERR_CASHSHOP_NEEDEXTEND; break;
	case TERR_CASHSHOP_NOTARGET: dwMsgID = TSTR_ERR_CASHSHOP_NOTARGET; break;
	case TERR_CASHSHOP_NOCASHINFO: dwMsgID = TSTR_ERR_CASHSHOP_NOCASHINFO; break;
	case TERR_EXTEND_PERIOD_FAIL: dwMsgID = TSTR_ERR_EXTEND_PERIOD_FAIL; break;
	case TERR_FAILED_STOREOPEN: dwMsgID = TSTR_FAILED_STOREOPEN; break;
	case TERR_GUILD_REWARD_NEEDPOINT: dwMsgID = TSTR_GUILD_REWARD_NEEDPOINT; break;
	case TERR_GUILD_REWARD_NOMEMBER: dwMsgID = TSTR_GUILD_REWARD_NOMEMBER; break;
	case TERR_GUILD_REWARD_INVALID: dwMsgID = TSTR_GUILD_REWWARD_INVALID; break;
	case TERR_GUILD_NOINPUT_ARTICLE_TITLE: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_TITLE; break;
	case TERR_GUILD_NOINPUT_ARTICLE_CONTENTS: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_CONTENTS; break;
	case TERR_GUILD_NOINPUT_ARTICLE_MINLEVEL: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_MINLEVEL; break;
	case TERR_GUILD_NOINPUT_ARTICLE_MAXLEVEL: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_MAXLEVEL; break;
	case TERR_GUILD_NOINPUT_ARTICLE_DAY: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_DAY; break;
	case TERR_GUILD_NOINPUT_ARTICLE_POINT: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_POINT; break;
	case TERR_GUILD_NOINPUT_ARTICLE_MONEY: dwMsgID = TSTR_GUILD_NOINPUT_ARTICLE_MONEY; break;
	case TERR_GUILD_NOTDUTY_WANTED_ADD_DEL: dwMsgID = TSTR_GUILD_NOTDUTY_WANTED_ADD_DEL; break;
	case TERR_GUILD_NOT_OWN_WANTED: dwMsgID = TSTR_GUILD_NOT_OWN_WANTED; break;
	case TERR_GUILD_ONLY_MASTER: dwMsgID = TSTR_GUILD_ONLY_MASTER; break;
	case TERR_GUILD_SELECT_WANTED:  dwMsgID = TSTR_GUILD_SELECT_WANTED; break;
	case TERR_NEED_JOIN_GUILD: dwMsgID = TSTR_NEED_JOIN_GUILD; break;
	case TERR_CANT_USE_NOW_CHANNEL: dwMsgID = TSTR_CANT_USE_NOW_CHANNEL; break;
	}

	MessageBox(
		dwMsgID,
		0, 0,
		dwYesTextID,
		dwNoTextID,
		dwFrameID,
		dwYesID,
		dwNoID,
		0,
		FALSE,
		TRUE,
		0,
		0,
		"",
		ID_SND_ERROR,
		MEDIA_TSOUND,
		TMSGBOXOPEN_OVERLAP);
}

void CTClientWnd::Render()
{
	static DWORD dwPrevTick = GetTClientTickCount();
	static CPoint prev;

	if(m_Device.m_pDevice)
	{
		DWORD dwTick = GetTClientTickCount();
		
		DWORD dwSec = (dwTick / 1000) % 60;
		DWORD dwMin = (dwTick / 1000 / 60) % 60;
		DWORD dwHour = (dwTick / 1000 / 60 / 60) % 24;
		DWORD dwDay = (dwTick / 1000 / 60 / 60 / 24);
		CTimeSpan timeSpan( dwDay, dwHour, dwMin, dwSec );
		CTClientApp::m_dCurDate = CTClientApp::m_dAppDate + timeSpan;

		TComponent *pFRAME = GetMainFrame();
		CPoint point;

		if(m_bAutoLogin)
		{
			m_dwLoginDelay += dwTick - dwPrevTick;

			if( m_dwLoginDelay > TRELOGIN_DELAY )
			{
				m_bAutoLogin = FALSE;
				m_dwLoginDelay = 0;

				OnGM_LOGIN();
			}
		}

		if( dwPrevTick + TMAXPASS_TICK > dwTick )
		{
			m_MainGame.m_vKEY.m_dwTick = dwTick;
			m_bResetTick = FALSE;
		}
		else if(m_bResetTick)
		{
			m_MainGame.m_vKEY.m_dwTick = dwTick;
			dwPrevTick = dwTick;
		}
		else
			m_MainGame.m_vKEY.m_dwTick = dwTick;

		if( m_MainGame.m_vKEY.m_dwTick != dwPrevTick)
		{
			CTachyonMesh::m_fLevelFactor = CTClientGame::GetObjDETAILOption();
			GetCursorPos(&point);
			ScreenToClient(&point);






			if( point != prev )
			{

				m_pMainFrame->OnMouseMove( 0, point);
				prev = point;
			}
		}
		while( pFRAME && pFRAME->GetParent() )
			pFRAME = pFRAME->GetParent();

		if(!m_Device.GetResetFlag())
		{
			if(!CTMinimapDlg::m_pTMINIMAP)
			{
				D3DXCreateTexture(
					m_Device.m_pDevice,
					TMINIMAPTEX_SIZE,
					TMINIMAPTEX_SIZE, 1,
					D3DUSAGE_RENDERTARGET,
					D3DFMT_A8R8G8B8,
					D3DPOOL_DEFAULT,
					&CTMinimapDlg::m_pTMINIMAP);
			}

			if(!CTRSCSDlg::m_pTBACK)
			{
				D3DXCreateTexture(
					m_Device.m_pDevice,
					TMINIMAPTEX_SIZE,
					TMINIMAPTEX_SIZE, 1,
					D3DUSAGE_RENDERTARGET,
					D3DFMT_A8R8G8B8,
					D3DPOOL_DEFAULT,
					&CTRSCSDlg::m_pTBACK);
			}

			if(!CTRSCSDlg::m_pTRSCS)
			{
				D3DXCreateTexture(
					m_Device.m_pDevice,
					TMINIMAPTEX_SIZE,
					TMINIMAPTEX_SIZE, 1,
					D3DUSAGE_RENDERTARGET,
					D3DFMT_A8R8G8B8,
					D3DPOOL_DEFAULT,
					&CTRSCSDlg::m_pTRSCS);
			}

			if(!CTDynamicBillboard::CheckInit())
				CTDynamicBillboard::InitTDBB(&m_Device);
		}

		m_Device.m_pDevice->Clear(
			0, NULL,
			D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER,
			D3DCOLOR_XRGB( 0, 0, 0),
			1.0f, 0);
		m_Device.m_pDevice->BeginScene();

		for (BYTE i = 0; i < PREMIUMSKILL_COUNT; ++i)
			m_MainGame.GetPremiumSkillsFrame(i)->CalcHotkeyTick();
		
		pFRAME->Render(min( TMAXPASS_TICK, m_MainGame.m_vKEY.m_dwTick - dwPrevTick));
		m_FontFPS.m_dwColor = 0xFFFFFFFF;

		if (m_MainGame.m_bShowDebugInfo ||
			m_MainGame.m_bShowFPSInfo )
			DrawFPS(m_MainGame.m_dwEstPing, 0, 0);

		if( IsLoading() && !m_strLOADMSG.IsEmpty() )
		{
			INT nX = m_Device.m_option.m_dwScreenX / 2 - 498;
			INT nY = m_Device.m_option.m_dwScreenY / 2 + 344;

			m_FontLOAD.TextOut(m_Device.m_pDevice, m_strLOADMSG, nX,nY);
		}

		m_Device.m_pDevice->EndScene();
		if( !IsIconic() && !m_Device.GetResetFlag() && !Present() )
			RestoreDevice();
		dwPrevTick = m_MainGame.m_vKEY.m_dwTick;
	}
}

void CTClientWnd::InitResource( CString strGroupID,
							    BYTE bGroupID)
{
	static DWORD dwFrameID[][2] = {
		{ ID_FRAME_LOGIN_NEW, ID_FRAME_LOGIN_NEW},
		{ ID_FRAME_AGREEMENT_NEW, ID_FRAME_AGREEMENT_NEW},
		{ ID_FRAME_SERVER_NEW, ID_FRAME_SERVER_NEW},
		{ ID_FRAME_CONTRY_NEW, ID_FRAME_CONTRY_NEW},
		{ ID_FRAME_CHAR_NEW, ID_FRAME_CHAR_NEW},
		{ ID_FRAME_NEWCHAR_NEW, ID_FRAME_NEWCHAR_NEW},
		{ ID_FRAME_LOADING, ID_FRAME_LOADING}
	};

	static DWORD dwMsgBoxID[][2] = {
		{ ID_FRAME_1BTNMSGBOX, ID_FRAME_1BTNMSGBOX},
		{ ID_FRAME_2BTNMSGBOX, ID_FRAME_2BTNMSGBOX},
		{ ID_FRAME_DELCHAR, ID_FRAME_DELCHAR},
		{ ID_FRAME_1BTN_ICON_MSGBOX, ID_FRAME_1BTN_ICON_MSGBOX},
		{ ID_FRAME_2BTN_ICON_MSGBOX, ID_FRAME_2BTN_ICON_MSGBOX},
		{ ID_FRAME_LOBBY_1BTN_MSGBOX, ID_FRAME_LOBBY_1BTN_MSGBOX },
		{ ID_FRAME_LOBBY_2BTN_MSGBOX, ID_FRAME_LOBBY_2BTN_MSGBOX },
		{ ID_FRAME_VETERAN, ID_FRAME_VETERAN },

		{ 1300, 1300 },

	};

	static DWORD dwGameUI[] = {
		ID_FRAME_DEFINVEN,					//TFRAME_DEFINVEN = 0,
		ID_FRAME_INVEN_16,					//TFRAME_INVEN_1,
		ID_FRAME_INVEN_16,					//TFRAME_INVEN_2,
		ID_FRAME_INVEN_16,					//TFRAME_INVEN_3,
		ID_FRAME_INVEN_16,					//TFRAME_INVEN_4,
		ID_FRAME_INVEN_16,					//TFRAME_INVEN_5,
		//ID_FRAME_CHAR_INFO,					//TFRAME_CHAR_INFO,
		//ID_FRAME_CHAR_INFO,					//TFRAME_TARGET_INFO,
		ID_FRAME_DETAIL_INFO,				//TFRAME_DETAIL_INFO,
		ID_FRAME_DETAIL_INFO,				//TFRAME_CHAT_DETAIL_INFO
		1120,
		1120,
		ID_FRAME_MONINVEN,					//TFRAME_MONINVEN,
		1152,			//TFRAME_ITEM_SHOP,
#ifdef MAGICITEMSHOP
		ID_FRAME_ITEM_SHOP_NEW,				//TFRAME_MAGICITEM_SHOP,
#endif
		ID_FRAME_ITEM_SHOP_NEW,				//TFRAME_RENT_SKILL,
		//ID_FRAME_ITEM_SHOP_NEW,				//TFRAME_PORTAL_SHOP,
		ID_FRAME_TRADE_NEW,					//TFRAME_TRADE,
		ID_FRAME_SECURITYSYS,				//TFRAME_SECURITYSYS,
		1187,
		1191,
		1111,
	#ifdef NEW_IF
		ID_FRAME_POTIONS,					//TFRAME_POTIONS //VALLAH
#endif
		1266,
		//ID_FRAME_SALUTATION,				//TFRAME_SALUTATION
		ID_FRAME_ITEMCRAFT,					//TFRAME_ITEMCRAFT
		ID_FRAME_SKILL,						//TFRAME_SKILL,
		ID_FRAME_QUESTMAP,					//TFRAME_QUEST,
		1113,					//TFRAME_QUEST_NEWUI,
		1113,			 		//TFRAME_NPCDIALOG,
		ID_FRAME_CRAFT,						//TFRAME_CRAFT
		ID_FRAME_MAIN,						//TFRAME_MAIN,
		ID_FRAME_MAINMENU,					//TFRAME_MAIN_MENU,
		ID_FRAME_GAUGE,						//TFRAME_GAUGE,
		ID_FRAME_SETTING,					//TFRAME_SETTING,
		ID_FRAME_WORLDMAP,					//TFRAME_WORLDMAP,
		ID_FRAME_ITEM_UP,					//TFRAME_ITEM_UP,
		ID_FRAME_ITEM_UP_GAUGE,				//TFRAME_ITEM_UP_GAUGE,
		ID_FRAME_REPAIR,					//TFRAME_ITEM_REPAIR
		ID_FRAME_REFINE,					//TFRAME_ITEM_REFINE
		ID_FRAME_GAMBLE,					//TFRAME_ITEM_GAMBLE
		ID_FRAME_COMMUNITY,					//TFRAME_COMMUNITY,
		ID_FRAME_PRIVATE_SHOP_NEW,			//TFRAME_PRIVATE_SELL,
		ID_FRAME_ITEM_SHOP_NEW,				//TFRAME_PRIVATE_BUY,
		ID_FRAME_MESSENGER,					//TFRAME_MESSENGER,
		ID_FRAME_BLOCKLIST,					//TFRAME_BLOCKLIST
		ID_FRAME_MAIL,						//TFRAME_MAIL
		ID_FRAME_NEW_MAIL,					//TFRAME_MAIL_SEND,
		ID_FRAME_OPEN_MAIL,					//TFRAME_MAIL_RECV,
		ID_FRAME_CALL_MAIL,					//TFRAME_MAIL_ASK_MONEY,
		ID_FRAME_PET_MAKE,					//TFRAME_PET_MAKE,
		ID_FRAME_PET_MANAGE,				//TFRAME_PET_MANAGE,
		ID_FRAME_ITEM_REGBOX,				//TFRAME_ITEM_REGBOX
		ID_FRAME_CABINET,					//TFRAME_CABINET
		1219,						//TFRAME_TITLE
		ID_FRAME_SOULLOTTERY,				//TFRAME_SOULLOTTERY
		ID_FRAME_RANKING_NEW,				//TFRAME_RANKING_NEW
		1117,
		1135,                               // TFRAME_CHARINFO_NEW
		1134,                               // TFRAME_CHARINFO_INNER
        1217,                               // TFRAME_CHARINFO_PVP
        1218,                               // TFRAME_CHARINFO_DUELS
		ID_FRAME_KEYSETTING,				//TFRAME_KEYSETTING
		ID_FRAME_SMS,						//TFRAME_SMS
		1222,				// TFRAME_DONATE_EXP,
		1223,				//TFRAME_DONATE_MONEY,
		ID_FRAME_GUILDNOTIFY,				//TFRAME_GUILDNOTIFY,
		1225,				//TFRAME_GUILDMARK,
		ID_FRAME_GUILD_OFFER_BBS,			//TFRAME_GUILDAPP
		1227,					//TFRAME_GUILDCMD,
		ID_FRAME_CABINET,					//TFRAME_GUILDCABINET
		ID_FRAME_CABINET,					//TFRAME_CASHCABINET,
		ID_FRAME_CASH_CHARGE,				//TFRAME_CASHCHARGE
		ID_FRAME_REGPROGRESS,				//TFRAME_PROGRESS_REG
		ID_FRAME_CINEMATIC	,				//TFRAME_CINEMATIC
		0,									//TFRAME_ITEM_EXTPERIOD
		ID_FRAME_DETAIL_NAME,				//TFRAME_DETAIL_NAME
		ID_FRAME_HELP,						// TFRAME_HELP
		//ID_FRAME_ITEM_CASH_SHOP_NEW,		// TFRAME_CASHSHOP_NEW
		//ID_FRAME_PVP_INFO,					// TFRAME_CHAR_PVP_INFO
		ID_FRAME_GUILDPOINTLOG,				// TFRAME_GUILDPOINTLOG
		1232,			// TFRAME_GUILDPOINTREWARD
		ID_FRAME_SIEGE_MODE,				// TFRAME_SIEGEUI
		ID_FRAME_SIEGE_END,					// TFRAME_SIEGEEND
		ID_FRAME_SKYGARDEN,					// TFRAME_SKYGARDEN
		ID_FRAME_SKYGARDEN_MAP,				// TFRAME_SKYGARDEN_MAP
		ID_FRAME_ITEM_SHOP_NEW,				// TFRAME_MONSHOP
		ID_FRAME_WARN_NOTUSE_CASHITEM,		// TFRAME_WARN_NOTUSE_CASHITEM
		ID_FRAME_WARN_UPITEM_SELL,			// TFRAME_WARN_UPITEM_SELL
		ID_FRAME_PORTAL_SHOP_NEW,			// TFRAME_PORTAL_SHOP_NEW
		ID_FRAME_AUCTION_BASE,				// TFRAME_AUCTION
		ID_FRAME_BIDON,						// TFRAME_BIDON
		ID_FRAME_GUILD_INVITATION_REGULAR,	// TFRAME_GUILD_REGULAR_OFFER
		ID_FRAME_GUILD_INVITATION_TACTICS,	// TFRAME_GUILD_TACTICS_OFFER
#ifdef ADD_TEXTOOL
		ID_FRAME_TEXTOOL,					//TFRAME_TEXTOOL
#endif
		ID_FRAME_TACTICSINV_BOX,			//TFRAME_INVITE_TACTICS
		ID_FRAME_GAMBLE,					//TFRAME_ITEM_REGGM
		ID_FRAME_COLOR,						//TFRAME_COLOR_PICKER
		ID_FRAME_FAME_BASE,					//TFRAME_FAME_BASE
		//ID_FRAME_RANK_INFO,					//TFRAME_RANK_INFO
//#ifdef ADD_WEB_CASHSHOP
//		ID_FRAME_ITEM_CASH_SHOP_WEB,		//TFRAME_WEB_CASHSHOP
//#endif
#ifdef ADD_TOURNAMENT
		ID_FRAME_TOURNAMENT_EVENT,			//TFRAME_TOURNAMENT_EVENT
		ID_FRAME_TOURNAMENT_GAUGE,			//TFRAME_TOURNAMENT_GAGE
		ID_FRAME_TOURNAMENT_SELECT_TARGET,	//TFRAME_TOURNAMENT_SELECT_TARGET
		ID_FRAME_TOURNAMENT,				//TFRAME_TOURNAMENT
		ID_FRAME_TOURNAMENT_RESULT,			//TFRAME_TOURNAMENT_RESULT,
#endif
		ID_FRAME_WELCOME,					//TFRAME_WELCOME
#ifdef ADD_RPS
		ID_FRAME_RPS,						//TFRAME_RPS
		ID_FRAME_RPS_REWARD,				//TFRAME_RPS_REWARD
#ifdef ADD_RPS_RL
		ID_FRAME_RPS_REWARD_LIST,			//TFRAME_RPS_REWARD_LIST
#endif
#endif
		ID_FRAME_SELECT_AID_COUNTRY,		//TFRAME_AID_COUNTRY
		ID_FRAME_CONTRY_NEW, // TFRAME_SELECT_COUNTRY
		ID_FRAME_CHALLENGE_WAITING, //TFRAME_CHALLENGE_WAITING,
		ID_FRAME_CHALLENGE_EVENT, //TFRAME_CHALLENGE_EVENT,
		ID_FRAME_CHALLENGE_ITEM, //TFRAME_CHALLENGE_ITEM,
		1206, //TFRAME_BOW
		1264, //TFRAME_BOW
		1190, //TFRAME_BOW_WAITING
		1270, //TFRAME_BOW_RESPAWN
		1272, //TFRAME_BOW_BPTRADE
		1266, //TFRAME_BOWRANK
		1193, //TFRAME_PREMIUMSKILLS
		1193, //TFRAME_BOWSKILLS
		1302,  //TFRAME_BRTEAMS
		268436672, //TFRAME_BRPANNELS
		268436673, //TFRAME_BRTRANKING
		268436671, //TFRAME_BRRANKING
		1187, //TFRAME_BATTLERANK
		1158, //TFRAME_LOTWIN
		1274, //TFRAME_COMPSTYLE
		ID_FRAME_GUILD_BASE_NEW, //TFRAME_GUILDNEW
		ID_FRAME_CUSTOMCLOAK,					//TFRAME_CUSTOMCLOAK
		1181, //ID_FRAME_BG_REGISTER
		1112
	};

#ifdef NEW_IF
	static DWORD dwGaugeID[][7] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_HP,			TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_MP,			TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_MP
		{ ID_FRAME_MAIN,	ID_FRAME_EXPBAR_NEW,	ID_CTRLINST_EXP,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_EXP
		{ ID_FRAME_MAIN,	ID_FRAME_EXPBAR_NEW,	ID_CTRLINST_SOULEXP,		TGS_GROW_LEFT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_SOULEXP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RECALL_GAUGE_NEW, 	ID_CTRLINST_HP,			TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_SUMMON_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RECALL_GAUGE_NEW, 	ID_CTRLINST_MP,			TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_SUMMON_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_TARGET_GAUGE_NEW, 	ID_CTRLINST_HP,			TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_TARGET_HP
		{ NULL, 			ID_FRAME_MAIN, 			ID_CTRLINST_BREATH,		TGS_GROW_RIGHT, TBREATHTEXT_COLOR,	TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_BREATH
		{ NULL, 			ID_FRAME_MAIN, 			ID_CTRLINST_CHARGE,		TGS_GROW_RIGHT,	TCHARGETEXT_COLOR,	TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_CHARGE
		{ ID_FRAME_GAUGE, 	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_FATIGUE,	TGS_GROW_UP,	TFATIGUETEXT_COLOR,	TTEXTSHADOW_COLOR, TRUE},		//TGAUGE_VITAL
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_HP1_NEW,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY1_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_MP1_NEW,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY1_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_HP2_NEW,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY2_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_MP2_NEW,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY2_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_HP3_NEW,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY3_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_MP3_NEW,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY3_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_HP4_NEW,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY4_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_MP4_NEW,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY4_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_HP5_NEW,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY5_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_MP5_NEW,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY5_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_HP6_NEW,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY6_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_MP6_NEW,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY6_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_MINIMAP_NEW, 	ID_CTRLINST_HP_NEW,			TGS_GROW_UP, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_MINIMAP_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_MINIMAP_NEW, 	ID_CTRLINST_MP_NEW,			TGS_GROW_UP, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_MINIMAP_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RSCS_NEW, 	ID_CTRLINST_HP_NEW,			TGS_GROW_UP, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_RSCS_NP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RSCS_NEW, 	ID_CTRLINST_MP_NEW,			TGS_GROW_UP, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_RSCS_MP
	};

	static DWORD dwTextID[][5] = {
		{ ID_FRAME_MAIN,	ID_FRAME_EXPBAR_NEW,	ID_CTRLINST_EXP_TEXT,		TEXPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_EXP
		{ ID_FRAME_MAIN,	ID_FRAME_EXPBAR_NEW,	ID_CTRLINST_SOULEXP_TEXT,	NULL,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_SOULEXP
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW, 	ID_CTRLINST_LEVEL,			TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW, 	ID_CTRLINST_TXT_HP,			THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW, 	ID_CTRLINST_TXT_MP,			TMPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_MP
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_LEVEL
		{ ID_FRAME_GAUGE, 	ID_FRAME_RECALL_GAUGE_NEW, 	ID_CTRLINST_NPC_GAUGE,		TTIMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_TIME
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_TARGET_NAME
        { ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_TARGET_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE_NEW, 	ID_CTRLINST_TXT_HP,			THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_TARGET_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME1_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY1_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME2_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY2_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME3_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY3_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME4_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY4_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME5_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY5_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_NAME6_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY6_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL1_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY1_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL2_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY2_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL3_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY3_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL4_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY4_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL5_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY5_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW, 	ID_CTRLINST_TXT_LEVEL6_NEW,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY6_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_MINIMAP_NEW, 	ID_CTRLINST_TXT_HP_NEW,		THPTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_MINIMAP_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_MINIMAP_NEW, 	ID_CTRLINST_TXT_MP_NEW,		TMPTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_MINIMAP_MP
		{ ID_FRAME_GAUGE,	ID_FRAME_RSCS_NEW, 	ID_CTRLINST_TXT_HP_NEW,		THPTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_RSCS_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_RSCS_NEW, 	ID_CTRLINST_TXT_MP_NEW,		TMPTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_RSCS_MP
	};

	static DWORD dwPannelID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_BASE},		//TPANNEL_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE_NEW,	ID_CTRLINST_BASE},		//TPANNEL_SUMMON
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE_NEW,	ID_CTRLINST_BASE},		//TPANNEL_TARGET
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_BASE_1},	//TPANNEL_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_BASE_2},	//TPANNEL_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_BASE_3},	//TPANNEL_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_BASE_4},	//TPANNEL_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_BASE_5},	//TPANNEL_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_BASE_6}};	//TPANNEL_PARTY6

	static DWORD dwLeaderMarkID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_CHIEF},		//TLEADERMARK_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CHIEF1_NEW},	//TLEADERMARK_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CHIEF2_NEW},	//TLEADERMARK_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CHIEF3_NEW},	//TLEADERMARK_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CHIEF4_NEW},	//TLEADERMARK_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CHIEF5_NEW},	//TLEADERMARK_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CHIEF6_NEW}};	//TLEADERMARK_PARTY6

	static DWORD dwFaceImgID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_CLASS},		//TFACEIMG_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE_NEW,	ID_CTRLINST_CLASS},	//TFACEIMG_TARGETPC
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS1_NEW},	//TFACEIMG_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS2_NEW},	//TFACEIMG_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS3_NEW},	//TFACEIMG_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS4_NEW},	//TFACEIMG_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS5_NEW},	//TFACEIMG_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS6_NEW}};	//TFACEIMG_PARTY6

	static DWORD dwLevelImgID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_LV_BASE},	//TLEVELIMG_PLAYER
		};

	static DWORD dwFACEBACKImgID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE_NEW,	ID_CTRLINST_CLASS},		//TFACEBACKIMG_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE_NEW,	ID_CTRLINST_CLASS},		//TFACEBACKIMG_TARGET
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS1_NEW},		//TFACEBACKIMG_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS2_NEW},		//TFACEBACKIMG_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS3_NEW},		//TFACEBACKIMG_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS4_NEW},		//TFACEBACKIMG_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS5_NEW},		//TFACEBACKIMG_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE_NEW,	ID_CTRLINST_CLASS6_NEW}		//TFACEBACKIMG_PARTY6
		};

	static DWORD dwHudBaseID[][2] = {
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_MY_HP},									//THUD_BASE_MY_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_OP_HP},									//THUD_BASE_OP_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_MY_MP},									//THUD_BASE_MY_MP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_OP_MP}};									//THUD_BASE_OP_MP

	static DWORD dwHudGaugeID[][3] = {
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_MY_HP, TGS_GROW_UP},						//THUD_GAUGE_MY_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_OP_HP, TGS_GROW_UP},						//THUD_GAUGE_OP_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_MY_MP, TGS_GROW_UP},						//THUD_GAUGE_MY_MP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_OP_MP, TGS_GROW_UP}};						//THUD_GAUGE_OP_MP

	static DWORD dwHudTextID[][4] = {
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_MY_HP, THPTEXT_COLOR, TTEXTSHADOW_COLOR},	//THUD_TEXT_MY_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_OP_HP, THPTEXT_COLOR, TTEXTSHADOW_COLOR},	//THUD_TEXT_OP_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_MY_MP, TMPTEXT_COLOR, TTEXTSHADOW_COLOR},	//THUD_TEXT_MY_MP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_OP_MP, TMPTEXT_COLOR, TTEXTSHADOW_COLOR}};	//THUD_TEXT_OP_MP

	static DWORD dwGaugeFrameID[TGAUGE_FRAME_COUNT] = {
		ID_FRAME_MY_GAUGE_NEW,		// TGAUGE_FRAME_PLAYER
		ID_FRAME_RECALL_GAUGE_NEW,		// TGAUGE_FRAME_SUMMON
		ID_FRAME_TARGET_GAUGE_NEW,	// TGAUGE_FRAME_TARGET
		ID_FRAME_PARTY_GAUGE_NEW		// TGAUGE_FRAME_PARTY
	};

#else

	static DWORD dwGaugeID[][7] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_HP,			TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_MP,			TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_MP
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_CENTER,	ID_CTRLINST_EXP,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_EXP
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_CENTER,	ID_CTRLINST_SOULEXP_OLD,TGS_GROW_UP,	TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PLAYER_SOULEXP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_HP,			TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_SUMMON_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_MP,			TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_SUMMON_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_TARGET_GAUGE, 	ID_CTRLINST_HP,			TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_TARGET_HP
		{ NULL, 			ID_FRAME_MAIN, 			ID_CTRLINST_BREATH,		TGS_GROW_RIGHT, TBREATHTEXT_COLOR,	TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_BREATH
		{ NULL, 			ID_FRAME_MAIN, 			ID_CTRLINST_CHARGE,		TGS_GROW_RIGHT,	TCHARGETEXT_COLOR,	TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_CHARGE
		{ ID_FRAME_GAUGE, 	ID_FRAME_MY_GAUGE,		ID_CTRLINST_FATIGUE,	TGS_GROW_UP,	TFATIGUETEXT_COLOR,	TTEXTSHADOW_COLOR, TRUE},		//TGAUGE_VITAL
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_HP1,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY1_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_MP1,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY1_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_HP2,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY2_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_MP2,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY2_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_HP3,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY3_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_MP3,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY3_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_HP4,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY4_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_MP4,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY4_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_HP5,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY5_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_MP5,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY5_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_HP6,		TGS_GROW_RIGHT, THPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY6_HP
		{ ID_FRAME_GAUGE, 	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_MP6,		TGS_GROW_RIGHT, TMPTEXT_COLOR,		TTEXTSHADOW_COLOR, FALSE},		//TGAUGE_PARTY6_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_TARGET_GAUGE, 	ID_CTRLINST_FATIGUE,	TGS_GROW_UP,	TFATIGUETEXT_COLOR, TTEXTSHADOW_COLOR, TRUE}};		//TGAUGE_TARGET_VITAL

	static DWORD dwTextID[][5] = {
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_CENTER,	ID_CTRLINST_EXP_TEXT,		TMPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_EXP
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_CENTER,	ID_CTRLINST_SOULEXP_TEXTO,	NULL,				TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_SOULEXP
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_RIGHT,	ID_CTRLINST_RUNE,			TMONEYTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_RUNE
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_RIGHT,	ID_CTRLINST_LUNA,			TMONEYTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_LUNA
		{ ID_FRAME_MAIN,	ID_FRAME_MAIN_RIGHT,	ID_CTRLINST_CRON,			TMONEYTEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_CRON
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE, 		ID_CTRLINST_TXT_NAME,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE, 		ID_CTRLINST_LEVEL,			TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE, 		ID_CTRLINST_TXT_LEVELCLASS,	TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE, 		ID_CTRLINST_TXT_HP,			THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE, 		ID_CTRLINST_TXT_MP,			TMPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PLAYER_MP
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_TXT_NAME,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_TXT_LEVEL,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_TXT_HP,			THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_TXT_MP,			TMPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_MP
		{ ID_FRAME_GAUGE, 	ID_FRAME_RECALL_GAUGE, 	ID_CTRLINST_NPC_GAUGE,		TTIMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_SUMMON_TIME
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE, 	ID_CTRLINST_TXT_NAME,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_TARGET_NAME
        { ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE, 	ID_CTRLINST_TXT_LEVEL,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_TARGET_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE, 	ID_CTRLINST_TXT_HP,			THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_TARGET_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE, 	ID_CTRLINST_TXT_CLASS,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_TARGET_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_NAME1,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY1_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_NAME2,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY2_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_NAME3,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY3_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_NAME4,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY4_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_NAME5,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY5_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_NAME6,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY6_NAME
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_LEVEL1,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY1_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_LEVEL2,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY2_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_LEVEL3,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY3_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_LEVEL4,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY4_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_LEVEL5,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY5_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_LEVEL6,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY6_LEVEL
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_HP1,		THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PARTY1_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_HP2,		THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PARTY2_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_HP3,		THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PARTY3_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_HP4,		THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PARTY4_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_HP5,		THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PARTY5_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_HP6,		THPTEXT_COLOR,		TTEXTSHADOW_COLOR},	//TTEXT_PARTY6_HP
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_CLASS1,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY1_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_CLASS2,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY2_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_CLASS3,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY3_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_CLASS4,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY4_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_CLASS5,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY5_CLASS
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE, 	ID_CTRLINST_TXT_CLASS6,		TNAMETEXT_COLOR,	TTEXTSHADOW_COLOR},	//TTEXT_PARTY6_CLASS
	};

	static DWORD dwPannelID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_BASE},		//TPANNEL_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE,	ID_CTRLINST_BASE},		//TPANNEL_SUMMON
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_BASE},		//TPANNEL_TARGET
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BASE1},		//TPANNEL_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BASE_2},	//TPANNEL_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BASE_3},	//TPANNEL_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BASE_4},	//TPANNEL_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BASE_5},	//TPANNEL_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BASE_6}};	//TPANNEL_PARTY6

	static DWORD dwLeaderMarkID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_CHIEF},		//TLEADERMARK_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_CHIEF},		//TLEADERMARK_TARGET
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_CHIEF1},	//TLEADERMARK_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_CHIEF2},	//TLEADERMARK_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_CHIEF3},	//TLEADERMARK_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_CHIEF4},	//TLEADERMARK_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_CHIEF5},	//TLEADERMARK_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_CHIEF6}};	//TLEADERMARK_PARTY6

	static DWORD dwFaceImgID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_PC_FACE},	//TFACEIMG_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE,	ID_CTRLINST_N_FACE},	//TFACEIMG_SUMMON_N
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE,	ID_CTRLINST_S_FACE},	//TFACEIMG_SUMMON_S
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_N_FACE},	//TFACEIMG_TARGETMON_N
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_S_FACE},	//TFACEIMG_TARGETMON_S
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_PC_FACE},	//TFACEIMG_TARGETPC
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_PC_FACE1},	//TFACEIMG_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_PC_FACE2},	//TFACEIMG_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_PC_FACE3},	//TFACEIMG_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_PC_FACE4},	//TFACEIMG_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_PC_FACE5},	//TFACEIMG_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_PC_FACE6}};	//TFACEIMG_PARTY6

	static DWORD dwLevelImgID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_LV_BASE},	//TLEVELIMG_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE,	ID_CTRLINST_LV_BASE},	//TLEVELIMG_SUMMON
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_LV_BASE},	//TLEVELIMG_TARGET
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_LV_BASE1},	//TLEVELIMG_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_LV_BASE2},	//TLEVELIMG_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_LV_BASE3},	//TLEVELIMG_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_LV_BASE4},	//TLEVELIMG_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_LV_BASE5},	//TLEVELIMG_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_LV_BASE6}	//TLEVELIMG_PARTY6
		};

	static DWORD dwFACEBACKImgID[][3] = {
		{ ID_FRAME_GAUGE,	ID_FRAME_MY_GAUGE,		ID_CTRLINST_BACK},		//TFACEBACKIMG_PLAYER
		{ ID_FRAME_GAUGE,	ID_FRAME_RECALL_GAUGE,	ID_CTRLINST_BACK},		//TFACEBACKIMG_SUMMON
		{ ID_FRAME_GAUGE,	ID_FRAME_TARGET_GAUGE,	ID_CTRLINST_BACK1},		//TFACEBACKIMG_TARGET
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BACK1},		//TFACEBACKIMG_PARTY1
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BACK2},		//TFACEBACKIMG_PARTY2
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BACK3},		//TFACEBACKIMG_PARTY3
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BACK4},		//TFACEBACKIMG_PARTY4
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BACK5},		//TFACEBACKIMG_PARTY5
		{ ID_FRAME_GAUGE,	ID_FRAME_PARTY_GAUGE,	ID_CTRLINST_BACK6}		//TFACEBACKIMG_PARTY6
		};

	static DWORD dwHudBaseID[][2] = {
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_MY_HP},									//THUD_BASE_MY_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_OP_HP},									//THUD_BASE_OP_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_MY_MP},									//THUD_BASE_MY_MP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HB_OP_MP}};									//THUD_BASE_OP_MP

	static DWORD dwHudGaugeID[][3] = {
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_MY_HP, TGS_GROW_UP},						//THUD_GAUGE_MY_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_OP_HP, TGS_GROW_UP},						//THUD_GAUGE_OP_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_MY_MP, TGS_GROW_UP},						//THUD_GAUGE_MY_MP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HG_OP_MP, TGS_GROW_UP}};						//THUD_GAUGE_OP_MP

	static DWORD dwHudTextID[][4] = {
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_MY_HP, THPTEXT_COLOR, TTEXTSHADOW_COLOR},	//THUD_TEXT_MY_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_OP_HP, THPTEXT_COLOR, TTEXTSHADOW_COLOR},	//THUD_TEXT_OP_HP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_MY_MP, TMPTEXT_COLOR, TTEXTSHADOW_COLOR},	//THUD_TEXT_MY_MP
		{ ID_FRAME_GAUGE, ID_CTRLINST_HT_OP_MP, TMPTEXT_COLOR, TTEXTSHADOW_COLOR}};	//THUD_TEXT_OP_MP

	static DWORD dwGaugeFrameID[TGAUGE_FRAME_COUNT] = {
		ID_FRAME_MY_GAUGE,			// TGAUGE_FRAME_PLAYER
		ID_FRAME_RECALL_GAUGE,		// TGAUGE_FRAME_SUMMON
		ID_FRAME_TARGET_GAUGE,		// TGAUGE_FRAME_TARGET
		ID_FRAME_PARTY_GAUGE,		// TGAUGE_FRAME_PARTY
		ID_FRAME_NOTIFY};			// TGAUGE_FRAME_NOTIFY
#endif

	static DWORD dwCursorID[] = {
		IDC_HAND_CUR,
		IDC_SWORD,
		IDC_TALK,
		IDC_HAND_CUR,
		IDC_ROUTING,
		IDC_DRAGSIZE};

	static CString strTextures[TCUSTOMTEX_COUNT] =
	{
		CString(_T("Tex01.png")), // 1
		CString(_T("Youtube.png")), // 2
		CString(_T("Supreme.png")),//3
		CString(_T("Scape.png")),//4
		CString(_T("RedCamouflage.png")),//5
		CString(_T("PinkCamouflage.png")),//6
		CString(_T("Inspire.png")),//7
		CString(_T("GreenCamouflage.png")),//8
		CString(_T("GotSkill.png")),//9
		CString(_T("Dragon.png")),//10
		CString(_T("Camouflage.png")),//11
		CString(_T("BlueCamouflage.png")),//12
		CString(_T("Mon01_00.png")), //13
		CString(_T("Mon01_01.png")), //14
		CString(_T("Mon02_00.png")), //15
		CString(_T("Mon03_00.png")), //16
		CString(_T("Mon03_01.png")), //17
		CString(_T("Mon04_00.png")), //18
		CString(_T("Mon05_00.png")), //19 RED
		CString(_T("Mon06_00.png")), //20 GReen
		CString(_T("Mon07_00.png")), //21 BLUE
		CString(_T("Mon08_00.png")),//, //22 PINK we
		CString(_T("Item01.png")), // 23 Supreme x Luis V
		CString(_T("Tex100.png")), //  24Custom Cloak 1 Halloween,
		CString(_T("Tex101.png")) //  25Custom Cloak 2 Halloween,

	};


	CTClientUIBase::ResetBasis(
		m_Device.m_option.m_dwScreenX,
		m_Device.m_option.m_dwScreenY);

	CTachyonHUGEMAP::m_nLODBound = 96;
	CTachyonHUGEMAP::m_nDiffuseCount = DEF_DIFFUSECNT;
	CTachyonHUGEMAP::m_nMaxLength = DEF_MAXLENGTH;
	CTachyonHUGEMAP::m_nMaxLevel = DEF_MAXLEVEL;
	CTachyonHUGEMAP::m_nIndexCount = DEF_INDEXCNT;
	CTachyonHUGEMAP::m_fCullDIST = TCAM_LENGTH*2;

	::SetCursor(NULL);
	srand((INT) time(NULL));
	InitTRESIMG();
	InitTCUSTOMCLOAKTEX();

	CTachyonWnd::InitResource( strGroupID, bGroupID);

	for( int i=0; i<MAX_CON; i++)
		m_session[i].SetOwner(this);
	CTBSPNode::InitCommon(&m_Device);

	TEdit::g_hWnd = CTachyonWnd::GetSafeHwnd();

	m_MessageBox.m_pTParser = m_pTParser;
	m_TNet.m_pTParser = m_pTParser;
	m_MainGame.m_pTParser = m_pTParser;
	m_vWebCtrl.m_pActHost = this;

	if( CTNationOption::JAPAN_IME  || CTNationOption::TAIWAN_IME )
	{
		FRAMEDESC_SHAREDPTR pCandidateDESC = m_pTParser->FindFrameTemplate( ID_FRAME_CANDIDATE );

		CTCandidateFrame* pCandidateTNet = new CTCandidateFrame( &m_TNet, pCandidateDESC );
		CTCandidateFrame* pCandidateTGame = new CTCandidateFrame( &m_MainGame, pCandidateDESC );
		CTCandidateFrame* pCandidateTMsgBox = new CTCandidateFrame( &m_MessageBox, pCandidateDESC );

		m_TNet.AddKid( pCandidateTNet );
		m_MainGame.AddKid( pCandidateTGame);
		m_MessageBox.AddKid( pCandidateTMsgBox);

		m_TNet.m_pCandidate = pCandidateTNet;
		m_MainGame.m_pCandidate = pCandidateTGame;
		m_MessageBox.m_pCandidate = pCandidateTMsgBox;

		m_TNet.m_pCandidate->ShowComponent(FALSE);
		m_MainGame.m_pCandidate->ShowComponent(FALSE);
		m_MessageBox.m_pCandidate->ShowComponent(FALSE);
	}

	FRAMEDESC_SHAREDPTR pMINIPOPUPDESC = m_pTParser->FindFrameTemplate(ID_FRAME_MINIPOPUP);
	FRAMEDESC_SHAREDPTR pMINIPOPUPDESC2 = m_pTParser->FindFrameTemplate(ID_FRAME_MINIPOPUP4);

	CTClientGuildMark::LoadBakingTexture();
	SetMainFrame(&m_TNet);

	for(auto i=0; i<TFRAME_COUNT; i++)
	{
		FRAMEDESC_SHAREDPTR pDESC = m_pTParser->FindFrameTemplate(dwGameUI[i]);

		switch(i)
		{
		case TFRAME_SETTING						: m_MainGame.m_vTFRAME[i] = new CTSettingFrame( &m_MainGame, pDESC, ID_CTRLINST_INNERPOS ); break;
		case TFRAME_WORLDMAP					: m_MainGame.m_vTFRAME[i] = new CTWorldmapDlg( &m_MainGame, pDESC); break;
		//case TFRAME_CHAR_INFO					: m_MainGame.m_vTFRAME[i] = new CTCharInfoDlg( &m_MainGame, pDESC, m_pTParser, &m_Device, i, m_MainGame.m_pMainChar); break;
		case TFRAME_DETAIL_INFO					: 
		case TFRAME_CHAT_DETAIL_INFO			: 
		case TFRAME_EQUIP_DETAIL_INFO           : 
		case TFRAME_EQUIP_DETAIL_INFO_2         : m_MainGame.m_vTFRAME[i] = new CTDetailInfoDlg( &m_MainGame, pDESC, i); break;
		case TFRAME_DEFINVEN					:
		case TFRAME_INVEN_1						:
		case TFRAME_INVEN_2						:
		case TFRAME_INVEN_3						:
		case TFRAME_INVEN_4						:
		case TFRAME_INVEN_5						:
		case TFRAME_MONINVEN					: m_MainGame.m_vTFRAME[i] = new CTInvenDlg( &m_MainGame, pDESC, i); break;
		case TFRAME_BATTLEINVEN                 : m_MainGame.m_vTFRAME[i] = new CTBattleInvenDlg( &m_MainGame, pDESC, m_pTParser ); break;
		case TFRAME_GAUGE						: m_MainGame.m_vTFRAME[i] = new CTGaugePannel( &m_MainGame, pDESC, m_pTParser, &m_MainGame, m_MainGame.m_pMainChar); break;
		case TFRAME_ITEM_SHOP					: m_MainGame.m_vTFRAME[i] = new CTShopDlg( &m_MainGame, pDESC, TSHOP_TYPE_NPC_ITEM ); break;
#ifdef MAGICITEMSHOP
		case TFRAME_MAGICITEM_SHOP				: m_MainGame.m_vTFRAME[i] = new CTMagicItemShopDlg( &m_MainGame, pDESC ); break;
#endif
		case TFRAME_RENT_SKILL					: m_MainGame.m_vTFRAME[i] = new CTRentSkillDlg( &m_MainGame, pDESC ); break;
		//case TFRAME_PORTAL_SHOP					: m_MainGame.m_vTFRAME[i] = new CTShopDlg( &m_MainGame, pDESC, TSHOP_TYPE_NPC_PORTAL ); break;
		case TFRAME_TRADE						: m_MainGame.m_vTFRAME[i] = new CTTradeDlg( &m_MainGame, pDESC, m_MainGame.m_pMainChar); break;
		case TFRAME_SECURITYSYS					: m_MainGame.m_vTFRAME[i] = new CTSecuritySystemDlg( &m_MainGame, pDESC ); break;
		case TFRAME_OPENBOX                     : m_MainGame.m_vTFRAME[i] = new CTBoxOpenDlg( &m_MainGame, pDESC); break;
		case TFRAME_OPENBOXLIST                 : m_MainGame.m_vTFRAME[i] = new CTBoxOpenListDlg( &m_MainGame, pDESC); break;
		case TFRAME_ARENAREG                    : m_MainGame.m_vTFRAME[i] = new CTArenaRegDlg( &m_MainGame, pDESC); break;
#ifdef NEW_IF
		case TFRAME_POTIONS						: m_MainGame.m_vTFRAME[i] = new CTPotionPannel( &m_MainGame, pDESC); break; //VALLAH
#endif


		//case TFRAME_SALUTATION					: m_MainGame.m_vTFRAME[i] = new CTSalutationDlg( &m_MainGame, pDESC); break;

		case TFRAME_ITEMCRAFT					: m_MainGame.m_vTFRAME[i] = new CTItemCraftDlg( &m_MainGame, pDESC); break;
		case TFRAME_SKILL						: m_MainGame.m_vTFRAME[i] = new CTSkillDlg( &m_MainGame, pDESC); break;
		case TFRAME_MAIN						: m_MainGame.m_vTFRAME[i] = new CTMainUI( &m_MainGame, pDESC, m_pTParser, m_MainGame.m_pMainChar); break;
		case TFRAME_NPCDIALOG					: m_MainGame.m_vTFRAME[i] = new CTNPCTalkDlg( &m_MainGame, pDESC, m_MainGame.m_pMainChar, m_pTParser); break;
		case TFRAME_QUEST						: m_MainGame.m_vTFRAME[i] = new CTNewQuestDlg( &m_MainGame, pDESC, m_MainGame.m_pMainChar ); break;
		case TFRAME_QUEST_NEWUI					: m_MainGame.m_vTFRAME[i] = new CQuestNewDlg( &m_MainGame, pDESC, m_MainGame.m_pMainChar ); break;
		case TFRAME_CRAFT						: m_MainGame.m_vTFRAME[i] = new CTCraftQuestDlg( &m_MainGame, pDESC ); break;
		case TFRAME_ITEM_UP						: m_MainGame.m_vTFRAME[i] = new CTItemUpDlg( &m_MainGame, pDESC); break;
		case TFRAME_ITEM_UP_GAUGE				: m_MainGame.m_vTFRAME[i] = new CTItemUpGaugeDlg( &m_MainGame, pDESC); break;
		case TFRAME_ITEM_REPAIR					: m_MainGame.m_vTFRAME[i] = new CTItemRepairDlg( &m_MainGame, pDESC); break;
		case TFRAME_ITEM_REFINE					: m_MainGame.m_vTFRAME[i] = new CTItemRefineDlg( &m_MainGame, pDESC); break;
		case TFRAME_ITEM_GAMBLE					: m_MainGame.m_vTFRAME[i] = new CTItemGambleDlg( &m_MainGame, pDESC); break;
		case TFRAME_COMMUNITY					: m_MainGame.m_vTFRAME[i] = new CTCommunityDlg( &m_MainGame, pDESC); break;
		case TFRAME_PRIVATE_SELL				: m_MainGame.m_vTFRAME[i] = new CTPrivateShopDlgForSell( &m_MainGame, pDESC ); break;
		case TFRAME_PRIVATE_BUY					: m_MainGame.m_vTFRAME[i] = new CTPrivateShopDlg( &m_MainGame, pDESC ); break;
		case TFRAME_MESSENGER					: m_MainGame.m_vTFRAME[i] = new CTFrameGroupBase( &m_MainGame, pDESC, ID_CTRLINST_FRAME ); break;
		case TFRAME_BLOCKLIST					: m_MainGame.m_vTFRAME[i] = new CTFrameGroupBase( &m_MainGame, pDESC, ID_CTRLINST_FRAME ); break;
		case TFRAME_MAIL						: m_MainGame.m_vTFRAME[i] = new CTMailListFrame( &m_MainGame, pDESC); break;
		case TFRAME_MAIL_SEND					: m_MainGame.m_vTFRAME[i] = new CTMailSendDlg( &m_MainGame, pDESC); break;
		case TFRAME_MAIL_RECV					: m_MainGame.m_vTFRAME[i] = new CTMailRecvDlg( &m_MainGame, pDESC); break;
		case TFRAME_MAIL_ASK_MONEY				: m_MainGame.m_vTFRAME[i] = new CTMailAskMoneyDlg( &m_MainGame, pDESC); break;
		case TFRAME_PET_MAKE					: m_MainGame.m_vTFRAME[i] = new CTPetMakeDlg( &m_MainGame, pDESC, &m_Device); break;
		case TFRAME_PET_MANAGE					: m_MainGame.m_vTFRAME[i] = new CTPetManageDlg( &m_MainGame, pDESC, &m_Device); break;
		case TFRAME_ITEM_REGBOX					: m_MainGame.m_vTFRAME[i] = new CTItemRegBox( &m_MainGame, pDESC ); break;
		case TFRAME_CABINET						: m_MainGame.m_vTFRAME[i] = new CTNormalCabinetDlg( &m_MainGame, pDESC ); break;
		case TFRAME_TITLE						: m_MainGame.m_vTFRAME[i] = new CTTitleDlg( &m_MainGame, pDESC ); break;
		case TFRAME_SOULLOTTERY					: m_MainGame.m_vTFRAME[i] = new CTSoulLotteryDlg( &m_MainGame, pDESC ); break;
		case TFRAME_RANKING_NEW					: m_MainGame.m_vTFRAME[i] = new CTRankingNewMain( &m_MainGame, pDESC ); break;
		case TFRAME_COMPANION					: m_MainGame.m_vTFRAME[i] = new CTCompanionDlg( &m_MainGame, pDESC ); break;
		case TFRAME_CHARINFO_NEW                : m_MainGame.m_vTFRAME[i] = new CTCharNewDlg( &m_MainGame, pDESC, m_pTParser, &m_Device, i, m_MainGame.m_pMainChar); break;
		case TFRAME_CHARINFO_INNER				: m_MainGame.m_vTFRAME[i] = new CTCharInfoNewDlg( &m_MainGame, pDESC, m_pTParser, &m_Device, i, m_MainGame.m_pMainChar); break;
		case TFRAME_CHARINFO_PVP                : m_MainGame.m_vTFRAME[i] = new CTCharNewPVPDlg( &m_MainGame, pDESC ); break;
		case TFRAME_CHARINFO_DUELS              : m_MainGame.m_vTFRAME[i] = new CTCharDuelsDlg( &m_MainGame, pDESC ); break;
		case TFRAME_KEYSETTING					: m_MainGame.m_vTFRAME[i] = new CTKeySettingDlg( &m_MainGame, pDESC ); break;
		case TFRAME_SMS							: m_MainGame.m_vTFRAME[i] = new CTSMSDlg( &m_MainGame, pDESC ); break;
		case TFRAME_DONATE_EXP					: m_MainGame.m_vTFRAME[i] = new CTGuildExpDonDlg( &m_MainGame, pDESC ); break;
		case TFRAME_DONATE_MONEY				: m_MainGame.m_vTFRAME[i] = new CTGuildMoneyDonDlg( &m_MainGame, pDESC ); break;
		case TFRAME_GUILDNOTIFY					: m_MainGame.m_vTFRAME[i] = new CTGuildNotifyDlg( &m_MainGame, pDESC ); break;
		case TFRAME_GUILDMARK					: m_MainGame.m_vTFRAME[i] = new CTGuildMarkMakeDlg( &m_MainGame, pDESC ); break;
		case TFRAME_GUILDAPP					: m_MainGame.m_vTFRAME[i] = new CTGuildApplicationDlg( &m_MainGame, pDESC ); break;
		case TFRAME_GUILDCMD					: m_MainGame.m_vTFRAME[i] = new CTGuildCmdHelpDlg( &m_MainGame, pDESC ); break;
		case TFRAME_GUILDCABINET				: m_MainGame.m_vTFRAME[i] = new CTGuildCabinetDlg( &m_MainGame, pDESC ); break;
		case TFRAME_CASHCABINET					: m_MainGame.m_vTFRAME[i] = new CTCashCabinetDlg( &m_MainGame, pDESC ); break;
		case TFRAME_PROGRESS_REG				: m_MainGame.m_vTFRAME[i] = new CTProgressRegDlg( &m_MainGame, pDESC ); break;
		case TFRAME_CINEMATIC					: m_MainGame.m_vTFRAME[i] = new CTCinematicDlg( &m_MainGame, pDESC ); break;
		case TFRAME_DETAIL_NAME					: m_MainGame.m_vTFRAME[i] = new CTDetailNameDlg( &m_MainGame, pDESC); break;
		case TFRAME_HELP						: m_MainGame.m_vTFRAME[i] = new CTHelpFrame( &m_MainGame, pDESC); break;
		//case TFRAME_CASHSHOP_NEW				: m_MainGame.m_vTFRAME[i] = new CTNewCashShopDlg( &m_MainGame, pDESC); break;
		//case TFRAME_CHAR_PVP_INFO				: m_MainGame.m_vTFRAME[i] = new CTCharPvPInfoDlg( &m_MainGame, pDESC); break;
		case TFRAME_GUILDPOINTLOG				: m_MainGame.m_vTFRAME[i] = new CTGuildPointLogFrame( &m_MainGame, pDESC); break;
		case TFRAME_GUILDPOINTREWARD			: m_MainGame.m_vTFRAME[i] = new CTGuildPointRewardFrame( &m_MainGame, pDESC); break;
		case TFRAME_SIEGEUI						: m_MainGame.m_vTFRAME[i] = new CTSiegeUI( &m_MainGame, pDESC ); break;
		case TFRAME_SIEGEEND					: m_MainGame.m_vTFRAME[i] = new CTSiegeEnd( &m_MainGame, pDESC ); break;
		case TFRAME_SKYGARDEN					: m_MainGame.m_vTFRAME[i] = new CTSkygardenEnd( &m_MainGame, pDESC ); break;
		case TFRAME_SKYGARDEN_MAP				: m_MainGame.m_vTFRAME[i] = new CTSkygardenMap( &m_MainGame, pDESC ); break;
		case TFRAME_MONSHOP						: m_MainGame.m_vTFRAME[i] = new CTShopDlg( &m_MainGame, pDESC, TSHOP_TYPE_NPC_MONSTER ); break;
		case TFRAME_WARN_NOTUSE_CASHITEM		: m_MainGame.m_vTFRAME[i] = new CTItemUpCashDlg( &m_MainGame, pDESC ); break;
		case TFRAME_WARN_UPITEM_SELL			: m_MainGame.m_vTFRAME[i] = new CTUpItemSellDlg( &m_MainGame, pDESC ); break;
		case TFRAME_PORTAL_SHOP_NEW				: m_MainGame.m_vTFRAME[i] = new CTPortalShopDlg( &m_MainGame, pDESC ); break;
		case TFRAME_AUCTION						: m_MainGame.m_vTFRAME[i] = new CTAuctionMainFrame( &m_MainGame, pDESC ); break;
		case TFRAME_BIDON						: m_MainGame.m_vTFRAME[i] = new CTAuctionBidOnMsgBox( &m_MainGame, pDESC ); break;
		case TFRAME_GUILD_REGULAR_OFFER			: m_MainGame.m_vTFRAME[i] = new CTGuildRegularOffer( &m_MainGame, pDESC ); break;
		case TFRAME_GUILD_TACTICS_OFFER			: m_MainGame.m_vTFRAME[i] = new CTGuildTacticsOffer( &m_MainGame, pDESC ); break;
#ifdef ADD_TEXTOOL
		case TFRAME_TEXTOOL						: m_MainGame.m_vTFRAME[i] = new CTexTool( &m_MainGame, pDESC ); break;
#endif
		case TFRAME_INVITE_TACTICS				: m_MainGame.m_vTFRAME[i] = new CTTacticsInviteDlg( &m_MainGame, pDESC ); break;
		case TFRAME_ITEM_REGGM					: m_MainGame.m_vTFRAME[i] = new CTItemRegGuildDlg( &m_MainGame, pDESC); break;
		case TFRAME_COLOR_PICKER				: m_MainGame.m_vTFRAME[i] = new CTColorPicker( &m_MainGame, pDESC); break;
		case TFRAME_FAME_BASE					: m_MainGame.m_vTFRAME[i] = new CTFameBaseDlg( &m_MainGame, pDESC, m_pTParser ); break;
	 	//case TFRAME_RANK_INFO					: m_MainGame.m_vTFRAME[i] = new CTCharRankInfoDlg( &m_MainGame, pDESC ); break;
//#ifdef ADD_WEB_CASHSHOP
//		case TFRAME_WEB_CASHSHOP				: m_MainGame.m_vTFRAME[i] = new CTWebCashShopDlg( &m_MainGame, pDESC ); break;
//#endif
#ifdef ADD_TOURNAMENT
		case TFRAME_TOURNAMENT_EVENT			: m_MainGame.m_vTFRAME[i] = new CTTournamentEvent( &m_MainGame, pDESC ); break;
		case TFRAME_TOURNAMENT_GAGE				: m_MainGame.m_vTFRAME[i] = new CTTournamentGage( &m_MainGame, pDESC, m_pTParser, &m_MainGame); break;
		case TFRAME_TOURNAMENT_SELECT_TARGET	: m_MainGame.m_vTFRAME[i] = new CTTournamentSelectTarget( &m_MainGame, pDESC ); break;
		case TFRAME_TOURNAMENT					: m_MainGame.m_vTFRAME[i] = new CTTournament( &m_MainGame, pDESC ); break;
		case TFRAME_TOURNAMENT_RESULT			: m_MainGame.m_vTFRAME[i] = new CTTournamentResult( &m_MainGame, &m_Device, pDESC ); break;
#endif
		case TFRAME_WELCOME						: m_MainGame.m_vTFRAME[i] = new CTWelcome( &m_MainGame, pDESC ); break;
#ifdef ADD_RPS
		case TFRAME_RPS: m_MainGame.m_vTFRAME[i] = new CTRpsDlg( &m_MainGame, pDESC ); break;
		case TFRAME_RPS_REWARD: m_MainGame.m_vTFRAME[i] = new CTRpsRewardDlg( &m_MainGame, pDESC ); break;
#ifdef ADD_RPS_RL
		case TFRAME_RPS_REWARD_LIST: m_MainGame.m_vTFRAME[i] = new CTRpsRewardList( &m_MainGame, pDESC); break;
#endif
#endif
		case TFRAME_AID_COUNTRY: m_MainGame.m_vTFRAME[ i ] = new CTAidCountry( &m_MainGame, pDESC); break;
		case TFRAME_SELECT_COUNTRY: m_MainGame.m_vTFRAME[ i ] = new CTSelectCountry( &m_MainGame, pDESC); break;
		case TFRAME_CHALLENGE_WAITING:	m_MainGame.m_vTFRAME[ i ] = new CTChallengeWaiting( &m_MainGame, pDESC); break;
		case TFRAME_CHALLENGE_EVENT:	m_MainGame.m_vTFRAME[ i ] = new CTChallengeEvent( &m_MainGame, pDESC); break;
		case TFRAME_CHALLENGE_ITEM:	m_MainGame.m_vTFRAME[ i ] = new CTChallengeItem( &m_MainGame, pDESC); break;
		case TFRAME_BOW_REGISTER: m_MainGame.m_vTFRAME[i] = new CTBowRegisterDlg(&m_MainGame, pDESC); break;
		case TFRAME_BOW_WAITING: m_MainGame.m_vTFRAME[i] = new CTBowRegisterWaitingDlg(&m_MainGame, pDESC); break;
		case TFRAME_BOW_RESPAWN: m_MainGame.m_vTFRAME[i] = new CTBowRespawnDlg(&m_MainGame, pDESC); break;
		case TFRAME_BOW_BPTRADE: m_MainGame.m_vTFRAME[i] = new CTBowBPTradeDlg(&m_MainGame, pDESC); break;
		case TFRAME_BOWRANK: m_MainGame.m_vTFRAME[i] = new CTBowRankingDlg(&m_MainGame, pDESC); break;
		case TFRAME_BOWSKILLS: m_MainGame.m_vTFRAME[i] = new CTPremiumSkills(&m_MainGame, pDESC, m_MainGame.m_pMainChar, FALSE); break;
		case TFRAME_PREMIUMSKILLS: m_MainGame.m_vTFRAME[i] = new CTPremiumSkills(&m_MainGame, pDESC, m_MainGame.m_pMainChar, TRUE); break;
		case TFRAME_BRTEAMS: m_MainGame.m_vTFRAME[i] = new CBRTeamDlg(&m_MainGame, pDESC); break;
		case TFRAME_BRPANNELS: m_MainGame.m_vTFRAME[i] = new CBRPannels(&m_MainGame, pDESC); break;
		case TFRAME_BRTRANKING: m_MainGame.m_vTFRAME[ i ] = new CBRTRanking( &m_MainGame, pDESC ); break;
		case TFRAME_BRRANKING: m_MainGame.m_vTFRAME[ i ] = new CBRRankingDlg( &m_MainGame, pDESC ); break;
		case TFRAME_BATTLERANK: m_MainGame.m_vTFRAME[ i ] = new CBattleRankProgressDlg( &m_MainGame, pDESC, (CTMainUI*) m_MainGame.m_vTFRAME[TFRAME_MAIN]); break;
		case TFRAME_LOTWIN: m_MainGame.m_vTFRAME[ i ] = new CTLotWinDlg( &m_MainGame, pDESC); break;
		case TFRAME_COMPSTYLE: m_MainGame.m_vTFRAME[ i ] = new CCompStyleDlg( &m_MainGame, pDESC); break;
		case TFRAME_GUILD_BASE_NEW: m_MainGame.m_vTFRAME[i] = new CTGuildMainNew(&m_MainGame, pDESC); break;
		case TFRAME_CUSTOMCLOAK		:m_MainGame.m_vTFRAME[ i ] = new CTCustomCloakDlg( &m_MainGame, pDESC ); break;
//		case TFRAME_BG_REGISTER : m_MainGame.m_vTFRAME[i] = new CBGMainRegisterDlg(&m_MainGame, pDESC); break;
		case TFRAME_ARENARANKING: m_MainGame.m_vTFRAME[i] = new ArenaRanking(&m_MainGame, pDESC); break;
		default:	m_MainGame.m_vTFRAME[i] = new CTClientUIBase( &m_MainGame, pDESC); break;

		}

		m_MainGame.AddKid(m_MainGame.m_vTFRAME[i]);
	}

	static_cast<CTNPCTalkDlg *>(m_MainGame.m_vTFRAME[TFRAME_NPCDIALOG])->m_pTFollowDlg = (CQuestNewDlg *) m_MainGame.m_vTFRAME[TFRAME_QUEST_NEWUI];

	CTPartyItemLottery::InitInstance(
		&m_MainGame,
		m_pTParser->FindFrameTemplate(ID_FRAME_ITEM_LOTTERY), 
		CSize(m_Device.m_option.m_dwScreenX, m_Device.m_option.m_dwScreenY) );
	CTMessengerChat::ms_ChatFrameDesc = m_pTParser->FindFrameTemplate(ID_FRAME_MESSENGER_CHAT);


	CTDetailInfoDlg* pChatInfoDlg = static_cast<CTDetailInfoDlg *>( m_MainGame.m_vTFRAME[TFRAME_CHAT_DETAIL_INFO] );
	pChatInfoDlg->ShowCloseButton(TRUE);

	CTCharInfoNewDlg* pCharInner = static_cast<CTCharInfoNewDlg*>(m_MainGame.m_vTFRAME[TFRAME_CHARINFO_INNER]);
	{
		FRAMEDESC_SHAREDPTR pITEMDESC = m_pTParser->FindFrameTemplate(1135);
		m_MainGame.RemoveKid(m_MainGame.m_vTFRAME[TFRAME_CHARINFO_NEW]);
		m_MainGame.RemoveKid(m_MainGame.m_vTFRAME[TFRAME_CHARINFO_PVP]);
		m_MainGame.RemoveKid(m_MainGame.m_vTFRAME[TFRAME_CHARINFO_DUELS]);
		m_MainGame.RemoveKid(m_MainGame.m_vTFRAME[TFRAME_TITLE]);

		CTCharNewDlg* pITEM = new CTCharNewDlg( &m_MainGame, pITEMDESC, m_pTParser, &m_Device, 1135, m_MainGame.m_pMainChar);
		pCharInner->m_pFRAME = pITEM;
		m_MainGame.m_vTFRAME[TFRAME_CHARINFO_NEW] = static_cast<CTCharNewDlg*>(pCharInner->m_pFRAME);
		pCharInner->AddKid(pCharInner->m_pFRAME);

		FRAMEDESC_SHAREDPTR pDESCS[TAB_COUNT-1];
		for(BYTE i=0;i<TAB_COUNT-1;++i)
			pDESCS[i] = m_pTParser->FindFrameTemplate(1217 + i);

		CTCharNewPVPDlg* pPVP = new CTCharNewPVPDlg( &m_MainGame, pDESCS[TAB_WAR - 1]);
		pCharInner->m_pFRAMES[TAB_WAR - 1] = pPVP;
		m_MainGame.m_vTFRAME[TFRAME_CHARINFO_PVP] = static_cast<CTCharNewPVPDlg*>(pCharInner->m_pFRAMES[TAB_WAR - 1]);

		CTCharDuelsDlg* pDUELS = new CTCharDuelsDlg( &m_MainGame, pDESCS[TAB_PVP - 1]);
		pCharInner->m_pFRAMES[TAB_PVP - 1] = pDUELS;
		m_MainGame.m_vTFRAME[TFRAME_CHARINFO_DUELS] = static_cast<CTCharDuelsDlg*>(pCharInner->m_pFRAMES[TAB_PVP - 1]);

		CTTitleDlg* pTITLES = new CTTitleDlg( &m_MainGame, pDESCS[TAB_TITLE - 1]);
		pCharInner->m_pFRAMES[TAB_TITLE - 1] = pTITLES;
		m_MainGame.m_vTFRAME[TFRAME_TITLE] = static_cast<CTTitleDlg*>(pCharInner->m_pFRAMES[TAB_TITLE - 1]);

		pCharInner->m_pFRAME->m_bSND = FALSE;
		for(BYTE i=0;i<TAB_COUNT-1;++i)
		{
			pCharInner->m_pFRAMES[i]->m_bSND = FALSE;
			pCharInner->AddKid(pCharInner->m_pFRAMES[i]);
		}
	}

	CString strTextureName;
	for(BYTE i = 0; i < TCUSTOMTEX_COUNT; ++i)
	{
		strTextureName.Format(".\\Data\\Skin\\Custom\\%s", strTextures[i]);
		m_MainGame.LoadCustomTextures(i + 1, strTextureName);
	}

	std::vector<DWORD> vCustomImgId = {
		1302,
		25001,
		25002,
		25003,
		25004,
		25005,
		25006,
		25007,
		25008,
		60000,
		60001,
		60002,
		60003,
		60004,
		60005,
		60006,
		60007,
		60008,
		60009,
		60010,
		60011,
		60012,
		60013,
		60014,
		60015,
		60016,
		61000,
		61001,
		61002,
		61003,
		61004,
		61005
	};
	
	CString strCustomImgPath;
	for (auto dwId : vCustomImgId)
	{
		strCustomImgPath.Format(".\\Data\\Img\\Custom\\%d.png", dwId);
		TComponent::AddOwnImages(dwId, strCustomImgPath);
	}

	for(auto i=0; i<TGAUGE_FRAME_COUNT; i++)
		m_MainGame.m_vTGAUGEFRAME[i] = (CTClientUIBase *) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(dwGaugeFrameID[i]);

#ifndef NEW_IF
	m_MainGame.m_pNotifyFrame = (CTDynamicHelpDlg *) m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_NOTIFY];
#endif
	
#ifdef NEW_IF
	FRAMEDESC_SHAREDPTR pNewPopupDESC = m_pTParser->FindFrameTemplate( ID_FRAME_ACTLIST_NEW );
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_CHATTYPE, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pNewPopupDESC, FALSE) );
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_CHATFLAG_ALL, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pNewPopupDESC, FALSE) );
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_LATEST_WHISPER, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pNewPopupDESC, FALSE) );
#else
	
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_CHATTYPE, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pMINIPOPUPDESC, FALSE) );
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_CHATFLAG_ALL, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pMINIPOPUPDESC, FALSE) );
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_CHATFLAG_NORMAL, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pMINIPOPUPDESC, TRUE) );
	m_MainGame.m_pChatFrame->SetPopup( CTChatFrame::POPUP_LATEST_WHISPER, new CTMiniPopupDlg(m_MainGame.m_pChatFrame, pMINIPOPUPDESC, FALSE) );
#endif

#ifdef NEW_IF
	m_MainGame.m_pActListPopup = new CTMiniPopupDlg(&m_MainGame, m_pTParser->FindFrameTemplate(ID_FRAME_ACTLIST_NEW), FALSE);
	m_MainGame.m_pCommandsPopup = new CTMiniPopupDlg(&m_MainGame, m_pTParser->FindFrameTemplate(ID_FRAME_ACTLIST_NEW), FALSE);
#else
	m_MainGame.m_pActListPopup = new CTMiniPopupDlg(&m_MainGame, pMINIPOPUPDESC, FALSE);
#endif

	m_MainGame.AddKid(m_MainGame.m_pActListPopup);
	m_MainGame.AddKid(m_MainGame.m_pCommandsPopup);
	
	((CTInvenDlg *) m_MainGame.m_vTFRAME[TFRAME_MONINVEN])->m_pTINVEN = &m_MainGame.m_vTMONINVEN;

#ifdef NEW_IF
	m_MainGame.m_pDurationUI = (CTDurationFrame*)  m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_CTRLINST_POS_DURATION);
#else
	TFrame* pCenter = (TFrame*) m_MainGame.m_vTFRAME[TFRAME_MAIN]->FindKid(ID_FRAME_MAIN_CENTER);
	m_MainGame.m_pDurationUI = (CTDurationFrame*) pCenter->FindKid(ID_FRAME_DURATION); // old ui 
#endif

	FRAMEDESC_SHAREDPTR pPopupDESC = m_pTParser->FindFrameTemplate(ID_FRAME_POPUP_MENU);
	m_MainGame.m_pTPOPUP = new CTPopupMenu( &m_MainGame, pPopupDESC);
	m_MainGame.AddKid(m_MainGame.m_pTPOPUP);

#ifdef NEW_IF
	FRAMEDESC_SHAREDPTR pPopupDESCNew = m_pTParser->FindFrameTemplate(ID_FRAME_CHANNEL_POPUPNEW);
	m_MainGame.m_pChannelPOPUP = new CTMiniPopupDlg( &m_MainGame, pPopupDESCNew, TRUE);
	m_MainGame.AddKid(m_MainGame.m_pChannelPOPUP);
#else
	m_MainGame.m_pChannelPOPUP = new CTPopupMenu( &m_MainGame, pPopupDESC);
	m_MainGame.AddKid(m_MainGame.m_pChannelPOPUP);
#endif

	CTMainUI* pMainUI = static_cast<CTMainUI*>( m_MainGame.m_vTFRAME[TFRAME_MAIN] );
	CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
#ifdef NEW_IF
#else
	TFrame* pFRAME = (TFrame*) pMainUI->FindKid(ID_FRAME_MAIN_RIGHT);
	m_MainGame.m_pLockButton = (TButton*) pFRAME->FindKid(ID_CTRLINST_CHAT_LOCK);
	m_MainGame.m_pLockButton->SetStateButton();
#endif

	m_MainGame.m_pOutro = new COutro(&m_MainGame, m_pTParser->FindFrameTemplate(1180));


	FRAMEDESC_SHAREDPTR Popup = m_pTParser->FindFrameTemplate(ID_FRAME_CHANNEL_POPUPNEW);
	m_MainGame.m_pUBarPopup = new CTMiniPopupDlg( &m_MainGame, Popup, FALSE);
	m_MainGame.AddKid(m_MainGame.m_pUBarPopup);

	CTChatList::SetDragZone( CRect(
		0, 0,
		m_Device.m_option.m_dwScreenX,
		m_Device.m_option.m_dwScreenY));

	m_MainGame.m_pTMinimap->m_pDevice = &m_Device;
	m_MainGame.m_pTMinimap->m_pTMON = &m_MainGame.m_mapMONSTER;
	m_MainGame.m_pTMinimap->m_pTRSCS = m_MainGame.m_pTRSCS;
	m_MainGame.m_pTMinimap->m_pTMAP = &m_MainGame.m_vMAP;
	m_MainGame.m_pTMinimap->m_pHost = m_MainGame.m_pMainChar;
	m_MainGame.m_pTMinimap->m_pCAM = &m_Camera;

#ifdef NEW_IF
	m_MainGame.m_pTRSCS = (CTRSCSDlg *) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_FRAME_RSCS_NEW);
#else
	m_MainGame.m_pTRSCS = (CTRSCSDlg *) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_FRAME_RSCS);
#endif
	m_MainGame.m_pTRSCS->m_pDevice = &m_Device;
	m_MainGame.m_pTRSCS->m_pTMAP = &m_MainGame.m_vMAP;
	m_MainGame.m_pTRSCS->m_pHost = m_MainGame.m_pMainChar;
	m_MainGame.m_pTRSCS->m_pCAM = &m_Camera;

	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pDevice = &m_Device;
	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pCAM = &m_Camera;

	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pTMON = &m_MainGame.m_mapMONSTER;
	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pTRSCS = m_MainGame.m_pTRSCS;
	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pTMAP = &m_MainGame.m_vMAP;
	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pHost = m_MainGame.m_pMainChar;
	((CTWorldmapDlg *) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP])->m_pDead = &m_MainGame.m_vMainDead;

	((CTNewQuestDlg *) m_MainGame.m_vTFRAME[TFRAME_QUEST])->m_pDevice = &m_Device;
	((CTNewQuestDlg *) m_MainGame.m_vTFRAME[TFRAME_QUEST])->m_pTMAP = &m_MainGame.m_vMAP;
	((CTNewQuestDlg *) m_MainGame.m_vTFRAME[TFRAME_QUEST])->m_pCAM = &m_Camera;

	((CQuestNewDlg *)m_MainGame.m_vTFRAME[TFRAME_QUEST_NEWUI])->m_pDevice = &m_Device;
	((CQuestNewDlg *)m_MainGame.m_vTFRAME[TFRAME_QUEST_NEWUI])->m_pTMAP = &m_MainGame.m_vMAP;
	((CTNPCTalkDlg *) m_MainGame.m_vTFRAME[TFRAME_NPCDIALOG])->m_pDevice = &m_Device;
	((CTNPCTalkDlg *) m_MainGame.m_vTFRAME[TFRAME_NPCDIALOG])->m_pTMAP = &m_MainGame.m_vMAP;
	((CTNPCTalkDlg *) m_MainGame.m_vTFRAME[TFRAME_NPCDIALOG])->m_pCAM = &m_Camera;

	for(auto i=0; i<TGAUGE_COUNT; i++)
	{
		TFrame *pTFRAME;
		if( dwGaugeID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwGaugeID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwGaugeID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwGaugeID[i][1]);

		m_MainGame.m_vTGAUGE[i] = (TGauge *) pTFRAME->FindKid(dwGaugeID[i][2]);
		m_MainGame.m_vTGAUGE[i]->SetStyle(m_MainGame.m_vTGAUGE[i]->GetStyle()|dwGaugeID[i][3]);
		m_MainGame.m_vTGAUGE[i]->SetShowTextOnMouse( dwGaugeID[i][6] );
		CD3DFont *pTFONT = m_MainGame.m_vTGAUGE[i]->Get3DFont();


		if(pTFONT)
		{
			pTFONT->m_dwLineColor = dwGaugeID[i][5];
			pTFONT->m_dwColor = dwGaugeID[i][4];
			pTFONT->m_bOutLine = TRUE;
		}
	}

	for(auto i=0; i<TTEXT_COUNT; i++)
	{
		TFrame *pTFRAME;
		if( dwTextID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwTextID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwTextID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwTextID[i][1]);

		m_MainGame.m_vTTEXT[i] = pTFRAME->FindKid(dwTextID[i][2]);
		CD3DFont *pTFONT = m_MainGame.m_vTTEXT[i]->Get3DFont();


		if(pTFONT)
		{
			pTFONT->m_dwLineColor = dwTextID[i][4];

			if(dwTextID[i][3])
				pTFONT->m_dwColor = dwTextID[i][3];

			pTFONT->m_bOutLine = TRUE;
		}
	}

#ifdef ADD_SKYGARDEN
	{
		CTGaugePannel *pTPARENT = (CTGaugePannel *) m_MainGame.FindKid( ID_FRAME_GAUGE );
        TFrame *pTFRAME = (TFrame *) pTPARENT->FindKid( ID_FRAME_MY_GAUGE );
		m_MainGame.m_pTASSISTANT[ 0 ] = (TImageList*) pTFRAME->FindKid( ID_CTRLINST_A1 );
		m_MainGame.m_pTASSISTANT[ 1 ] = (TImageList*) pTFRAME->FindKid( ID_CTRLINST_A2 );
		m_MainGame.m_pTASSISTANT[ 2 ] = (TImageList*) pTFRAME->FindKid( ID_CTRLINST_A3 );

		pTPARENT->m_pTASSISTANT[0] = m_MainGame.m_pTASSISTANT[ 0 ];
		pTPARENT->m_pTASSISTANT[1] = m_MainGame.m_pTASSISTANT[ 1 ];
		pTPARENT->m_pTASSISTANT[2] = m_MainGame.m_pTASSISTANT[ 2 ];
	}
#endif
	m_MainGame.m_vTTEXT[0]->m_bNoHIT = TRUE;
	
	for(auto i=0; i<TLEADERMARK_COUNT; i++)
	{
		TFrame *pTFRAME;
		if( dwLeaderMarkID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwLeaderMarkID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwLeaderMarkID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwLeaderMarkID[i][1]);

		m_MainGame.m_vTLEADERMARK[i] = pTFRAME->FindKid(dwLeaderMarkID[i][2]);
	}

	for(auto i=0; i<TPANNEL_COUNT; i++)
	{
		TFrame *pTFRAME;
		if( dwPannelID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwPannelID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwPannelID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwPannelID[i][1]);
		
		m_MainGame.m_vTPANNEL[i] = pTFRAME->FindKid(dwPannelID[i][2]);
	}

	for(auto i=0; i<TFACEIMG_COUNT; i++)
	{
		TFrame *pTFRAME;
		if( dwFaceImgID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwFaceImgID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwFaceImgID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwFaceImgID[i][1]);

		m_MainGame.m_vTFACEIMG[i] = (TImageList *) pTFRAME->FindKid(dwFaceImgID[i][2]);
		m_MainGame.m_vTFACEIMG[i]->SetCurImage(0);

		m_MainGame.m_vTFACEIMG[i]->EnableComponent(FALSE);
		m_MainGame.m_vTFACEIMG[i]->ShowComponent(FALSE);
	}
#ifdef NEW_IF
#else
	{
		TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(ID_FRAME_GAUGE);
		TFrame* pTFRAME = (TFrame *) pTPARENT->FindKid(ID_FRAME_PARTY_GAUGE);
		TComponent* pComp = pTFRAME->FindKid(ID_CTRLINST_PC_FACE7);
		pTFRAME->RemoveKid(pComp);
		delete pComp;
	}
#endif

	
	for(auto i=0; i<TLEVELIMG_COUNT; i++)
	{
		TFrame* pTFRAME;
		if( dwLevelImgID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwLevelImgID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwLevelImgID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwLevelImgID[i][1]);

		m_MainGame.m_vTLEVELIMG[i] = (TImageList *) pTFRAME->FindKid(dwLevelImgID[i][2]);
		m_MainGame.m_vTLEVELIMG[i]->EnableComponent(FALSE);
		m_MainGame.m_vTLEVELIMG[i]->ShowComponent(FALSE);
	}

	for(auto i=0; i<TFACEBACKIMG_COUNT; i++)
	{
		TFrame* pTFRAME;
		if( dwFACEBACKImgID[i][0] )
		{
			TFrame *pTPARENT = (TFrame *) m_MainGame.FindKid(dwFACEBACKImgID[i][0]);
            pTFRAME = (TFrame *) pTPARENT->FindKid(dwFACEBACKImgID[i][1]);
		}
		else
			pTFRAME = (TFrame *) m_MainGame.FindKid(dwFACEBACKImgID[i][1]);

		m_MainGame.m_vTFACEBACKIMG[i] = (TImageList *) pTFRAME->FindKid(dwFACEBACKImgID[i][2]);
		m_MainGame.m_vTFACEBACKIMG[i]->EnableComponent(FALSE);
		m_MainGame.m_vTFACEBACKIMG[i]->ShowComponent(FALSE);
	}

	for(auto i=0; i<THUD_BASE_COUNT; i++)
	{
		TFrame *pTFRAME = (TFrame *) m_MainGame.FindKid(dwHudBaseID[i][0]);
		m_MainGame.m_vTHUDBASE[i] = pTFRAME->FindKid(dwHudBaseID[i][1]);
		m_MainGame.m_vTHUDBASE[i]->m_bNoHIT = TRUE;
		m_MainGame.m_vTHUDBASE[i]->ShowComponent(FALSE);
	}

	for(auto i=0; i<THUD_GAUGE_COUNT; i++)
	{
		TFrame *pTFRAME = (TFrame *) m_MainGame.FindKid(dwHudGaugeID[i][0]);
		m_MainGame.m_vTHUDGAUGE[i] = (TGauge*) pTFRAME->FindKid(dwHudGaugeID[i][1]);
		m_MainGame.m_vTHUDGAUGE[i]->m_bNoHIT = TRUE;
		m_MainGame.m_vTHUDGAUGE[i]->SetStyle(m_MainGame.m_vTHUDGAUGE[i]->GetStyle()|dwHudGaugeID[i][2]);
		m_MainGame.m_vTHUDGAUGE[i]->ShowComponent(FALSE);
	}

	for(auto i=0; i<THUD_TEXT_COUNT; i++)
	{
		TFrame *pTFRAME = (TFrame *) m_MainGame.FindKid(dwHudTextID[i][0]);
		m_MainGame.m_vTHUDTEXT[i] = pTFRAME->FindKid(dwHudTextID[i][1]);
		m_MainGame.m_vTHUDTEXT[i]->m_bNoHIT = TRUE;
		m_MainGame.m_vTHUDTEXT[i]->ShowComponent(FALSE);

		CD3DFont *pTFONT = m_MainGame.m_vTHUDTEXT[i]->Get3DFont();

		if(pTFONT)
		{
			pTFONT->m_dwLineColor = dwHudTextID[i][3];
			pTFONT->m_dwColor = dwHudTextID[i][2];
			pTFONT->m_bOutLine = TRUE;
		}
	}

#ifdef NEW_IF
	m_MainGame.m_pTPARTYITEM = pTGaugePannel->m_pPartyLot;
#else
	TFrame *pTGAUFRM = (TFrame*) pMainUI->FindKid(ID_FRAME_MAIN_RIGHT);
	m_MainGame.m_pTPARTYITEM = pTGAUFRM->FindKid(ID_CTRLINST_PARTY_ITEM);

	CD3DFont *pTPITFONT = m_MainGame.m_pTPARTYITEM->Get3DFont();
	if(pTPITFONT)
	{
		pTPITFONT->m_dwLineColor = TTEXTSHADOW_COLOR;
		pTPITFONT->m_dwColor = TNORMAL_COLOR;
		pTPITFONT->m_bOutLine = TRUE;
	}
#endif
	for(auto i=0; i<9; i++)
	{
		m_MessageBox.AddFrame( dwMsgBoxID[i][1], dwMsgBoxID[i][0]);
		m_MessageBox.FindFrame(dwMsgBoxID[i][1])->EnableFloat(TRUE);
	}


	// 로비UI 초기화
	for(auto i=0; i<7; i++)
	{
		m_TNet.AddFrame(dwFrameID[i][1], dwFrameID[i][0]);
		m_pTNetFRAME[i] = m_TNet.FindFrame(dwFrameID[i][1]);
	}

	m_TNet.DefaultPosition( CTClientUIBase::m_vDefaultBASIS, FALSE );
	m_TNet.ResetPosition();
	m_TNet.LoadCAURL();

	if( CTNationOption::ENGLISH )
	{
		TFrame* pFrame = m_TNet.FindFrame( ID_FRAME_LOGIN_NEW );
		TEdit* pEdit = (TEdit*) pFrame->FindKid( ID_CTRLINST_ID );
		CString strDEF;
		strDEF = CTChart::LoadString( TSTR_DEF_ID );
		pEdit->InsertString( strDEF );
		
		pEdit->Get3DFont()->m_dwColor &= 0x00FFFFFF;
		pEdit->Get3DFont()->m_dwColor |= 0x80FFFFFF;
		pEdit->MoveCaretToFront();
	}

	MAPFRAME::iterator itFRAME;
	for( itFRAME = m_TNet.m_mapFrame.begin(); itFRAME != m_TNet.m_mapFrame.end(); itFRAME++)
		(*itFRAME).second->m_bSND = FALSE;

	for(auto i=0; i<TPANNEL_COUNT; i++)
		m_MainGame.m_vTMAINTAIN[i] = ((CTGaugePannel *) m_MainGame.m_vTFRAME[TFRAME_GAUGE])->m_vTMAINTAIN[i];

	m_TNet.SetLevel(ID_FRAME_LOGIN_NEW);
	TFrame *pTFRAME = m_TNet.GetCurrentFrame();
	pTFRAME->SetFocus(ID_CTRLINST_ID);

	TComponent* pTFRAMESERVER = m_TNet.FindKid(ID_FRAME_SERVER_NEW);
	FRAMEDESC_SHAREDPTR pPOPUPMENUDESC = m_pTParser->FindFrameTemplate(ID_FRAME_MINIPOPUP5);
	m_TNet.m_pChannelDLG = new CTMiniPopupDlg(pTFRAMESERVER, pPOPUPMENUDESC, TRUE);

	{
		TFrame* pTFRAMENEWCHAR = m_TNet.FindFrame( ID_FRAME_NEWCHAR_NEW );
		TComponent* pTEMP = pTFRAMENEWCHAR->FindKid( ID_CTRLINST_NAME );
		CTLimitEdit* pNAME = new CTLimitEdit(pTFRAMENEWCHAR, pTEMP->m_pDESC.lock(), 16);
		pNAME->m_id = pTEMP->m_id;
		CPoint ptPos;
		pTEMP->GetComponentPos(&ptPos);
		pNAME->MoveComponent(ptPos);
		pTFRAMENEWCHAR->RemoveKid(pTEMP);
		pTFRAMENEWCHAR->AddKid(pNAME);
		delete pTEMP;

		m_TNet.m_pWarning = pTFRAMENEWCHAR->FindKid( ID_CTRLINST_WARNING );

		TComponent* pRaceList = pTFRAMENEWCHAR->FindKid( ID_CTRLINST_TEXT_RACE_INFO );
		TComponent* pClassList = pTFRAMENEWCHAR->FindKid( ID_CTRLINST_TEXT_CLASS_INFO );
		pTFRAMENEWCHAR->RemoveKid( pRaceList );
		pTFRAMENEWCHAR->RemoveKid( pClassList );

		FRAMEDESC_SHAREDPTR pTEXTPOPUPDESC = m_pTParser->FindFrameTemplate(ID_FRAME_TEXTPOPUP);
		m_TNet.m_pCLASSTEXTPOPUP = new CTTextPopup( pTFRAMENEWCHAR, pTEXTPOPUPDESC );
		m_TNet.m_pRACETEXTPOPUP = new CTTextPopup( pTFRAMENEWCHAR, pTEXTPOPUPDESC );

		POINT ptRace, ptClass;
		pRaceList->GetComponentPos(&ptRace);
		pClassList->GetComponentPos(&ptClass);

		m_TNet.m_pCLASSTEXTPOPUP->MoveComponent( ptClass );
		m_TNet.m_pRACETEXTPOPUP->MoveComponent( ptRace );
		m_TNet.m_pCLASSTEXTPOPUP->m_id = pRaceList->m_id;
		m_TNet.m_pRACETEXTPOPUP->m_id = pClassList->m_id;

		pTFRAMENEWCHAR->AddKid( m_TNet.m_pCLASSTEXTPOPUP );
		pTFRAMENEWCHAR->AddKid( m_TNet.m_pRACETEXTPOPUP );

		delete pRaceList;
		delete pClassList;
	}

	MAPRES::iterator itTSFX = m_RES.m_mapSFX.find(ID_SFX_POINTER);
	m_MainGame.m_pTPOINTER = (LPSFX) (*itTSFX).second;

	CTClientObjBase::InitSquareResource(&m_RES);
	CTClientObjBase::m_vTGARBAGE.clear();
	CTachyonSlashSFX::InitVB(TSLASH_STEP);

	MAPRES::iterator finder = m_RES.m_mapTEX.find(ID_RSCS_MONENEMY);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientGame::m_pTSELECTMARK = (LPTEXTURESET) (*finder).second;

	FRAMEDESC_SHAREDPTR pDESC;
	CTFrameGroupBase *pFrmGrpBase = static_cast<CTFrameGroupBase *>(m_MainGame.m_vTFRAME[TFRAME_SETTING]);
	{
		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_GAME_SETTING);
		m_MainGame.m_pGameSetting = new CTGameSettingFrame(pFrmGrpBase, pDESC);
		pFrmGrpBase->AddFrame( m_MainGame.m_pGameSetting, ID_CTRLINST_TAB_GAME );

		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_SYSTEM_SETTING);
		m_MainGame.m_pSystemSetting = new CTSystemSettingFrame(pFrmGrpBase, pDESC, &m_Device);
		pFrmGrpBase->AddFrame( m_MainGame.m_pSystemSetting, ID_CTRLINST_TAB_SYSTEM );
		m_MainGame.m_pResolutionBtn = m_MainGame.m_pSystemSetting->FindKid( ID_CTRLINST_BTN_RESOLUTION);


		FRAMEDESC_SHAREDPTR pMINIPOPUPDESC3 = m_pTParser->FindFrameTemplate(ID_FRAME_MINIPOPUP3);
		m_MainGame.m_pSystemSetting->m_pResolutionListPopup = new CTMiniPopupDlg(&m_MainGame, pMINIPOPUPDESC3, FALSE);
		m_MainGame.m_pSystemSetting->AddKid(m_MainGame.m_pSystemSetting->m_pResolutionListPopup);

		CString strFMT;
		strFMT = CTChart::Format( TSTR_FMT_RESOLUTION,
			m_Device.m_option.m_dwScreenX,
			m_Device.m_option.m_dwScreenY);

		m_MainGame.m_pResolutionBtn->m_strText = strFMT;
	}

	/**/
	//GUILDNEW
	pFrmGrpBase = static_cast< CTFrameGroupBase* >( m_MainGame.m_vTFRAME[ TFRAME_GUILD_BASE_NEW ] );
	{
		
		pDESC = m_pTParser->FindFrameTemplate( 1221 );
		pFrmGrpBase->AddFrame( new CTGuildSummaryNewDlg( pFrmGrpBase, pDESC ), 27705 );

		pDESC = m_pTParser->FindFrameTemplate( 1236 );
		pFrmGrpBase->AddFrame( new CTGuildMembersNewDlg( pFrmGrpBase, pDESC, pMINIPOPUPDESC ), 27706 );

		pDESC = m_pTParser->FindFrameTemplate( 1255 );
		pFrmGrpBase->AddFrame( new CTGuildMercenaryNewDlg( pFrmGrpBase, pDESC, pMINIPOPUPDESC ), 27707 );

		pDESC = m_pTParser->FindFrameTemplate( 1237 );
		pFrmGrpBase->AddFrame( new CTGuildJoinNewDlg( pFrmGrpBase, pDESC, pMINIPOPUPDESC ), 27708 );

		pDESC = m_pTParser->FindFrameTemplate( 1226 );
		pFrmGrpBase->AddFrame( new CTGuildWarInfoNewDlg( pFrmGrpBase, pDESC ), 27709 );
		
		pDESC = m_pTParser->FindFrameTemplate(1276);
		pFrmGrpBase->AddFrame( new CGuildSkillsDlg( pFrmGrpBase, pDESC ), 28179 );
	}
	
	
	// 길드창
	pFrmGrpBase = static_cast<CTFrameGroupBase*>(m_MainGame.m_vTFRAME[TFRAME_COMMUNITY]);
	{
		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_GUILDNORMAL);
		pFrmGrpBase->AddFrame( new CTGuildNormalFrame(pFrmGrpBase, pDESC), ID_CTRLINST_TAB_GUILDNORMAL );

		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_INNER_GUILDPVPRECORD);
		pFrmGrpBase->AddFrame( new CTGuildMemberFrame(pFrmGrpBase, pDESC, pMINIPOPUPDESC), ID_CTRLINST_TAB_GUILDMEMBER );

		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_GUILDTERRITORY);
		pFrmGrpBase->AddFrame( new CTGuildTerritoryFrame(pFrmGrpBase, pDESC), ID_CTRLINST_TAB_GUILDTERR );

		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_INNER_GUILDMERCENARY);
		pFrmGrpBase->AddFrame( new CTGuildVolunteerFrame(pFrmGrpBase, pDESC, pMINIPOPUPDESC), ID_CTRLINST_TAB_GUILDADD );
	}


	// 커뮤니티창
	pFrmGrpBase = static_cast<CTFrameGroupBase*>(m_MainGame.m_vTFRAME[TFRAME_MESSENGER]);
	{
		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_MESSENGER_BASE);
		CTMessengerBase* pMsgBase = new CTMessengerBase(pFrmGrpBase, pDESC);
		{
			pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_GROUP_LIST);
			CTMsgGroupList* pMsgGrpList = new CTMsgGroupList(pMsgBase,pDESC);
			pMsgBase->SetMsgGroupList(pMsgGrpList); 
			pMsgGrpList->InitPopup(pMINIPOPUPDESC);
		}
		pFrmGrpBase->AddFrame( pMsgBase, ID_CTRLINST_TAB_MESSENGER );
		m_MainGame.m_pMessengerBase = pMsgBase;

		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_BLOCKLIST);
		m_MainGame.m_pBlockList = new CTBlockListDlg(pFrmGrpBase, pDESC);
		pFrmGrpBase->AddFrame( m_MainGame.m_pBlockList, ID_CTRLINST_TAB_BLOCKLIST );
	}


	/*// 편지창
	pFrmGrpBase = static_cast<CTFrameGroupBase*>(m_MainGame.m_vTFRAME[TFRAME_MAIL]);
	{
		pDESC = m_pTParser->FindFrameTemplate(ID_FRAME_MAILBOX_BASE);
		m_MainGame.m_pMailList = new CTMailListFrame(pFrmGrpBase, pDESC);
		m_MainGame.m_pMailList->m_pMailDlgTitle = pFrmGrpBase->FindKid( ID_CTRLINST_TITLE_MAIL_NEW );
		pFrmGrpBase->AddFrame( m_MainGame.m_pMailList, ID_CTRLINST_TAB_MAILBOX_NEW );
	}*/


	// Auction
	pFrmGrpBase = static_cast< CTFrameGroupBase* >( m_MainGame.m_vTFRAME[ TFRAME_AUCTION ] );
	{
		pDESC = m_pTParser->FindFrameTemplate( ID_FRAME_AUCTION_SEARCH );
		pFrmGrpBase->AddFrame( new CTAuctionSearch( pFrmGrpBase, pDESC ), ID_CTRLINST_SEARCH );
		pDESC = m_pTParser->FindFrameTemplate( ID_FRAME_AUCTION_REGIST );
		pFrmGrpBase->AddFrame( new CTAuctionRegist( pFrmGrpBase, pDESC ), ID_CTRLINST_REGIST );
		pDESC = m_pTParser->FindFrameTemplate( ID_FRAME_AUCTION_BID );
		pFrmGrpBase->AddFrame( new CTAuctionMyBid( pFrmGrpBase, pDESC ), ID_CTRLINST_BIDDING );
		pDESC = m_pTParser->FindFrameTemplate( ID_FRAME_AUCTION_BASKET );
		pFrmGrpBase->AddFrame( new CTAuctionBasket( pFrmGrpBase, pDESC ), ID_CTRLINST_BASKET );
	}

	// Ranking
	pFrmGrpBase = static_cast< CTFrameGroupBase* >( m_MainGame.m_vTFRAME[ TFRAME_RANKING_NEW ] );
	{
		pDESC = m_pTParser->FindFrameTemplate( ID_FRAME_RANKING_NEW_INNER );
		pFrmGrpBase->AddFrame( new CTRankingNewDlg( pFrmGrpBase, pDESC ), ID_CTRLINST_TAB );
	}

	pFrmGrpBase = static_cast< CTFrameGroupBase* >( m_MainGame.m_vTFRAME[TFRAME_COMPANION] );
	{
		pDESC = m_pTParser->FindFrameTemplate( 1153 );
		pFrmGrpBase->AddFrame( new CTCompanionAttrs( pFrmGrpBase, pDESC ), 24791 );

		pDESC = m_pTParser->FindFrameTemplate( 1155 );
		pFrmGrpBase->AddFrame( new CTCompanionStats( pFrmGrpBase, pDESC ), 24792 );
	}


	CTGuildCommander::RegChatCmds();
	CTMessengerCommander::RegChatCmds();
	CTPartyCommander::RegChatCmds();
	CTChatCommander::RegChatCmds();

	m_MainGame.BackupNeededFrames();

	InitChart();
	InitUI();

	delete m_pTParser;
	m_pTParser = nullptr;
	m_MainGame.m_pTParser = nullptr;
	TImageList::ClearDelegates();
	m_MainGame.ReleaseFrame();

	InitTRECTVB();
	InitTexture();
	InitRSCS();
	InitNAV();
	InitCommonConst();
	InitChatProc();

#ifdef ADD_SNOW
	m_MainGame.m_pChatFrame->AddChatCmdProc( "snow", _on_chatcmd_snow, (DWORD)(&m_MainGame));
#endif

	m_MainGame.m_pRankTexture = new CBattleRankTex(pMainUI->m_pRankImage);
	m_MainGame.m_vTMONINVEN.m_pTITEM = CTChart::FindTITEMTEMP(TMONINVEN_ID);
	m_MainGame.m_vTMONINVEN.m_wItemID = TMONINVEN_ID;

	for( BYTE i=0; i<TCURSOR_COUNT; i++)
		m_vTCURSOR[i] = LoadCursor( theApp.m_hInstance, MAKEINTRESOURCE(dwCursorID[i]));
	::SetCursor(m_vTCURSOR[TCURSOR_HAND]);

	TButton::m_dwDOWNSND = ID_SND_PUSH_BUTTON2;
	TFrame::m_dwCLOSESND = ID_SND_CLOSE_WND2;
	TFrame::m_dwOPENSND = ID_SND_OPEN_WND2;

	CGDIFont *pGDIFont = FindFont(ID_FONT_LOGIN_BOLD);
#ifdef TEST_MODE
	m_MainGame.m_FontPOS.SetFont(pGDIFont->m_pFont);
	m_MainGame.m_FontTARGET.SetFont(pGDIFont->m_pFont);
#endif
	m_FontLOAD.SetFont(pGDIFont->m_pFont);
	m_FontLOAD.m_dwColor = 0xFFFFFFFF;

	CTClientObjBase::m_pFONT = pGDIFont->m_pFont;
	CTClientObjBase::m_mapTSELECTOBJ.clear();

	CTClientTalkBox::InitTalkBox(
		m_Device.m_pDevice,
		&m_RES);
	CTClientBSP::InitTBSPMAP();


	m_bRelogin = FALSE;

	LoadCustomCompPos();
	CollectResolution(); // 해상도 수집

	if( CTNationOption::MODIFY_DIRECTLOGIN )
	{
		if( m_bDirectLogin )
		{
			TFrame* pSERVER = m_TNet.FindFrame( ID_FRAME_SERVER_NEW);
			TFrame *pLOGIN = m_TNet.FindFrame(ID_FRAME_LOGIN_NEW);
			TComponent *pEditID = pLOGIN->FindKid(ID_CTRLINST_ID);
			TComponent *pEditPW = pLOGIN->FindKid(ID_CTRLINST_PW);
			TComponent *pQuit = pLOGIN->FindKid( ID_CTRLINST_QUIT);
			TComponent *pBack = pSERVER->FindKid(ID_CTRLINST_BACK);
			pBack->m_strText = pQuit->m_strText;
			pBack->m_menu[TNM_LCLICK] = pQuit->m_menu[TNM_LCLICK];
			TComponent *pList = pSERVER->FindKid(ID_CTRLINST_LIST);
			pList->m_menu[TNM_ESC] = pBack->m_menu[TNM_LCLICK];

			if( pEditID )
				pEditID->m_strText = m_strID;
			if( pEditPW )
				pEditPW->m_strText = m_strPW;

			OnGM_LOGIN();
		}
	}

#ifdef USE_GG
	// 게임가드.
	if( theApp.m_pNpgl )
		theApp.m_pNpgl->SetHwnd( GetSafeHwnd() );
#endif

	m_MainGame.m_pMacroProtection = new MacroProtection(&m_MainGame);

	CTGuildMainNew* pDlg = static_cast<CTGuildMainNew*>(m_MainGame.m_vTFRAME[TFRAME_GUILD_BASE_NEW]);
	static_cast<CGuildSkillsDlg*>(pDlg->GetInnerFrame(TGUILD_SKILL))->InitSkill();

	ReleaseTRESIMG();
}

void CTClientWnd::InitCommonConst()
{
	static FLOAT vCONST[16] = {
		1.0f,			//	VC_COMMON
		0.0f,
		0.5f,
		765.005859f,
		0.5f,			//	PC_COMMON
		0.0f,
		256.0f,
		257.0f,
		0.0f,
		1.0f,
		2.0f,
		4.0f};

	m_Device.m_pDevice->SetPixelShaderConstantF(
		m_Device.m_vConstantPS[PC_COMMON],
		&vCONST[4], 2);

	m_Device.m_pDevice->SetVertexShaderConstantF(
		m_Device.m_vConstantVS[VC_COMMON],
		vCONST, 1);
}

void CTClientWnd::InitTexture()
{
	static DWORD dwNPCIconID[] = {
		ID_NPCICON_NONE,					//TNPCICON_NONE
		ID_NPCICON_SKILL,					//TNPCICON_SKILL
		ID_NPCICON_ITEM,					//TNPCICON_ITEM
		ID_NPCICON_REVIVAL,					//TNPCICON_REVIVAL
		ID_NPCICON_PORTAL,					//TNPCICON_PORTAL
		ID_NPCICON_ITEMUP,					//TNPCICON_ITEMUP,
		ID_NPCICON_AUCTION,					//TNPCICON_AUCTION,
		ID_NPCICON_GUILD,					//TNPCICON_GUILD,
		ID_NPCICON_WEAPON,					//TNPCICON_WEAPON,
		ID_NPCICON_ARMOR,					//TNPCICON_ARMOR,
		ID_NPCICON_CASTLE,					//TNPCICON_CASTLE,
		ID_NPCICON_REPAIR,					//TNPCICON_REPAIR,
		ID_NPCICON_ITEMMAKE,				//TNPCICON_ITEMMAKE
		ID_NPCICON_BANK,					//TNPCICON_BANK,
		ID_NPCICON_CASH	};					//TNPCICON_CASH,

	MAPRES::iterator finder = m_RES.m_mapTEX.find(ID_TEX_NOTIFY_MAIL);
	if( finder != m_RES.m_mapTEX.end() )
		CTMainUI::m_pNOTIFYMAIL = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_NUMBER_PANNEL);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientNumber::m_pTEX = (LPTEXTURESET) (*finder).second;

	for( INT i=0; i<TNPCICON_COUNT; i++)
	{
		finder = m_RES.m_mapTEX.find(dwNPCIconID[i]);

		if( finder != m_RES.m_mapTEX.end() )
			CTClientGame::m_vTNPCICON[i] = (LPTEXTURESET) (*finder).second;
		else
			CTClientGame::m_vTNPCICON[i] = NULL;
	}

	finder = m_RES.m_mapTEX.find(ID_RSCS_MASK);
	if( finder != m_RES.m_mapTEX.end() )
		CTRSCSDlg::m_pTMASK = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_PURSUIT_DIR);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTPURSUITDIR = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_NPCICON_PORTAL);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTPORTAL = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_DEAD_DIR);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTDEADDIR = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_DEAD_POS);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTDEAD = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_QUEST_RECV);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTQUESTRECV_O = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_QUEST_COMP);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTQUESTCOMP_O = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_QUEST_RECV_D);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTQUESTRECV_X = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_QUEST_COMP_D);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTQUESTCOMP_X = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_PARTY_POS);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTPARTY = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_PARTY_DIR);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTPARTYDIR = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_POS);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTPOS = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_COMMANDER);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTCOMMANDER = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_SQUAD);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTSQUAD = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_UNIT);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTUNIT = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_MONENEMY);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTMON = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_PCENEMY);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTPC = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_ATTACK);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTCMDATTACK = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_MOVE);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTCMDMOVE = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_PROTECT);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTCMDPROTECT = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_RSCS_ALARM);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTCMDALARM = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_TOWER_ATK);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTGodTower[CAMP_ATTACK] = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_TOWER_DEF);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTGodTower[CAMP_DEFEND] = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_TOWER_NORMAL);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTGodTower[CAMP_NONE] = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_MINIMAP_GODBALL);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientMAP::m_pTSiegeGodBall = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_PCICON_CHIEF);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientGame::m_pTCHIEFICON = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_PCICON_COMMANDER);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientGame::m_pTCOMMANDERICON = (LPTEXTURESET) (*finder).second;

	finder = m_RES.m_mapTEX.find(ID_PCICON_SOULMATE);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientGame::m_pTSOULMATE = (LPTEXTURESET) (*finder).second;





























}

void CTClientWnd::InitUI( BOOL bResetOnlyPosition)
{
	static BOOL bOnce = TRUE;

	static const DWORD dwPosID[][2] = {
		{ 0, 0 }, // NULL
		{ 0, 0 }, // NULL
		{ 0, 0 }, // NULL
		{ 0, 0 }, // NULL
		{ 0, 0 }, // NULL
		{ 0, 0 }, // NULL

		//{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO},		//TFRAME_CHAR_INFO
		//{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO},		//TFRAME_TARGET_INFO
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_DETAIL_INFO},	//TFRAME_DETAIL_INFO
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_DETAIL_INFO},	//TFRAME_CHAT_DETAIL_INFO
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_DETAIL_INFO},	//TFRAME_EQUIP_DETAIL_INFO
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_DETAIL_INFO},	//TFRAME_EQUIP_DETAIL_INFO
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_MONINVEN},		//TFRAME_MONINVEN
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_SHOP
#ifdef MAGICITEMSHOP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_MAGICITEM_SHOP
#endif
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_RENT_SKILL
		//{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_PORTAL_SHOP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_TRADE},		//TFRAME_TRADE
		{ TBASISPOINT_RIGHT_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_SECURITYSYS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},  //OPENBOX
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},
	
#ifdef NEW_IF
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_POTIONS //VALLAH
#endif
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},
		//{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_SALUTATION
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEMCRAFT
		{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_SKILL},			//TFRAME_SKILL
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_NPCDIALOG},			//TFRAME_QUEST
			{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_QUEST_NEWUI
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_NPCDIALOG
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_NPCDIALOG},			//TFRAME_CRAFT
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_MAINFRAME},			//TFRAME_MAIN
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_MAINMENU},		//TFRAME_MAIN_MENU
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_GAUGE },				//TFRAME_GAUGE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SETTING},		//TFRAME_SETTING
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_WORLDMAP},			//TFRAME_WORLDMAP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_UP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_UP_GAUGE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_REPAIR
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_REFINE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_GAMBLE
		{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO},			//TFRAME_COMMUNITY
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_PRIVATE_SELL
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_PRIVATE_BUY
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_MESSENGER
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_BLOCKLIST
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_MAIL
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_MAIL_SEND		
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_MAIL_RECV		
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_MAIL_ASK_MONEY
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_PET_MAKE
		{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO},		//TFRAME_PET_MANAGE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_REGBOX
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_CABINET
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_TITLE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_SOULLOTTERY
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_RANKING_NEW
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_COMPANION
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_CHARINFO_NEW
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_CHARINFO_INNER
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_CHARINFO_PVP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},    //TFRAME_CHARINFO_DUELS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_KEYSETTING
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_SMS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SETTING},		//TFRAME_DONATE_EXP,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SETTING},		//TFRAME_DONATE_MONEY,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_GUILDNOTIFY,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_GUILDMARK,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_GUILDAPP},			//TFRAME_GUILDAPP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_GUILDCMD,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_GUILDCABINET
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_CASHCABINET,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_CASHCHARGE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_PROGRESS_REG
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_WORLDMAP},			//TFRAME_CINEMATIC
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_ITEM_EXTPERIOD
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_DETAIL_NAME
		{ TBASISPOINT_RIGHT_MIDDLE, ID_CTRLINST_HELP},			//TFRAME_HELP		
		//{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_WORLDMAP},			//TFRAME_CASHSHOP_NEW,
		//{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_WORLDMAP},			//TFRAME_CHAR_PVP_INFO,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_MAINMENU},			//TFRAME_GUILDPOINTLOG,
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_MAINMENU},			//TFRAME_GUILDPOINTREWARD,
		{ TBASISPOINT_RIGHT_MIDDLE, ID_CTRLINST_SIEGE_MODE },	//TFRAME_SIEGEUI
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },		//TFRAME_SIEGEEND
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },		//TFRAME_SKYGARDEN
		{ TBASISPOINT_RIGHT_MIDDLE, ID_CTRLINST_SIEGE_MODE },	//TFRAME_SKYGARDEN_MAP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },		//TFRAME_MONSHOP
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_WARN_CASH},			//TFRAME_WARN_NOTUSE_CASHITEM
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_WARN_UPITEM_SELL
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_PORTAL_SHOP_NEW
		{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO },			//TFRAME_AUCTION
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			// TFRAME_BIDON
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_GUILD_REGULAR_OFFER
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_GUILD_TACTICS_OFFER
#ifdef ADD_TEXTOOL
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP },			//TFRAME_TEXTOOL
#endif
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP }, //TFRAME_INVITE_TACTICS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP }, //TFRAME_ITEM_REGGM
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP }, //TFRAME_COLOR_PICKER
		{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO }, //TFRAME_FAME_BASE
		//{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_RANK_INFO
//#ifdef ADD_WEB_CASHSHOP
//		{ TBASISPOINT_LEFT_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_WEB_CASHSHOP
//#endif
#ifdef ADD_TOURNAMENT
	//	{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT_ENTRY
	//	{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT_ENTRY_LIST
	//	{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT_MATCH
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT_EVENT
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_GAUGE}, //TFRAME_TOURNAMENT_GAGE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT_SELECT_TARGET
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_TOURNAMENT_RESULT
#endif
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_WELCOME
#ifdef ADD_RPS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_RPS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_RPS_REWARD
#ifdef ADD_RPS_RL
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_RPS_REWARD_LIST
#endif
#endif
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_AID_COUNTRY
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_SELECT_COUNTRY
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_CHALLENGE_WAITING
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_CHALLENGE_EVENT
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_CHAR_INFO},	//TFRAME_CHALLENGE_ITEM

		{ TBASISPOINT_RIGHT_MIDDLE, ID_CTRLINST_SIEGE_MODE},    //TFRAME_BATTLEINVEN
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_BOW_REGISTER
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_WARN_CASH},    //TFRAME_BOW_WAITING
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},			//TFRAME_BOW_RESPAWN
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},         //TFRAME_BOW_BPTRADE
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},         //TFRAME_BOWRANK
		{ 0, 0}, // TFRAME_PREMIUMSKILLS
		{ 0, 0}, // TFRAME_BOWSKILLS
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP}, // TFRAME_BRTEAMS
		{ TBASISPOINT_LEFT_MIDDLE,   ID_CTRLINST_CHAR_INFO}, //TFRAME_BRPANNELS
		{ TBASISPOINT_RIGHT_MIDDLE,  ID_CTRLINST_HELP },        //TFRAME_BRTRANKING
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP}, //TFRAME_BRRANKING
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP}, //TFRAME_BATTLERANK
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP}, //TFRAME_LOTWIN
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP}, //TFRAME_COMPSTYLE
		{ TBASISPOINT_LEFT_TOP, ID_CTRLINST_SHOP }, //TFRAME_GUILD
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP},	//TFRAME_CUSTOMCLOAK
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP }, //TFRAME_BG_REGISTER
		{ TBASISPOINT_CENTER_MIDDLE, ID_CTRLINST_SHOP } //TFRAME_ARENARANKING
	};

	static const BYTE bEnable[][3] = { // 1.show, 2.enable float, 3.use basis.
		{ 0, 0, 0 }, // NULL
		{ 0, 0, 0 }, // NULL
		{ 0, 0, 0 }, // NULL
		{ 0, 0, 0 }, // NULL
		{ 0, 0, 0 }, // NULL
		{ 0, 0, 0 }, // NULL

		//{ FALSE, TRUE, TRUE},					//TFRAME_CHAR_INFO
		//{ FALSE, TRUE, TRUE},					//TFRAME_TARGET_INFO
		{ FALSE, TRUE, FALSE},					//TFRAME_DETAIL_INFO
		{ FALSE, TRUE, FALSE},					//TFRAME_CHAT_DETAIL_INF
		{ FALSE, TRUE, FALSE},					//TFRAME_EQUIP_DET_INFO
		{ FALSE, TRUE, FALSE},
		{ FALSE, TRUE, TRUE},					//TFRAME_MONINVEN
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_SHOP
#ifdef MAGICITEMSHOP
		{ FALSE, TRUE, TRUE},					//TFRAME_MAGICITEM_SHOP
#endif
		{ FALSE, TRUE, TRUE},					//TFRAME_RENT_SKILL
		//{ FALSE, TRUE, TRUE},					//TFRAME_PORTAL_SHOP
		{ FALSE, TRUE, TRUE},					//TFRAME_TRADE
		{ FALSE, TRUE, TRUE},					//TFRAME_SECURITYSYS
		{ FALSE, TRUE, TRUE},
		{ FALSE, TRUE, TRUE},
		{ FALSE, TRUE, TRUE},
#ifdef NEW_IF
		{ FALSE, FALSE, FALSE},					//TFRAME_POTIONS //VALLAH
#endif
		{ FALSE, TRUE, TRUE},
		//{ FALSE, TRUE, TRUE},					//TFRAME_SALUTATION
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEMCRAFT
		{ FALSE, TRUE, TRUE},					//TFRAME_SKILL
		{ FALSE, TRUE, TRUE},					//TFRAME_QUEST

		{ FALSE, TRUE, TRUE},					//TFRAME_QUEST_NEWUI
		{ FALSE, TRUE, TRUE},					//TFRAME_NPCDIALOG
		{ FALSE, TRUE, TRUE},					//TFRAME_CRAFT
		{ TRUE,  FALSE, FALSE},					//TFRAME_MAIN
		{ FALSE, TRUE, TRUE},					//TFRAME_MAIN_MENU
		{ TRUE,  FALSE, FALSE },				//TFRAME_GAUGE
		{ FALSE, TRUE, TRUE},					//TFRAME_SETTING
		{ FALSE, FALSE, FALSE},					//TFRAME_WORLDMAP
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_UP
		{ FALSE, FALSE, TRUE},					//TFRAME_ITEM_UP_GAUGE
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_REPAIR
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_REFINE
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_GAMBLE
		{ FALSE, TRUE, TRUE},					//TFRAME_COMMUNITY
		{ FALSE, TRUE, TRUE},					//TFRAME_PRIVATE_SELL
		{ FALSE, TRUE, TRUE},					//TFRAME_PRIVATE_BUY
		{ FALSE, TRUE, TRUE},					//TFRAME_MESSENGER
		{ FALSE, TRUE, TRUE},					//TFRAME_BLOCKLIST
		{ FALSE, TRUE, TRUE},					//TFRAME_MAIL
		{ FALSE, TRUE, TRUE},					//TFRAME_MAIL_SEND		
		{ FALSE, TRUE, TRUE},					//TFRAME_MAIL_RECV		
		{ FALSE, TRUE, TRUE},					//TFRAME_MAIL_ASK_MONEY
		{ FALSE, TRUE, TRUE},					//TFRAME_PET_MAKE
		{ FALSE, TRUE, TRUE},					//TFRAME_PET_MANAGE
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_REGBOX
		{ FALSE, TRUE, TRUE},					//TFRAME_CABINET
		{ FALSE, TRUE, TRUE},					//TFRAME_TITLE
		{ FALSE, TRUE, TRUE},					//TFRAME_SOULLOTTERY
		{ FALSE, TRUE, TRUE},					//TFRAME_RANKING_NEW
		{ FALSE, TRUE, TRUE},					//TFRAME_COMPANION
		{ FALSE, FALSE, FALSE},                 //TFRAME_CHARINFO_NEW
        { FALSE, TRUE, TRUE},                   //TFRAME_CHARINFO_INNER
		{ FALSE, FALSE, FALSE},                 //TFRAME_CHARINFO_PVP
		{ FALSE, FALSE, FALSE},                 //TFRAME_CHARINFO_DUELS
		{ FALSE, TRUE, TRUE},					//TFRAME_KEYSETTING
		{ FALSE, TRUE, TRUE},					//TFRAME_SMS
		{ FALSE, TRUE, TRUE},					//TFRAME_DONATE_EXP,
		{ FALSE, TRUE, TRUE},					//TFRAME_DONATE_MONEY,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDNOTIFY,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDMARK,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDAPP
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDCMD,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDCABINET
		{ FALSE, TRUE, TRUE},					//TFRAME_CASHCABINET,
		{ FALSE, FALSE, FALSE},					//TFRAME_CASHCHARGE
		{ FALSE, FALSE, FALSE},					//TFRAME_PROGRESS_REG
		{ FALSE, FALSE, FALSE},					//TFRAME_CINENAMTIC
		{ FALSE, TRUE, TRUE},					//TFRAME_ITEM_EXTPERIOD
		{ FALSE, TRUE, FALSE},					//TFRAME_DETAIL_NAME
		{ FALSE, TRUE, TRUE},					//TFRAME_HELP
		//{ FALSE, TRUE, TRUE},					//TFRAME_CASHSHOP_NEW,
		//{ FALSE, TRUE, TRUE},					//TFRAME_CHAR_PVP_INFO,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDPOINTLOG,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILDPOINTREWARD,
		{ FALSE, TRUE, TRUE},					//TFRAME_SIEGEUI
		{ FALSE, TRUE, TRUE},					//TFRAME_SIEGEEND
		{ FALSE, TRUE, TRUE},					//TFRAME_SKYGARDEN
		{ FALSE, TRUE, TRUE},					//TFRAME_SKYGARDEN_MAP
		{ FALSE, TRUE, TRUE},					//TFRAME_MONSHOP
		{ FALSE, TRUE, TRUE},					//TFRAME_WARN_NOTUSE_CASHITEM
		{ FALSE, TRUE, TRUE},					//TFRAME_WARN_UPITEM_SELL
		{ FALSE, TRUE, TRUE},					//TFRAME_PORTAL_SHOP_NEW
		{ FALSE, TRUE, TRUE},					//TFRAME_AUCTION
		{ FALSE, TRUE, TRUE},					//TFRAME_BIDON
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILD_REGULAR_OFFER,
		{ FALSE, TRUE, TRUE},					//TFRAME_GUILD_TACTICS_OFFER,
#ifdef ADD_TEXTOOL
		{ FALSE, TRUE, TRUE},					//TFRAME_TEXTOOL,
#endif
		{ FALSE, TRUE, TRUE}, //TFRAME_INVITE_TACTICS
		{ FALSE, TRUE, TRUE}, //TFRAME_ITEM_REGGM
		{ FALSE, TRUE, TRUE}, //TFRAME_COLOR_PICKER
		{ FALSE, TRUE, TRUE},					//TFRAME_FAME_BASE
		//{ FALSE, TRUE, TRUE},					//TFRAME_RANK_INFO
//#ifdef ADD_WEB_CASHSHOP
//		{ FALSE, TRUE, TRUE },					//TFRAME_WEB_CASHSHOP
//#endif
#ifdef ADD_TOURNAMENT
		//{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_ENTRY
		//{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_ENTRY_LIST
		//{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_MATCH
		{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_EVENT
		{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_GAGE
		{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_SELECT_TARGET
		{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT
		{ FALSE, TRUE, TRUE}, // TFRAME_TOURNAMENT_RESULT
#endif
		{ FALSE, FALSE, FALSE}, // TFRAME_WELCOME
#ifdef ADD_RPS
		{ FALSE, FALSE, FALSE}, // TFRAME_RPS
		{ FALSE, TRUE, TRUE}, // TFRAME_RPS_REWARD
#ifdef ADD_RPS_RL
		{ FALSE, TRUE, TRUE}, // TFRAME_RPS_REWARD_LIST
#endif
#endif
		{ FALSE, TRUE, TRUE}, // TFRAME_AID_COUNTRY
		{ FALSE, TRUE, TRUE}, // TFRAME_SELECT_COUNTRY
		{ FALSE, TRUE, TRUE}, // TFRAME_CHALLENGE_WAITING
		{ FALSE, TRUE, TRUE}, // TFRAME_CHALLENGE_EVENT
		{ FALSE, TRUE, TRUE}, // TFRAME_CHALLENGE_ITEM
	{ FALSE, TRUE, TRUE},
		{ FALSE, TRUE, TRUE}, // TFRAME_BOW_REGISTER
		{ FALSE, TRUE, TRUE}, // TFRAME_BOW_WAITING
		{ FALSE, TRUE, TRUE}, // TFRAME_BOW_RESPAWN
		{ FALSE, TRUE, TRUE}, // TFRAME_BOW_BPTRADE
		{ FALSE, TRUE, TRUE}, // TFRAME_BOWRANK
		{ FALSE, FALSE, FALSE}, // TFRAME_PREMIUMSKILLS
		{ FALSE, FALSE, FALSE}, // TFRAME_BOWSKILLS
		{ FALSE, TRUE, TRUE}, //TFRAME_BRTEAMS
		{ FALSE, TRUE, TRUE}, //TFRAME_BRPANNELS
		{ FALSE, TRUE, TRUE}, //TFRAME_BRTRANKING
		{ FALSE, TRUE, TRUE}, //TFRAME_BRRANKING
		{ FALSE, TRUE, TRUE}, //TFRAME_BATTLERANK
		{ FALSE, TRUE, TRUE}, //TFRAME_LOTWIN
		{ FALSE, TRUE, TRUE}, //TFRAME_COMPSTYLE
		{ FALSE, TRUE, TRUE }, //TFRAME_GUILDNEW
		{ FALSE, TRUE, TRUE},//TFRAME_CUSTOMCLOAK 
		{ FALSE, TRUE, TRUE }, //TFRAME_BG_REGISTER
		{ FALSE, TRUE, TRUE } //TFRAME_ARENARANKING
	};

	CTPremiumSkills* PremiumSkills[PREMIUMSKILL_COUNT] = {NULL};
	for (BYTE i = PREMIUMSKILL_BOW; i < PREMIUMSKILL_COUNT; ++i)
		PremiumSkills[i] = m_MainGame.GetPremiumSkillsFrame(i);

	for (BYTE i = 0; i < PREMIUM_SKILLS; ++i)
	{

		PremiumSkills[PREMIUMSKILL_NORMAL]->AddSkill(i, m_MainGame.m_wPremiumSkills[i]);
	}

	for (BYTE i = PREMIUMSKILL_BOW; i < PREMIUMSKILL_COUNT; ++i)
	{
		//PremiumSkills[i]->Init();
		PremiumSkills[i]->ShowComponent(TRUE);
		PremiumSkills[i]->ResetHotkeyStr();
	}

	if (!m_pPosFrame)
		m_pPosFrame = m_pTParser->FindFrameTemplate(ID_FRAME_POS);

	TFrame vTPOS( NULL, m_pPosFrame);

	for (int i = 0; i < TFRAME_COUNT; i++)
		if (m_MainGame.m_vTFRAME[i])
		{
			TComponent *pTPOS = vTPOS.FindKid(dwPosID[i][1]);
			if (pTPOS == NULL)
				continue;



			m_MainGame.m_vTFRAME[i]->m_bBasisPoint = BYTE(dwPosID[i][0]);
			m_MainGame.m_vTFRAME[i]->m_bUseBasis = bEnable[i][2];

			CRect rect;
			pTPOS->GetComponentRect(&rect);

			m_MainGame.m_vTFRAME[i]->m_vCompOffset = rect.TopLeft() - CTClientUIBase::m_vDefaultBASIS[dwPosID[i][0]];

			if (bOnce || bResetOnlyPosition)
				m_MainGame.m_vTFRAME[i]->DefaultPosition(CTClientUIBase::m_vDefaultBASIS, bResetOnlyPosition);

			if (i != TFRAME_BATTLEINVEN)
				m_MainGame.m_vTFRAME[i]->ResetPosition();

			if (!bResetOnlyPosition)
				m_MainGame.m_vTFRAME[i]->ShowComponent(bEnable[i][0]);

			m_MainGame.m_vTFRAME[i]->EnableFloat(bEnable[i][1]);

		}


	m_MainGame.m_pChatFrame->ResetChatList();
	m_MainGame.m_pChatFrame->ResetChatMsg(FALSE);

	if( CTNationOption::GERMANY || CTNationOption::JAPAN || CTNationOption::FRANCE || 
		CTNationOption::TAIWAN || CTNationOption::POLAND || CTNationOption::CZECH || 
		CTNationOption::ITALY || CTNationOption::SPAIN || CTNationOption::UNITEDKINGDOM ||
        CTNationOption::GREECE || CTNationOption::RUSSIA || CTNationOption::ROMANIA ||
		CTNationOption::UNITEDSTATE || CTNationOption::HUNGARY || CTNationOption::TURKEY ||
		CTNationOption::PORTUGAL )
	{
		m_MainGame.m_pChatFrame->SetChatMode(CHAT_NEAR);
#ifndef NEW_IF
		m_MainGame.m_pChatFrame->ChangeSelection(TCHAT_SET_NORMAL);
#endif
	}
	else
	{
		m_MainGame.m_pChatFrame->SetChatMode(CHAT_MAP);
	}

	m_MainGame.m_pChatFrame->ShowComponent(FALSE);
	m_MainGame.m_pActListPopup->ShowComponent(FALSE);
	m_MainGame.m_pCommandsPopup->ShowComponent(FALSE);

	CTMainUI* pMainUI =  static_cast<CTMainUI*>(m_MainGame.m_vTFRAME[TFRAME_MAIN]);
	CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
	pMainUI->m_bCashMenu = FALSE;
	pMainUI->ResetCashMenu();
	pTGaugePannel->ResetHotkeyStr();

	pMainUI->m_pTCHAPTERMSG->ShowComponent(FALSE);
	pMainUI->m_pTREGIONMSG->ShowComponent(FALSE);
	pMainUI->m_pTQUESTMSG->ShowComponent(FALSE);
	
	CTCustomCloakDlg* pDlgCustomCloak = static_cast<CTCustomCloakDlg*>(m_MainGame.m_vTFRAME[TFRAME_CUSTOMCLOAK]);
	pDlgCustomCloak->ResetCHAR();

	static_cast<CTCharNewDlg*>(m_MainGame.m_vTFRAME[TFRAME_CHARINFO_NEW])->ResetCHAR();
	static_cast<CTItemUpDlg*>(m_MainGame.m_vTFRAME[TFRAME_ITEM_UP])->ShowComponent(FALSE);
	static_cast<CTItemUpGaugeDlg*>(m_MainGame.m_vTFRAME[TFRAME_ITEM_UP_GAUGE])->ShowComponent(FALSE);
	static_cast<CTPetManageDlg*>(m_MainGame.m_vTFRAME[TFRAME_PET_MANAGE])->SetRecalling(FALSE);

#ifdef NEW_IF
	pTGaugePannel->m_pPopupMenu->ShowComponent(FALSE);
#endif
	
	static_cast<CTCabinetDlg*>(m_MainGame.m_vTFRAME[TFRAME_CABINET])->Initial();
	static_cast<CTCabinetDlg*>(m_MainGame.m_vTFRAME[TFRAME_GUILDCABINET])->Initial();
	static_cast<CTCabinetDlg*>(m_MainGame.m_vTFRAME[TFRAME_CASHCABINET])->Initial();

	CTMailSendDlg* pSndMailDlg = static_cast<CTMailSendDlg*>(m_MainGame.m_vTFRAME[TFRAME_MAIL_SEND]);
	pSndMailDlg->SetReceiver("");
	pSndMailDlg->SetTitle("");

	m_MainGame.m_vTFRAME[TFRAME_MONINVEN]->m_bDropTarget = FALSE;
	if( !bResetOnlyPosition)
	{
		m_TNet.ChangeBACK( ID_FRAME_LOGIN_NEW );
	}

	CBRPannels* pPannels = static_cast<CBRPannels*>(m_MainGame.m_vTFRAME[TFRAME_BRPANNELS]);
	CPoint pt = CTClientUIBase::m_vBasis[TBASISPOINT_LEFT_TOP];
	pt.x += 45;
	pt.y += 190;

	pPannels->MoveComponent(pt);
	
	m_MainGame.m_pTPOPUP->ShowComponent(FALSE);
	m_MainGame.m_pTPOPUP->EnableFloat(FALSE);

	m_MainGame.m_pChannelPOPUP->ShowComponent(FALSE);
	m_MainGame.m_pUBarPopup->ShowComponent(FALSE);
	m_MainGame.m_pChannelPOPUP->EnableFloat(FALSE);
	m_strLOADMSG.Empty();

	CTClientUIBase::m_bDragLock = TRUE;
	m_MainGame.m_pChatFrame->SetLock(TRUE);
	m_MainGame.m_pChatFrame->ResetTick();
#ifdef NEW_IF
#else
	m_MainGame.m_pLockButton->Select(TRUE);
#endif

	CTPartyItemLottery::DeleteAllInstance();
	CTMessengerChat::DeleteAllInstance();

	CD3DSound::ResetLISTENER(
		&D3DXVECTOR3( 0.0f, 0.0f, 0.0f),
		&D3DXVECTOR3( 0.0f, 0.0f, 1.0f),
		&D3DXVECTOR3( 0.0f, 1.0f, 0.0f));

	static_cast<CTSecuritySystemDlg*>(m_MainGame.GetFrame(TFRAME_SECURITYSYS))->MoveComponent(CPoint(CTClientUIBase::m_vBasis[TBASISPOINT_RIGHT_MIDDLE].x - 324, CTClientUIBase::m_vBasis[TBASISPOINT_RIGHT_MIDDLE].y - 350 / 2));

	static const DWORD dwInvenPosID[][3] = {
		{ TFRAME_INVEN_1, ID_CTRLINST_INVEN_1, TBASISPOINT_RIGHT_BOTTOM}, //TFRAME_INVEN_1
		{ TFRAME_INVEN_2, ID_CTRLINST_INVEN_2, TBASISPOINT_RIGHT_BOTTOM}, //TFRAME_INVEN_2
		{ TFRAME_INVEN_3, ID_CTRLINST_INVEN_3, TBASISPOINT_RIGHT_BOTTOM}, //TFRAME_INVEN_3
		{ TFRAME_INVEN_4, ID_CTRLINST_INVEN_4, TBASISPOINT_RIGHT_BOTTOM}, //TFRAME_INVEN_4
		{ TFRAME_INVEN_5, ID_CTRLINST_INVEN_5, TBASISPOINT_RIGHT_BOTTOM}, //TFRAME_INVEN_5
		{ TFRAME_DEFINVEN, ID_CTRLINST_DEFINVEN, TBASISPOINT_RIGHT_BOTTOM }, //TFRAME_DEFINVEN
	};

	static const BYTE bInvenEnable[][3] = {
		{ FALSE, TRUE, TRUE},					//TFRAME_INVEN_1
		{ FALSE, TRUE, TRUE},					//TFRAME_INVEN_2
		{ FALSE, TRUE, TRUE},					//TFRAME_INVEN_3
		{ FALSE, TRUE, TRUE},					//TFRAME_INVEN_4
		{ FALSE, TRUE, TRUE},					//TFRAME_INVEN_5
		{ FALSE, TRUE, TRUE},					//TFRAME_DEFINVEN
	};

	if( bOnce || bResetOnlyPosition )
	{
		for( INT i=0 ; i < 6 ; ++i )
		{
			TComponent *pTPOS = vTPOS.FindKid( dwInvenPosID[i][1] );
			if( pTPOS == NULL )
				continue;

			if( m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ] == NULL )
				continue;

			m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->m_bBasisPoint = BYTE(dwInvenPosID[i][2]);
			m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->m_bUseBasis = bInvenEnable[i][2];

			CRect rect;
			pTPOS->GetComponentRect(&rect);

			m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->m_vCompOffset =
				rect.TopLeft() - CTClientUIBase::m_vDefaultBASIS[ dwInvenPosID[i][2] ];

			m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->DefaultPosition(
				CTClientUIBase::m_vDefaultBASIS,
				bResetOnlyPosition);

			m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->ResetPosition();

			if(!bResetOnlyPosition)
				m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->ShowComponent( bInvenEnable[i][0] );

			m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->EnableFloat( bInvenEnable[i][1] );
		}

		if (m_MainGame.m_vTFRAME[TFRAME_BATTLEINVEN])
		{
			CPoint pt = CTClientUIBase::m_vBasis[TBASISPOINT_RIGHT_BOTTOM];
			pt.x -= 280;
			pt.y -= 365;
			m_MainGame.m_vTFRAME[TFRAME_BATTLEINVEN]->MoveComponent(pt);
		}

		for(auto i=0; i<MAX_SUBINVEN; i++)
		{
			TComponent *pTPOS = vTPOS.FindKid( dwInvenPosID[i][1] );

			CRect rect;
			pTPOS->GetComponentRect(&rect);

			CTInvenDlg::m_vSubInvenPos[ i ].m_vOffset =
				rect.TopLeft() - CTClientUIBase::m_vDefaultBASIS[dwInvenPosID[i][2]];
			CTInvenDlg::m_vSubInvenPos[ i ].m_bBasisPoint = BYTE(dwInvenPosID[i][2]);
			CTInvenDlg::m_vSubInvenPos[ i ].m_dwFRAME = dwInvenPosID[i][0];
		}
	}
	else
	{
		for( INT i=0 ; i < 6 ; ++i )
		{
			if( m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ] )
			{
				m_MainGame.m_vTFRAME[ dwInvenPosID[i][0] ]->ShowComponent( bInvenEnable[i][0] );
			}
		}
	}

	if (!bResetOnlyPosition)
		pTGaugePannel->NotifyFrameStaticMoveReset(CTClientGame::m_vTOPTION.m_bAutoHelp);
	else if (bResetOnlyPosition)
		pTGaugePannel->NotifyFrameStaticMove(CTClientGame::m_vTOPTION.m_bAutoHelp);

	bOnce = FALSE;
}

void CTClientWnd::SaveCustomCompPos()
{
	CString strKEY;
	BYTE basispoint;
	CPoint offset;
/*
#ifdef NEW_IF
	CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);

	if(m_MainGame.m_vTOPTION.m_bAutoHelp)
		pTGaugePannel->NotifyFrameStaticMove(FALSE);
	
#endif
*/
	{
		basispoint = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_PLAYER]->m_bBasisPoint;
		offset = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_PLAYER]->m_vCompOffset;
        
		strKEY = CString(TREG_CUSTOMUI_MY_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_MY_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_MY_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		basispoint = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_TARGET]->m_bBasisPoint;
		offset = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_TARGET]->m_vCompOffset;

		strKEY = CString(TREG_CUSTOMUI_TARGET_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_TARGET_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_TARGET_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		basispoint = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_SUMMON]->m_bBasisPoint;
		offset = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_SUMMON]->m_vCompOffset;

		strKEY = CString(TREG_CUSTOMUI_RECALL_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_RECALL_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_RECALL_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		basispoint = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_PARTY]->m_bBasisPoint;
		offset = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_PARTY]->m_vCompOffset;

		strKEY = CString(TREG_CUSTOMUI_PARTY_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_PARTY_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_PARTY_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);

		basispoint = pTGaugePannel->m_pTHOTKEYFRM[THOTKEYBASE_DEF]->m_bBasisPoint;
		offset = pTGaugePannel->m_pTHOTKEYFRM[THOTKEYBASE_DEF]->m_vCompOffset;

		strKEY = CString(TREG_CUSTOMUI_HOTKEY) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);

		basispoint = pTGaugePannel->m_pTHOTKEYFRM[THOTKEYBASE_SUB1]->m_bBasisPoint;
		offset = pTGaugePannel->m_pTHOTKEYFRM[THOTKEYBASE_SUB1]->m_vCompOffset;

		strKEY = CString(TREG_CUSTOMUI_HOTKEY_SUB1) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY_SUB1) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);
	
		strKEY = CString(TREG_CUSTOMUI_HOTKEY_SUB1) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);

		basispoint = pTGaugePannel->m_pTRECALLFRM->m_bBasisPoint;
		offset = pTGaugePannel->m_pTRECALLFRM->m_vCompOffset;
	
		strKEY = CString(TREG_CUSTOMUI_RECALLAI) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_RECALLAI) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_RECALLAI) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
#ifdef NEW_IF
		CTClientUIBase* pFRAME = (CTClientUIBase*) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_FRAME_MINIMAP_NEW);
#else
		CTClientUIBase* pFRAME = (CTClientUIBase*) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_FRAME_MINIMAP);
#endif
		basispoint = pFRAME->m_bBasisPoint;
		offset = pFRAME->m_vCompOffset;
	
		strKEY = CString("Minimap") + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString("Minimap") + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString("Minimap") + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

#ifdef NEW_IF
#else
	{
		basispoint = m_MainGame.m_pNotifyFrame->m_bBasisPoint;
		offset = m_MainGame.m_pNotifyFrame->m_vCompOffset;
	
		strKEY = CString(TREG_CUSTOMUI_NOTIFY) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_NOTIFY) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_NOTIFY) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}
#endif


	{
		basispoint = m_MainGame.m_vTFRAME[TFRAME_QUEST]->m_bBasisPoint;
		offset = m_MainGame.m_vTFRAME[TFRAME_QUEST]->m_vCompOffset;
	
		strKEY = CString(TREG_CUSTOMUI_QUEST) + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = CString(TREG_CUSTOMUI_QUEST) + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = CString(TREG_CUSTOMUI_QUEST) + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	{
		if(m_MainGame.m_vTFRAME[TFRAME_DEFINVEN])
		{
			basispoint = m_MainGame.m_vTFRAME[ TFRAME_DEFINVEN ]->m_bBasisPoint;
			offset = m_MainGame.m_vTFRAME[ TFRAME_DEFINVEN ]->m_vCompOffset;




			strKEY = CString(TREG_CUSTOMUI_DEFINVEN) + CString(TREG_CUSTOMUI_POS_X);
			theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

			strKEY = CString(TREG_CUSTOMUI_DEFINVEN) + CString(TREG_CUSTOMUI_POS_Y);
			theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

			strKEY = CString(TREG_CUSTOMUI_DEFINVEN) + CString(TREG_CUSTOMUI_BASIS);
			theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
		}
	}

	for( INT i=0 ; i < MAX_SUBINVEN ; ++i )
	{
		basispoint = CTInvenDlg::m_vSubInvenPos[ i ].m_bBasisPoint;
		offset = CTInvenDlg::m_vSubInvenPos[ i ].m_vOffset;

		CString strFMT;
		strFMT.Format( TREG_CUSTOMUI_SUBINVEN, i );
	
		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);

		strKEY = strFMT + CString(TREG_CUSTOMUI_BASIS);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, basispoint );
	}

	CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
	CTUtilityBarDlg* pUB = pTGaugePannel->m_pUtility; //there is actually like 1000� at least probably more
	if (pUB)
	{
		pUB->GetComponentPos(&offset);

		CString strFMT;
		strFMT = "UtilityBar";
	
		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_X);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.x);

		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_Y);
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), strKEY, offset.y);
	}



	m_MainGame.m_pChatFrame->SaveSetting();
}

void CTClientWnd::LoadCustomCompPos()
{
	DWORD dwResetIdentity = theApp.GetProfileInt( _T(TREG_CUSTOMUI), _T(TREG_CUSTOMUI_RESET), 0);
	BOOL bReset = dwResetIdentity == TREG_CUSTOM_UI_RESET_IDENTITY ? FALSE : TRUE;

	CString strKEY;
	CPoint point;
	CRect rect;
	CPoint offset;
	BYTE basispoint;

	m_MainGame.m_pChatFrame->LoadSetting(bReset);
	if(bReset)
	{
		theApp.WriteProfileInt( _T(TREG_CUSTOMUI), _T(TREG_CUSTOMUI_RESET), TREG_CUSTOM_UI_RESET_IDENTITY);
		return;
	}

	{
		strKEY = CString(TREG_CUSTOMUI_MY_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_MY_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_MY_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTClientUIBase* pFRAME = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_PLAYER];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString(TREG_CUSTOMUI_TARGET_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_TARGET_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_TARGET_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTClientUIBase* pFRAME = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_TARGET];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString(TREG_CUSTOMUI_RECALL_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_RECALL_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_RECALL_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTClientUIBase* pFRAME = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_SUMMON];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString(TREG_CUSTOMUI_PARTY_GAUGE) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_PARTY_GAUGE) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_PARTY_GAUGE) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTClientUIBase* pFRAME = m_MainGame.m_vTGAUGEFRAME[TGAUGE_FRAME_PARTY];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString(TREG_CUSTOMUI_HOTKEY) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
			CTClientUIBase* pFRAME = pTGaugePannel->m_pTHOTKEYFRM[THOTKEYBASE_DEF];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString(TREG_CUSTOMUI_HOTKEY_SUB1) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY_SUB1) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_HOTKEY_SUB1) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
			CTClientUIBase* pFRAME = pTGaugePannel->m_pTHOTKEYFRM[THOTKEYBASE_SUB1];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString(TREG_CUSTOMUI_RECALLAI) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_RECALLAI) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_RECALLAI) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
			CTClientUIBase* pFRAME = pTGaugePannel->m_pTRECALLFRM;
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

	{
		strKEY = CString("Minimap") + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString("Minimap") + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString("Minimap") + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
#ifdef NEW_IF
			CTClientUIBase* pFRAME = (CTClientUIBase*) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_FRAME_MINIMAP_NEW);
#else
			CTClientUIBase* pFRAME = (CTClientUIBase*) m_MainGame.m_vTFRAME[TFRAME_GAUGE]->FindKid(ID_FRAME_MINIMAP);
#endif
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}

#ifdef NEW_IF
#else
	{
		strKEY = CString(TREG_CUSTOMUI_NOTIFY) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_NOTIFY) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_NOTIFY) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
		{
			CTClientUIBase* pFRAME = m_MainGame.m_pNotifyFrame;
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();
		}
	}
#endif

	

	{
		strKEY = CString(TREG_CUSTOMUI_QUEST) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_QUEST) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = CString(TREG_CUSTOMUI_QUEST) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( offset.x != T_INVALID &&
			offset.y != T_INVALID &&
			basispoint != 0xFF )
			CTNewQuestDlg::m_ptPOS = CTClientUIBase::m_vBasis[ basispoint ] + offset;
	}

	{
		strKEY = CString(TREG_CUSTOMUI_DEFINVEN) + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0);

		strKEY = CString(TREG_CUSTOMUI_DEFINVEN) + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0);

		strKEY = CString(TREG_CUSTOMUI_DEFINVEN) + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( basispoint != 0xFF )
		{
						CTClientUIBase* pFRAME = m_MainGame.m_vTFRAME[TFRAME_DEFINVEN];
			pFRAME->m_bBasisPoint = basispoint;
			pFRAME->m_vCompOffset = offset;
			pFRAME->ResetPosition();

			CTInvenDlg::m_pDefInven.m_bBasisPoint = basispoint;
			CTInvenDlg::m_pDefInven.m_vOffset = offset;
		}
	}

	static DWORD dwSubInven[ MAX_SUBINVEN ] = 
	{
		TFRAME_INVEN_1,
		TFRAME_INVEN_2,
		TFRAME_INVEN_3,
		TFRAME_INVEN_4,
		TFRAME_INVEN_5
	};

	for( INT i=0 ; i < MAX_SUBINVEN ; ++i )
	{
		CString strFMT;
		strFMT.Format( TREG_CUSTOMUI_SUBINVEN, i );

		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0);

		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0);

		strKEY = strFMT + CString(TREG_CUSTOMUI_BASIS);
		basispoint = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, 0xFF);

		if( basispoint != 0xFF )
		{
			CTInvenDlg::m_vSubInvenPos[ i ].m_bBasisPoint = basispoint;
			CTInvenDlg::m_vSubInvenPos[ i ].m_vOffset = offset;

			CTClientUIBase* pFRAME = m_MainGame.m_vTFRAME[ dwSubInven[i] ];

			if( pFRAME )
			{
				pFRAME->m_bBasisPoint = basispoint;
				pFRAME->m_vCompOffset = offset;
				pFRAME->ResetPosition();
			}
		}
	}

	CTGaugePannel* pTGaugePannel = static_cast<CTGaugePannel*>(m_MainGame.m_vTFRAME[TFRAME_GAUGE]);
	CTUtilityBarDlg* pUB = pTGaugePannel->m_pUtility; //there is actually like 1000� at least probably more
	if (pUB)
	{
		CString strFMT;
		strFMT = "UtilityBar";

		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_X);
		offset.x = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		strKEY = strFMT + CString(TREG_CUSTOMUI_POS_Y);
		offset.y = theApp.GetProfileInt( _T(TREG_CUSTOMUI), strKEY, T_INVALID);

		if (offset.x != T_INVALID && offset.y != T_INVALID)
			pUB->MoveComponent(offset);
	}
}

#ifdef MODIFY_LOADING
void CTClientWnd::ReleaseTRESIMG()
{
	while(!CTachyonRes::m_vTLOADINGSCENE.empty())
	{
		delete CTachyonRes::m_vTLOADINGSCENE.back();
		CTachyonRes::m_vTLOADINGSCENE.pop_back();
	}

	CTachyonRes::m_vTEXT.Release();
	CTachyonRes::m_vFONT.DeleteObject();
}
#else
void CTClientWnd::ReleaseTRESIMG()
{
	while(!CTachyonRes::m_vBACKIMG.empty())
	{
		delete CTachyonRes::m_vBACKIMG.back();
		CTachyonRes::m_vBACKIMG.pop_back();
	}

	CTachyonRes::m_vGAUGE.Release();
	CTachyonRes::m_vTEXT.Release();
	CTachyonRes::m_vFONT.DeleteObject();
}
#endif

void CTClientWnd::ReleaseTCUSTOMCLOAKTEX()
{
	MAPTCUSTOMCLOAKTEX::iterator it;
	
	for(it = CTClientCustomCloak::m_mapTCUSTOMCLOAKTEX.begin(); it != CTClientCustomCloak::m_mapTCUSTOMCLOAKTEX.end(); ++it)
	{
		delete (*it).second;
		CTClientCustomCloak::m_mapTCUSTOMCLOAKTEX.erase(it);
	}		
	CTClientCustomCloak::m_mapTCUSTOMCLOAKTEX.clear();
}

void CTClientWnd::ReleaseTexture()
{
	CTClientNumber::m_pTEX = NULL;

	CTMinimapDlg::m_pTMASK = NULL;
	CTRSCSDlg::m_pTMASK = NULL;

	CTClientMAP::m_pTPURSUITDIR = NULL;
	CTClientMAP::m_pTDEADDIR = NULL;
	CTClientMAP::m_pTDEAD = NULL;
	CTClientMAP::m_pTPOS = NULL;

	CTClientMAP::m_pTCOMMANDER = NULL;
	CTClientMAP::m_pTSQUAD = NULL;
	CTClientMAP::m_pTUNIT = NULL;
	CTClientMAP::m_pTMON = NULL;
	CTClientMAP::m_pTPC = NULL;

	CTClientMAP::m_pTCMDATTACK = NULL;
	CTClientMAP::m_pTCMDMOVE = NULL;
	CTClientMAP::m_pTCMDPROTECT = NULL;
	CTClientMAP::m_pTCMDALARM = NULL;

	if(CTMinimapDlg::m_pTMINIMAP)
	{
		CTMinimapDlg::m_pTMINIMAP->Release();
		CTMinimapDlg::m_pTMINIMAP = NULL;
	}

	if(CTRSCSDlg::m_pTBACK)
	{
		CTRSCSDlg::m_pTBACK->Release();
		CTRSCSDlg::m_pTBACK = NULL;
	}

	if(CTRSCSDlg::m_pTRSCS)
	{
		CTRSCSDlg::m_pTRSCS->Release();
		CTRSCSDlg::m_pTRSCS = NULL;
	}

	CTClientGuildMark::ReleaseTMantleBakingTexture();
}

void CTClientWnd::ReleaseTRECTVB()
{
	CTClientGame::m_vTRECTVB.ReleaseDATA();
	CTClientGame::m_pTGROUNDTEX = NULL;
}

void CTClientWnd::LoadImageFile( const CString& strFILE, CT3DImage* pT3DIMG)
{
	CFile vFILE;

	if(vFILE.Open( strFILE, CFile::modeRead|CFile::typeBinary))
	{
		DWORD dwSIZE = DWORD(vFILE.GetLength());

		if(dwSIZE)
		{
			LPBYTE pDATA = new BYTE[dwSIZE];

			vFILE.Read( pDATA, dwSIZE);
			pT3DIMG->LoadT3DIMG(
				pDATA,
				dwSIZE);

			delete[] pDATA;
		}
	}
}

void CTClientWnd::SetMainFrame( TFrame *pFrame)
{
	if( m_pMainFrame == &m_TNet && pFrame != &m_TNet )
		m_TNet.ResetWndAni();

	m_pMainFrame = pFrame;

	if( CTNationOption::JAPAN_IME || CTNationOption::TAIWAN_IME )
	{
		if( m_pMainFrame )
		{
			TCandidate* pCandidate = (TCandidate*) m_pMainFrame->FindKid( ID_FRAME_CANDIDATE);
			TEdit::m_pCandidate = pCandidate;

			if( TEdit::m_pCandidate )
				TEdit::m_pCandidate->ResetCandidateChar();
		}
	}
}

TFrame* CTClientWnd::GetMainFrame()
{
	return m_pMainFrame;
}

#ifdef MODIFY_LOADING
void CTClientWnd::InitTRESIMG()
{
	static const CString INTRO_PATH		= ".\\Intro\\";
	static const CString INTRO_LIST		= "Intro.cfg";

	static const CString SEPARATORS		= "\t:=";
	
	static const CString VAR_GAUGE		= "gauge";
	static const CString VAR_GAUGE_X	= "gauge_x";
	static const CString VAR_GAUGE_Y	= "gauge_y";
	static const CString VAR_IMAGE		= "image";

	static const CString VAR_TEXT_X		= "text_x";
	static const CString VAR_TEXT_Y		= "text_y";

	static const CString VAR_FADEIN_TIME = "fade_in";
	static const CString VAR_FADEOUT_TIME = "fade_out";
	static const CString VAR_KEEP_TIME = "keep";
	static const CString VAR_SCENE_START = "scene_start";
	static const CString VAR_SCENE_END = "scene_end";
	static const CString VAR_SHOWBAR = "show_bar";
	static const CString VAR_COLOR = "color";
	static const CString VAR_REALTIME = "realtime";
	
	ReleaseTRESIMG();

	float fScaleX = (float)m_Device.m_option.m_dwScreenX / (float)TBASE_SCREEN_X;
	float fScaleY = (float)m_Device.m_option.m_dwScreenY / (float)TBASE_SCREEN_Y;

	FILE *fpLIST;
	char rec[MAX_PATH], *ret;
	CString optName, optVal;
	
	fpLIST = fopen(INTRO_PATH+INTRO_LIST, "r");
	if( !fpLIST )
		return;

	BOOL bSceneStart = FALSE;
	LPTLOADINGSCENE pLoadingScene = NULL;

	ret = fgets(rec, MAX_PATH, fpLIST);
	while( ret != NULL )
	{
		CString tst = rec;
		tst.Trim();
		
		if( tst.GetLength() > 0 && tst.GetAt(0) != ';' && tst.GetAt(0) != '\n')
		{
			CString optName(strtok(rec, SEPARATORS));
			CString optVal(strtok(NULL, "\n"));
			if( !optName.IsEmpty() )
			{
				optName.Trim();
				optVal.Trim();

				if( !bSceneStart && optName == VAR_SCENE_START )
				{
					bSceneStart = TRUE;
					pLoadingScene = new TLOADINGSCENE;
					if( pLoadingScene )
						ZeroMemory( pLoadingScene, sizeof(TLOADINGSCENE) );
				}
				else if( optName == VAR_COLOR )
				{
					INT n=0;
					CString str;

					str = optVal.Tokenize( " ", n);	
					BYTE bR = atoi( str );
					str = optVal.Tokenize( " ", n);
					BYTE bG = atoi( str );
					str = optVal.Tokenize( " ", n);
					BYTE bB = atoi( str );

					CTachyonRes::m_dwBackColor = D3DCOLOR_XRGB(bR, bG, bB );
				}
				else if( bSceneStart && pLoadingScene )
				{
					if( optName == VAR_GAUGE_X )
					{
						pLoadingScene->m_nGaugeX = atoi(optVal);
						pLoadingScene->m_nGaugeX -= (1024 / 2);
					}
					else if( optName == VAR_GAUGE_Y )
					{
						pLoadingScene->m_nGaugeY = atoi(optVal);
						pLoadingScene->m_nGaugeY -= (768 / 2);
					}
					else if( optName == VAR_TEXT_X )
					{
						pLoadingScene->m_nTextX = atoi(optVal);
						pLoadingScene->m_nTextX -= (1024 / 2);
					}
					else if( optName == VAR_TEXT_Y )
					{
						pLoadingScene->m_nTextY = atoi(optVal);
						pLoadingScene->m_nTextY -= (768 / 2);
					}
					else if( optName == VAR_GAUGE )
					{
						LoadImageFile( INTRO_PATH + optVal, &pLoadingScene->m_vGAUGE);
					}
					else if( optName == VAR_IMAGE )
					{
						LoadImageFile( INTRO_PATH + optVal, &pLoadingScene->m_vIMG);
					}
					else if( optName == VAR_FADEIN_TIME )
					{
						pLoadingScene->m_nFadeInTime = atoi(optVal);
					}
					else if( optName == VAR_FADEOUT_TIME )
					{
						pLoadingScene->m_nFadeOutTime = atoi(optVal);
					}
					else if( optName == VAR_KEEP_TIME )
					{
						pLoadingScene->m_nKeepTime = atoi(optVal);
					}
					else if( optName == VAR_SHOWBAR )
					{
						pLoadingScene->m_bShowBar = atoi(optVal);
					}
					else if( optName == VAR_REALTIME )
					{
						pLoadingScene->m_bRealTime = atoi(optVal);
					}
					else if( optName == VAR_SCENE_END )
					{
						pLoadingScene->m_nSeq = (INT) CTachyonRes::m_vTLOADINGSCENE.size();
						CTachyonRes::m_vTLOADINGSCENE.push_back( pLoadingScene);
						bSceneStart = FALSE;
						pLoadingScene = NULL;
					}
				}
			}
		}

		ret = fgets(rec, MAX_PATH, fpLIST);
	}

	fclose(fpLIST);

	CTachyonRes::m_vTEXT.m_dwLineColor = TTEXTSHADOW_COLOR;
	CTachyonRes::m_vTEXT.m_dwColor = TLOADING_TEXT_CLR;
	CTachyonRes::m_vTEXT.m_bOutLine = TRUE;
	CTachyonRes::m_vTEXT.SetFont(&m_Font);

	if( !CTachyonRes::m_vTLOADINGSCENE.empty() )
	{
		if( CTachyonRes::m_vTLOADINGSCENE[ 0 ] )
			CTachyonRes::m_vTLOADINGSCENE[ 0 ]->m_nState = 1;
	}
}
#else
void CTClientWnd::InitTRESIMG()
{
	static const CString INTRO_PATH		= ".\\Intro\\";
	static const CString INTRO_LIST		= "Intro.cfg";

	static const CString SEPARATORS		= "\t:=";
	
	static const CString VAR_GAUGE		= "gauge";
	static const CString VAR_GAUGE_X	= "gauge_x";
	static const CString VAR_GAUGE_Y	= "gauge_y";
	static const CString VAR_IMAGE		= "image";

	static const CString VAR_TEXT_X		= "text_x";
	static const CString VAR_TEXT_Y		= "text_y";

	ReleaseTRESIMG();

	float fScaleX = (float)m_Device.m_option.m_dwScreenX / (float)TBASE_SCREEN_X;
	float fScaleY = (float)m_Device.m_option.m_dwScreenY / (float)TBASE_SCREEN_Y;

	FILE *fpLIST;
	char rec[MAX_PATH], *ret;
	CString optName, optVal;
	
	fpLIST = fopen(INTRO_PATH+INTRO_LIST, "r");
	if( !fpLIST )
		return;

	ret = fgets(rec, MAX_PATH, fpLIST);
	while( ret != NULL )
	{
		CString tst = rec;
		tst.Trim();
		
		if( tst.GetLength() > 0 && tst.GetAt(0) != ';' && tst.GetAt(0) != '\n')
		{
			CString optName(strtok(rec, SEPARATORS));
			CString optVal(strtok(NULL, "\n"));
			if( !optName.IsEmpty() && !optVal.IsEmpty() )
			{
				optName.Trim();
				optVal.Trim();
							
				if( optName == VAR_GAUGE )
				{
					if( LoadImageFile(INTRO_PATH+optVal, &CTachyonRes::m_vGAUGE) )
					{
						CTachyonRes::m_vGAUGE.SetScaleX(fScaleX);
						CTachyonRes::m_vGAUGE.SetScaleY(fScaleY);
					}
				}
				else if( optName == VAR_IMAGE )
				{
					CD3DImage *pIMG = new CD3DImage();
					if( LoadImageFile(INTRO_PATH+optVal, pIMG) )
					{
						pIMG->SetScaleX(fScaleX);
						pIMG->SetScaleY(fScaleY);

						CTachyonRes::m_vBACKIMG.push_back(pIMG);	
					}
					else
						delete pIMG;
				}
				else if( optName == VAR_GAUGE_X )
					CTachyonRes::m_nGaugeX = atoi(optVal);
				else if( optName == VAR_GAUGE_Y )
					CTachyonRes::m_nGaugeY = atoi(optVal);
				else if( optName == VAR_TEXT_X )
					CTachyonRes::m_nTextX = atoi(optVal);
				else if( optName == VAR_TEXT_Y )
					CTachyonRes::m_nTextY = atoi(optVal);
			}
		}

		ret = fgets(rec, MAX_PATH, fpLIST);
	}

	fclose(fpLIST);

	CTachyonRes::m_vTEXT.m_dwLineColor = TTEXTSHADOW_COLOR;
	CTachyonRes::m_vTEXT.m_dwColor = TLOADING_TEXT_CLR;
	CTachyonRes::m_vTEXT.m_bOutLine = TRUE;
	CTachyonRes::m_vTEXT.SetScaleX(fScaleX);
	CTachyonRes::m_vTEXT.SetScaleY(fScaleY);
	CTachyonRes::m_vTEXT.SetFont(&m_Font);
}
#endif

void CTClientWnd::InitTCUSTOMCLOAKTEX()
{
	ReleaseTCUSTOMCLOAKTEX();

	for(WORD i = 1;	i < 1500; i++)
	{
		static const CString CUSTOMTEX_PATH		= ".\\Data\\Cache\\";
		CString strPath;
		strPath.Format("%s%d",CUSTOMTEX_PATH, i);
		if(PathFileExists(strPath))
			AddTCUSTOMCLOAKTEX(i);
	}
}

BYTE CTClientWnd::AddTCUSTOMCLOAKTEX(WORD wID)
{
	static const CString CUSTOMTEX_PATH		= ".\\Data\\Cache\\";
	
	CString strPath;
	strPath.Format("%s%d",CUSTOMTEX_PATH, wID);

	if(!PathFileExists(strPath))
		return FALSE;

	CTClientWnd* pMainWnd = CTClientWnd::GetInstance();
	LPDIRECT3DDEVICE9 pDevice = pMainWnd->m_Device.m_pDevice;

	LPDIRECT3DTEXTURE9 pTex;

	D3DXCreateTextureFromFile(pDevice,strPath,&pTex);		

	LPTEXTURESET pTextureSet = new TEXTURESET;
	CT3DTexture *pT3DTEX = new CT3DTexture();

	pT3DTEX->m_pTDATA = (LPBYTE) pTex;
	pT3DTEX->m_bEnabled = TRUE;
	pTextureSet->PushTexturePtr(pT3DTEX);

	if( pTex )
	{
		CTClientCustomCloak::m_mapTCUSTOMCLOAKTEX.insert( MAPTCUSTOMCLOAKTEX::value_type( wID, pTextureSet ) );
		return TRUE;
	}
	return FALSE;
}

CString CTClientWnd::ReadString( CFile *pFILE)
{
	TCHAR szRESULT[TSTR_MAX + 1];
	int nLength;

	pFILE->Read( &nLength, sizeof(int));
	pFILE->Read( szRESULT, nLength);
	szRESULT[nLength] = NULL;

	return CString(szRESULT);
}

void CTClientWnd::InitTRECTVB()
{
	static PVERTEX vMESH[4] = {
		{ 0.0f, 0.0f,  0.0f, 0.0f, 0.0f},
		{ 1.0f, 0.0f,  0.0f, 1.0f, 0.0f},
		{ 0.0f, 0.0f, -1.0f, 0.0f, 1.0f},
		{ 1.0f, 0.0f, -1.0f, 1.0f, 1.0f}};
	ReleaseTRECTVB();

	CTClientGame::m_vTRECTVB.LoadT3DVB(
		4 * sizeof(PVERTEX),
		0, T3DFVF_PVERTEX);

	CTClientGame::m_vTRECTVB.LoadT3DVBDATA(
		(LPBYTE) vMESH,
		4 * sizeof(PVERTEX), 0);

	MAPRES::iterator finder = m_RES.m_mapTEX.find(ID_TEX_GROUND);
	if( finder != m_RES.m_mapTEX.end() )
		CTClientGame::m_pTGROUNDTEX = (LPTEXTURESET) (*finder).second;
}

void CTClientWnd::ReleaseTQuestMagicClientItem()
{
	MAPTQUESTCLNTITEM::iterator it, end;
	it = CTClientItem::m_mapTQuestMagicClientItem.begin();
	end = CTClientItem::m_mapTQuestMagicClientItem.end();

	for(; it != end ; ++it )
		delete it->second;

	CTClientItem::m_mapTQuestMagicClientItem.clear();
}

void CTClientWnd::InitCamera()
{
	CTachyonObject vOBJ;

	vOBJ.InitOBJ(m_RES.GetOBJ(ID_SETTING_CAMERA));
	m_Camera.InitCamera(
		m_Device.m_pDevice,
		vOBJ.GetAttrFLOAT(ID_CAM_NEAR),
		vOBJ.GetAttrFLOAT(ID_CAM_FAR),
		vOBJ.GetAttrFLOAT(ID_CAM_FOV) * D3DX_PI / 180.0f,
		m_Device.m_option.m_dwScreenX,
		m_Device.m_option.m_dwScreenY);

	m_vTextCAM.InitOrthoCamera(
		m_Device.m_pDevice,
		m_Camera.m_fNearPlane,
		300.0f,
		m_Camera.m_fWidth,
		m_Camera.m_fHeight);

	m_vTextCAM.m_vPosition = D3DXVECTOR3( 0.0f, 0.0f, 0.0f);
	m_vTextCAM.m_vTarget = D3DXVECTOR3( 0.0f, 0.0f, 1.0f);
	m_vTextCAM.m_vUp = D3DXVECTOR3( 0.0f, 1.0f, 0.0f);

	m_vTextCAM.m_vPROJ = CTMath::Inverse(&m_vTextCAM.m_matProjection);
	D3DXMatrixIdentity(&m_vTextCAM.m_matInvView);
	D3DXMatrixIdentity(&m_vTextCAM.m_matView);

	m_Camera.m_fZoomMIN = m_MainGame.m_pMainChar->GetAttrFLOAT(ID_CAM_ZOOMMIN);
	m_Camera.m_fZoomMAX = m_MainGame.m_pMainChar->GetAttrFLOAT(ID_CAM_ZOOMMAX);
	m_Camera.m_fZoomSPEED = vOBJ.GetAttrFLOAT(ID_CAM_ZOOMSPEED);
	CTClientObjBase::m_fCamDist = 2.0f * CELL_SIZE;

	m_Camera.m_fCamHEIGHT = m_MainGame.m_pMainChar->GetAttrFLOAT(ID_CAM_HEIGHT);
	m_Camera.m_fCamDIST = m_MainGame.m_pMainChar->GetAttrFLOAT(ID_CAM_DIST);
	m_Camera.SetPosition(
		D3DXVECTOR3( 0.0f, 0.0f, m_Camera.m_fCamDIST),
		D3DXVECTOR3( 0.0f, 0.0f, 0.0f),
		D3DXVECTOR3( 0.0f, 1.0f, 0.0f));

	FLOAT fPitch = 5.0f * vOBJ.GetAttrFLOAT(ID_CAM_DEFPITCH);
	while(fPitch < 0.0f)
		fPitch += 1800.0f;

	m_Camera.m_bCamRotSPEED = (BYTE) vOBJ.GetAttrINT(ID_CAM_ROTSPEED);
	m_Camera.m_wCamPITCH = WORD(fPitch) % 1800;

	m_MainGame.m_wCamDIR = m_MainGame.m_pMainChar->m_wDIR;
	m_MainGame.m_bCamFIX = FALSE;
	m_MainGame.m_nCamZOOM = 0;

	m_Camera.Rotate( 0.0f, -FLOAT(m_Camera.m_wCamPITCH) * D3DX_PI / 900.0f, 0.0f);
	m_Camera.Activate(TRUE);
}

void CTClientWnd::InitChart()
{
	CTChart::InitTRACETEMP( _T(".\\Tcd\\TRace.tcd") );
	CTChart::InitTCOUNTRYINFO( _T(".\\Tcd\\TCountryInfo.tcd") );
	CTChart::InitTDETAILINFO( _T(".\\Tcd\\TInfo.tcd") );
	CTChart::InitTBGM( _T(".\\Tcd\\TBGM.tcd") );
	CTChart::InitTENV( _T(".\\Tcd\\TENV.tcd") );
	CTChart::InitTREGIONINFO( _T(".\\Tcd\\TRegion.tcd") );
	CTChart::InitTACTIONTEMP( _T(".\\Tcd\\TAction.tcd") );
	CTChart::InitTACTIONDATA( _T(".\\Tcd\\TADEF.tcd") );
	CTChart::InitTCLASSINFO( _T(".\\Tcd\\TClassInfo.tcd") );
	CTChart::InitTRACEINFO( _T(".\\Tcd\\TRaceInfo.tcd") );
	CTChart::InitTFACETEMP( _T(".\\Tcd\\TFace.tcd") );
	CTChart::InitTPANTSTEMP( _T(".\\Tcd\\TPants.tcd") );
	CTChart::InitTBODYTEMP( _T(".\\Tcd\\TBody.tcd") );
	CTChart::InitTHANDTEMP( _T(".\\Tcd\\THand.tcd") );
	CTChart::InitTFOOTTEMP( _T(".\\Tcd\\TFoot.tcd") );
	CTChart::InitTQUESTTEMP( _T(".\\TQuest.mpq") );
	CTChart::InitTQUESTPOS( _T(".\\TQNode.qpd") );
	CTChart::InitTSKILLTREE( _T(".\\Tcd\\TSkillTree.tcd") );
	CTChart::InitTSKILLTEMP( _T(".\\Tcd\\TSkill.tcd") );
	CTChart::InitTPOPUPITEM( _T(".\\Tcd\\TMenuItem.tcd") );
	CTChart::InitTPOPUPMENU( _T(".\\Tcd\\TPopupMenu.tcd") );

	CTChart::InitTITEMTEMP( _T(".\\Tcd\\TItem.tcd") );
	CTChart::InitTTITLETEMP( _T(".\\Tcd\\TCharTitle.tcd") );
	CTChart::InitTTITLEGROUPTEMP( _T(".\\Tcd\\TCharTitleGroup.tcd") );
	CTChart::InitTITEMVISUAL( _T(".\\Tcd\\TItemVisual.tcd") );
	CTChart::InitTITEMGRADESFX( _T(".\\Tcd\\TItemGradeSfx.tcd") );
	CTChart::InitTITEMMAGICSFX( _T(".\\Tcd\\TItemMagicSfx.tcd") );
	CTChart::InitTMAPJOINT( _T(".\\Tcd\\TJoint.tcd") );
	CTChart::InitTMAPINFO( _T(".\\Tcd\\TNODE.tcd"), _T(".\\Tcd\\TMAP.tcd") );
	CTChart::InitTSFXTEMP( _T(".\\Tcd\\TSFX.tcd") );
	CTChart::InitTMONTEMP( _T(".\\Tcd\\TMon.tcd") );
	CTChart::InitTNPCTEMP( _T(".\\Tcd\\TNPCTemp.tcd") );
	CTChart::InitTMINIMAP( _T(".\\Tcd\\TMinimap.tcd") );
	CTChart::InitTSTEPSND( _T(".\\Tcd\\TSTEP.tcd") );
	CTChart::InitTSKILLFUNCTION( _T(".\\Tcd\\TSkillFunction.tcd") );
	CTChart::InitTSKILLPOINT( _T(".\\Tcd\\TSkillPoint.tcd") );
	CTChart::InitTARROWDIR( _T(".\\Tcd\\TArrowDIR.tcd") );
	CTChart::InitTFORMULA( _T(".\\Tcd\\TFormula.tcd") );
	CTChart::InitTSWITCH( _T(".\\Tcd\\TSwitch.tcd") );
	CTChart::InitTSKYBOX( _T(".\\Tcd\\TSky.tcd") );
	CTChart::InitTLIGHT( _T(".\\Tcd\\TLIGHT.tcd") );
	CTChart::InitTLEVEL( _T(".\\Tcd\\TLevel.tcd") );
	CTChart::InitTGATE( _T(".\\Tcd\\TGate.tcd") );
	CTChart::InitTFOG( _T(".\\Tcd\\TFog.tcd") );
	CTChart::InitTITEMMAGIC( _T(".\\Tcd\\TItemMagic.tcd") );
	CTChart::InitTPET( _T(".\\Tcd\\TMount.tcd") );
	CTChart::InitTPORTAL( _T(".\\Tcd\\TPortal.tcd") );
	CTChart::InitTITEMATTR( _T(".\\Tcd\\TItemAttr.tcd") );
	CTChart::InitTITEMGRADE( _T(".\\Tcd\\TItemGrade.tcd") );
	CTChart::InitTITEMGRADEVISUAL( _T(".\\Tcd\\TItemGradeVisual.tcd") );
	CTChart::InitTNPCGlobal( _T(".\\Tcd\\TNPCGlobal.tcd") );
	CTChart::InitTHelp( _T(".\\Tcd\\THelp.tcd") );
	CTChart::InitTHelpLink( _T(".\\Tcd\\THelpLink.tcd") );
	CTChart::InitTQUESTMAGICITEM( _T(".\\Tcd\\TQuestItem.tcd") );
	CTChart::InitGODTOWER( _T(".\\Tcd\\TGodTower.tcd") );
	CTChart::InitGODBALL( _T(".\\Tcd\\TGodBall.tcd") );
	CTChart::InitMonShop( _T(".\\Tcd\\TMonShop.tcd") );
	CTChart::InitTPortalRegion( _T(".\\Tcd\\TPortalRegion.tcd") );
	CTChart::InitTMANTLEINFO( _T(".\\Tcd\\TMantleDetailTexture.tcd"), _T(".\\Tcd\\TMantleCoord.tcd") );
	CTChart::InitTFAMETITLE( _T(".\\Tcd\\TMonthRank.tcd") );
	CTChart::InitTEQUIPCREATECHAR( _T(".\\Tcd\\TEquipCreateChar.tcd") );
#ifdef ADD_RPS
	CTChart::InitTRPS( _T(".\\Tcd\\TRpsGame.tcd") );
#endif
	CTChart::InitTArena( _T(".\\Tcd\\TArena.tcd") );
	CTChart::InitTUNITLINK(_T(".\\Tcd\\TUnitLink.tcd"));
	CTChart::InitTDESTINATION(_T(".\\Tcd\\TDest.tcd"));
	CTChart::InitBattleInsignia(_T(".\\Tcd\\TBattleInsignia.tcd"));










































	// TRACETEMP 후처리
	{
		int n = 0;

		for( int bRACE=0 ; bRACE < TMAINRACE_COUNT; ++bRACE )
			for( int bSEX=0 ; bSEX < TSEX_COUNT; ++bSEX )
				if( 0 != CTChart::m_vTRACE[ bRACE ][ bSEX ] )
				{
					m_RES.LockOBJProgress(
						m_RES.GetOBJ( CTChart::m_vTRACE[ bRACE ][ bSEX ] ),
						10 + n++ );
				}

		for( int i=0; i<TNODEGUIDE_COUNT; i++)
		{
			m_MainGame.m_vTNODEGUIDE[i].InitOBJ(m_RES.GetOBJ(ID_DIRECTION));

			m_MainGame.m_vTNODEGUIDE[i].InitSIZE(
				m_MainGame.m_vTNODEGUIDE[i].GetAttrFLOAT(ID_SIZE_X),
				m_MainGame.m_vTNODEGUIDE[i].GetAttrFLOAT(ID_SIZE_Y),
				m_MainGame.m_vTNODEGUIDE[i].GetAttrFLOAT(ID_SIZE_Z),
				0.0f, 0.0f);
			D3DXMatrixIdentity(&m_MainGame.m_vTNODEGUIDE[i].m_vWorld);
		}
	}
	CTachyonRes::RenderBACK( 15, 100 );

	// TQUESTMAGICITEM 후처리
	{
		ReleaseTQuestMagicClientItem();

		MAPTQUESTITEM::iterator itQUESTITEM, end;
		itQUESTITEM = CTChart::m_mapTQUESTMAGICITEM.begin();
		end = CTChart::m_mapTQUESTMAGICITEM.end();

		for(; itQUESTITEM != end ; ++itQUESTITEM )
		{
			CTClientItem* pItem = new CTClientItem;

			pItem->SetItemID( itQUESTITEM->second->m_wItemID);
			pItem->SetGrade( itQUESTITEM->second->m_bGrade);
			pItem->SetCanGamble( itQUESTITEM->second->m_bGLevel);
			pItem->SetDuraMax( itQUESTITEM->second->m_dwDuraMax);
			pItem->SetDuraCurrent( itQUESTITEM->second->m_dwDuraCur);
			pItem->SetRefineCurrent( itQUESTITEM->second->m_bRefineCur);
			
			LPTITEM pTITEM = pItem->GetTITEM();
			if( pTITEM )
			{
				pItem->SetRefineMax( pTITEM->m_bRefineMax);
				
				for(INT j=0; j<TMAGIC_MAX; ++j)
				{
					if( itQUESTITEM->second->m_bMagic[ j ] )
					{
						pItem->AddMagicValue(
							itQUESTITEM->second->m_bMagic[ j ],
							(WORD) itQUESTITEM->second->m_bValue[ j ] );
					}
				}

				CTClientItem::m_mapTQuestMagicClientItem.insert( make_pair( (WORD) itQUESTITEM->first, pItem ) );
			}
			else
				delete pItem;
		}
	}

	// TMINIMAP 후처리
	{
		CTWorldmapDlg* pWorldDlg = (CTWorldmapDlg*) m_MainGame.m_vTFRAME[TFRAME_WORLDMAP];

		MAPTMINIMAP::iterator it, end;
		it = CTChart::m_mapTMINIMAP.begin();
		end = CTChart::m_mapTMINIMAP.end();

		for(; it != end ; ++it )
		{
			LPTMINIMAP pTMINIMAP = it->second;
			DWORD dwTexID = (DWORD) pTMINIMAP->m_pTEX;

			MAPRES::iterator finder = m_RES.m_mapTEX.find(dwTexID);	
			if( finder != m_RES.m_mapTEX.end() )
				pTMINIMAP->m_pTEX = (LPTEXTURESET) (*finder).second;
			else
				pTMINIMAP->m_pTEX = NULL;

			TComponent* pTWorldBtn = pWorldDlg->FindKid(pTMINIMAP->m_dwWorldButtonID);
			if( pTWorldBtn )
			{
				pWorldDlg->RemoveKid(pTWorldBtn);
				pWorldDlg->m_vTWORLDBUTTON.push_back(pTWorldBtn);

				CTChart::m_mapTBTNID2UNIT.insert( std::make_pair( pTMINIMAP->m_dwWorldButtonID, pTMINIMAP->m_dwUnitID));
				CTChart::m_mapTBTNID2WORLD.insert( std::make_pair( pTMINIMAP->m_dwWorldButtonID, pTMINIMAP->m_bWorldID));
			}
		}
	}
	
	// TACTIONDATA 후처리
	{
		m_MainGame.m_pActListPopup->ClearButtons();

		VTACTIONDATA::iterator it, end;
		it = CTChart::m_vTACTION.begin();
		end = CTChart::m_vTACTION.end();

		for(; it != end ; ++it )
		{
			LPTACTIONDATA pTDATA = (*it);

			if( !pTDATA )
				continue;

			if( pTDATA->m_strActCmd[0] != '/' )
				pTDATA->m_strActCmd.Empty();
			else
			{
				pTDATA->m_strActCmd = pTDATA->m_strActCmd.Right( pTDATA->m_strActCmd.GetLength()-1 );

				m_MainGame.m_pChatFrame->AddChatCmdProc(
					pTDATA->m_strActCmd, CTClientGame::OnActCmdByMsg);

				m_MainGame.m_pActListPopup->AddButton(
					pTDATA->m_strActCmd, CTClientGame::OnActionCmdBtnDown );
			}
		}
			m_MainGame.m_pActListPopup->AddButton(
				CTChart::Format(TSTR_CLOSE), GM_TOGGLE_ACTLIST);

	}

	
	{
		m_MainGame.m_pCommandsPopup->ClearButtons();

		for (BYTE i = 0; i < sizeof(CTClientGame::m_strBRCommands) / sizeof(CTClientGame::m_strBRCommands[0]); ++i)
			m_MainGame.m_pCommandsPopup->AddButton( CTClientGame::m_strBRCommands[i], 
				CTClientGame::PerformBRCommand);

		m_MainGame.m_pCommandsPopup->AddButton(CTChart::Format(TSTR_CLOSE), 
			GM_OPEN_MENU_COMMUNITY);
	}
	
	// TSFXTEMP 후처리
	{
		MAPTSFXTEMP::iterator itTSFX, end;
		itTSFX = CTChart::m_mapTSFXTEMP.begin();
		end = CTChart::m_mapTSFXTEMP.end();

		for(; itTSFX != end ; ++itTSFX )
		{
			DWORD dwSFX = (DWORD) itTSFX->second->m_pTSFX;

			MAPRES::iterator finder = m_RES.m_mapSFX.find( dwSFX );
			if( finder != m_RES.m_mapSFX.end() )
			
				itTSFX->second->m_pTSFX = (LPSFX) (*finder).second;
			
			else
				itTSFX->second->m_pTSFX = NULL;
		}
	}

	// TITEMGRADEVISUAL 후처리
	{
		MAPTITEMGRADEVISUAL::iterator it, end;
		it = CTChart::m_mapTITEMGRADEVISUAL.begin();
		end = CTChart::m_mapTITEMGRADEVISUAL.end();

		while( it != end )
		{
			TITEMGRADEVISUAL& item = it->second;

			DWORD dwTextureID = (DWORD) item.m_pSkinTex;

			MAPRES::iterator finder = m_RES.m_mapTEX.find( dwTextureID );
			if( finder == m_RES.m_mapTEX.end() || finder->second == NULL )
			{
				it = CTChart::m_mapTITEMGRADEVISUAL.erase( it );
				continue;
			}

			item.m_pSkinTex = (LPTEXTURESET) finder->second;
			++it;
		}
	}


	// THELP 후처리
	{
		if( !CTChart::m_mapTHELP.empty() )
		{
			MAPTHELP::iterator it, end;
			it = CTChart::m_mapTHELP.begin();
			end = CTChart::m_mapTHELP.end();

			DWORD dwMin = it->first;
			++it;

			for(; it != end ; ++it)
				dwMin = dwMin > it->first ? it->first : dwMin;

			CTHelpFrame* pHELP = (CTHelpFrame*) m_MainGame.GetFrame( TFRAME_HELP );
			pHELP->SetHelp( dwMin );
		}
	}









}



void CTClientWnd::InitRSCS()
{
	MAPRES::iterator itTEX = m_RES.m_mapTEX.find(ID_TEX_TCMDARROW);

	m_MainGame.m_vTCMDTARGET.ReleaseData();
	m_MainGame.m_vTCMDTARGET.InitOBJ(m_RES.GetOBJ(TCMDTARGET_OBJ));
	m_MainGame.m_vTCMDTARGET.SetCloth(
		&m_Device,
		TCMDTARGET_CLK,
		TCMDTARGET_CL,
		TCMDTARGET_MESH);

	m_MainGame.m_vTCMDTARGET.SetAction(
		TCMDTARGET_ACT,
		TCMDTARGET_ANI);

	m_MainGame.m_vTCMDTARGET.InitSIZE(
		TCMDTARGET_SIZE_X,
		TCMDTARGET_SIZE_Y,
		TCMDTARGET_SIZE_Z,
		0.0f, 0.0f);
	m_MainGame.m_vTCMDTARGET.m_bDynamicOBJ = TRUE;
	m_MainGame.m_vTCMDTARGET.m_bLand = TRUE;

	m_MainGame.m_vTCMDTARGET.m_fRange = TRSCSOBJ_RANGE;
	m_MainGame.m_vTCMDTARGET.ResetOBJPart(&m_Device);
	m_MainGame.m_vTCMDTARGET.m_bContryID = TCONTRY_N;
	m_MainGame.m_vTCMDTARGET.m_bAlpha = 0;
	m_MainGame.m_vTCMDTARGET.m_bHide = TRUE;

	m_MainGame.m_vTCMDDIR.ReleaseData();
	m_MainGame.m_vTCMDDIR.InitOBJ(m_RES.GetOBJ(TCMDDIR_OBJ));
	m_MainGame.m_vTCMDDIR.SetCloth(
		&m_Device,
		TCMDDIR_CLK,
		TCMDDIR_CL,
		TCMDDIR_MESH);

	m_MainGame.m_vTCMDDIR.SetAction(
		TCMDDIR_ACT,
		TCMDDIR_ANI);

	m_MainGame.m_vTCMDDIR.InitSIZE(
		TCMDDIR_SIZE_X,
		TCMDDIR_SIZE_Y,
		TCMDDIR_SIZE_Z,
		0.0f, 0.0f);
	m_MainGame.m_vTCMDDIR.m_fRange = TRSCSOBJ_RANGE;
	m_MainGame.m_vTCMDDIR.ResetOBJPart(&m_Device);
	m_MainGame.m_vTCMDDIR.m_bContryID = TCONTRY_N;

	m_MainGame.m_vTCMDDIR.m_dwSHADOWTick = TMAXSHADOW_TICK;
	m_MainGame.m_vTCMDDIR.m_bAlpha = 0;
	m_MainGame.m_vTCMDDIR.m_bHide = TRUE;

	m_MainGame.m_vTCMDARROW.m_fVelocityX = TCMDARROW_VELOCITY;
	m_MainGame.m_vTCMDARROW.m_fGravity = TCMDARROW_GRAVITY;

	m_MainGame.m_vTCMDARROW.m_bHostType = OT_NONE;
	m_MainGame.m_vTCMDARROW.m_dwHostID = 0;

	if( itTEX != m_RES.m_mapTEX.end() )
		CTRSCSDlg::m_pTARROW = (LPTEXTURESET) (*itTEX).second;

	m_MainGame.m_vTCMDARROW.m_vTSLASH.InitSFX(
		&m_MainGame.m_vTCMDARROW.m_vPosition,
		CTRSCSDlg::m_pTARROW,
		TCMDARROW_COLOR,
		TCMDARROW_WIDTH,
		TSLASH_INTER);
	m_MainGame.m_vTCMDARROW.m_vTSLASH.m_vLENGTH._41 = -TCMDARROW_WIDTH / 2.0f;
	m_MainGame.AddEffectScrolls();
}

void CTClientWnd::InitNAV()
{
}

void CTClientWnd::ReleaseChart()
{
	CTChart::ReleaseTCOUNTRYINFO();
	CTChart::ReleaseTDETAILINFO();
	CTChart::ReleaseTREGIONINFO();
	CTChart::ReleaseTACTIONTEMP();
	CTChart::ReleaseTACTIONDATA();
	CTChart::ReleaseTQUESTTEMP();
	CTChart::ReleaseTSKILLTREE();
	CTChart::ReleaseTSKILLTEMP();
	CTChart::ReleaseTPOPUPITEM();
	CTChart::ReleaseTPOPUPMENU();
	CTChart::ReleaseTCLASSINFO();
	CTChart::ReleaseTRACEINFO();
	CTChart::ReleaseTITEMMAGICSFX();
	CTChart::ReleaseTITEMGRADESFX();
	CTChart::ReleaseTITEMTEMP();
	CTChart::ReleaseTITEMVISUAL();
	CTChart::ReleaseTMAPJOINT();
	CTChart::ReleaseTMAPINFO();
	CTChart::ReleaseTSFXTEMP();
	CTChart::ReleaseTMONTEMP();
	CTChart::ReleaseTNPCTEMP();
	CTChart::ReleaseTMINIMAP();
	CTChart::ReleaseTSTEPSND();
	CTChart::ReleaseTFORMULA();
	CTChart::ReleaseTSWITCH();
	CTChart::ReleaseTSKYBOX();
	CTChart::ReleaseTITEMATTR();
	CTChart::ReleaseTPORTAL();
	CTChart::ReleaseTLIGHT();
	CTChart::ReleaseTLEVEL();
	CTChart::ReleaseTGATE();
	CTChart::ReleaseTITEMMAGIC();
	CTChart::ReleaseTFOG();
	CTChart::ReleaseTPET();
	CTChart::ReleaseTQUESTMAGICITEM();
	CTChart::ReleaseTBGM();
	CTChart::ReleaseTENV();
	CTChart::ReleaseTNPCGlobal();
	CTChart::ReleaseTHelp();
	CTChart::ReleaseTHelpLink();
	CTChart::ReleaseGODTOWER();
	CTChart::ReleaseGODBALL();
	CTChart::ReleaseTMonShop();
	CTChart::ReleaseTPortalRegion();
	CTChart::ReleaseTAUCTIONTREE();
	CTChart::ReleaseTFAMETITLE();
	CTChart::ReleaseTMANTLEINFO();
	CTChart::ReleaseTEQUIPCREATECHAR();
	CTChart::ReleaseTTITLETEMP();
	CTChart::ReleaseTTITLEGROUPTEMP();
#ifdef ADD_RPS
	CTChart::ReleaseTRPS();
#endif
	CTChart::ReleaseTArena();
	CTChart::ReleaseTPORTALLINK();

	// TITEMTEMP 후처리
	{
		CTClientItem::m_mapTITEMTICK.clear();
		CTClientItem::m_mapTITEMLOCK.clear();
	}

	// TQUESTMAGICITEM 후처리
	{
		ReleaseTQuestMagicClientItem();
	}
}

void CTClientWnd::OnDestroy()
{
	m_vWebCtrl.m_pActHost = NULL;
	if(m_vWebCtrl.GetSafeHwnd())
		m_vWebCtrl.DestroyWindow();

	if(theApp.m_pPacketSpy)
	{
		delete theApp.m_pPacketSpy;
		theApp.m_pPacketSpy = NULL;
	}

	if(!theApp.m_bLoaded)
	{
		theApp.ExitLoadThread(TRUE);
		CTachyonWnd::OnDestroy();

		return;
	}

	CTPartyItemLottery::ReleaseInstance();

	{
		TGROUPARRAY::iterator it, end;
		it = m_vTGroups.begin();
		end = m_vTGroups.end();
		for(; it != end ; ++it )
			delete (*it);

		m_vTGroups.clear();
	}

	SetMainFrame( NULL);

	for( int i=0; i<MAX_CON; i++)
		if(m_session[i].m_bSVR != SVR_NONE)
			m_session[i].End();

	CTachyonRes::m_MEDIA.Stop(
		MEDIA_TMUSIC,
		m_MainGame.m_dwBGM, 0);

	m_MessageBox.SetParent(NULL);
	m_MainGame.ReleaseGame();
	CTCustomCloakDlg* pDlgCustomCloak = static_cast<CTCustomCloakDlg*>( m_MainGame.m_vTFRAME[TFRAME_CUSTOMCLOAK] );
	pDlgCustomCloak->ResetCHAR();
	theApp.ExitLoadThread(TRUE);

	((CTCharNewDlg*)m_MainGame.m_vTFRAME[ TFRAME_CHARINFO_NEW ])->ResetCHAR();
	m_MainGame.m_pMainChar->Release();

	CTClientObjBase::ReleaseSquareResource();
	CTClientObjBase::ClearGARBAGE();
	CTClientObjBase::ReleaseGradeObjTex();
	CBattleRankTex::Reset();
	CTDynamicBillboard::ReleaseTDBB();
	CTClientTalkBox::ReleaseTalkBox();
	CTachyonSlashSFX::ReleaseVB();
	CTBSPNode::ReleaseCommon();
	CTClientGuildMark::MRelease();

	ReleaseTRECTVB();
	ReleaseTexture();
	ReleaseTRESIMG();
	ReleaseTCHARINFO();

	for( BYTE i=0; i<TCURSOR_COUNT; i++)
	{
		DestroyCursor(m_vTCURSOR[i]);
		m_vTCURSOR[i] = NULL;
	}

	CTachyonWnd::OnDestroy();
}

BOOL CTClientWnd::MessageBoxOK(
	DWORD dwMessage,
	DWORD dwOkText,
	TCOMMAND vOK,
	TCOMMAND vIgnore,
	BYTE bModal,
	DWORD dwSound,
	BYTE bSoundType,
	enum TMSGBOXOPEN_TYPE eOpenType,
	DWORD dwTitle )
{
	return CTClientWnd::MessageBox(
		dwMessage,
		0, 0,
		dwOkText,
		dwOkText,
		ID_FRAME_1BTNMSGBOX,
        vOK,
		vOK,
		vIgnore,
		FALSE,
		bModal,
		dwTitle,
		0,
		"",
		dwSound,
		bSoundType,
		eOpenType );
}

BOOL CTClientWnd::MessageBoxOK(
	CString strMSG,
	DWORD dwOkText,
	TCOMMAND vOK,
	TCOMMAND vIgnore,
	BYTE bModal,
	DWORD dwSound,
	BYTE bSoundType,
	enum TMSGBOXOPEN_TYPE eOpenType,
	DWORD dwTitle )
{
	CString strTITLE;

	if(dwTitle)
		strTITLE = CTChart::LoadString( TSTR_DEFAULT_MSGBOX_TITLE);
	else
		strTITLE = CTChart::LoadString( (TSTRING) dwTitle);

	return CTClientWnd::MessageBox(
		strMSG,
		"",
		"",
		dwOkText,
		dwOkText,
		ID_FRAME_1BTNMSGBOX,
		vOK,
		vOK,
		vIgnore,
		FALSE,
		bModal,
		strTITLE,
		0,
		"",
		dwSound,
		bSoundType,
		eOpenType);
}

BOOL CTClientWnd::MessageBoxYesNo(
	DWORD dwMessage,
	DWORD dwYesText,
	DWORD dwNoText,
	TCOMMAND vYesID,
	TCOMMAND vNoID,
	TCOMMAND vIgnoreID,
	BYTE bModal,
	DWORD dwSound,
	BYTE bSoundType,
	enum TMSGBOXOPEN_TYPE eOpenType,
	DWORD dwTitle,
	DWORD dwFrameID )
{
	return CTClientWnd::MessageBox(
		dwMessage,
		0, 0,
		dwYesText,
		dwNoText,
		dwFrameID == 0 ? ID_FRAME_2BTNMSGBOX : dwFrameID,
        vYesID,
		vNoID,
		vIgnoreID,
		FALSE,
		bModal,
		dwTitle,
		0,
		"",
		dwSound,
		bSoundType,
		eOpenType );
}

BOOL CTClientWnd::MessageBoxYesNo(
	CString strMSG,
	DWORD dwYesText,
	DWORD dwNoText,
	TCOMMAND vYesID,
	TCOMMAND vNoID,
	TCOMMAND vIgnoreID,
	BYTE bModal,
	DWORD dwSound,
	BYTE bSoundType,
	enum TMSGBOXOPEN_TYPE eOpenType,
	DWORD dwTitle )
{
	CString strTITLE;

	if(dwTitle)
		strTITLE = CTChart::LoadString( TSTR_DEFAULT_MSGBOX_TITLE);
	else
		strTITLE = CTChart::LoadString( (TSTRING) dwTitle);

	return MessageBox(
		strMSG,
		"",
		"",
		dwYesText,
		dwNoText,
		ID_FRAME_2BTNMSGBOX,
		vYesID,
		vNoID,
		vIgnoreID,
		FALSE,
		bModal,
		strTITLE,
		0,
		"",
		dwSound,
		bSoundType,
		eOpenType);
}

BOOL CTClientWnd::MessageBoxItemOK(
	CString strMSG,
	DWORD dwOkText,
	TCOMMAND vOK,
	TCOMMAND vIgnore,
	DWORD dwImageIndex,
	CString strImageTitle,
	BYTE bModal,
	DWORD dwSound,
	BYTE bSoundType,
	TMSGBOXOPEN_TYPE eOpenType)
{
	return CTClientWnd::MessageBox(
		strMSG,
		"",
		"",
		dwOkText,
		dwOkText,
		ID_FRAME_1BTN_ICON_MSGBOX,
		vOK,
		vOK,
		vIgnore,
		FALSE,
		bModal,
		"",
		dwImageIndex,
		strImageTitle,
		dwSound,
		bSoundType,
		eOpenType);
}

BOOL CTClientWnd::MessageBoxItemYesNo(
	CString strMSG,
	DWORD dwYesText,
	DWORD dwNoText,
	TCOMMAND vYesID,
	TCOMMAND vNoID,
	TCOMMAND vIgnoreID,
	DWORD dwImageIndex,
	CString strImageTitle,
	BYTE bModal,
	DWORD dwSound,
	BYTE bSoundType,
	enum TMSGBOXOPEN_TYPE eOpenType)
{
	return CTClientWnd::MessageBox(
		strMSG,
		0, 0,
		dwYesText,
		dwNoText,
		ID_FRAME_2BTN_ICON_MSGBOX,
        vYesID,
		vNoID,
		vIgnoreID,
		FALSE,
		bModal,
		0,
		dwImageIndex,
		strImageTitle,
		dwSound,
		bSoundType,
		eOpenType );
}

BOOL CTClientWnd::MessageBox( DWORD dwMessageID,
							  DWORD dwEditTitleID,
							  DWORD dwEditTextID,
							  DWORD dwYesTextID,
							  DWORD dwNoTextID,
							  DWORD dwFrameID,
							  TCOMMAND vYesID,
							  TCOMMAND vNoID,
							  TCOMMAND vIgnoreID,
							  BYTE  bEdit,
							  BYTE  bModal,
							  DWORD dwTitle,
							  DWORD dwImageIndex,
							  CString strImageTitle,
							  DWORD dwSound,
							  BYTE  bSoundType,
							  TMSGBOXOPEN_TYPE eOpenType)
{
	CString strEDITTITLE;
	CString strEDIT;
	CString strMSG;
	CString strTITLE;

	if(dwEditTitleID)
		strEDITTITLE = CTChart::LoadString( (TSTRING) dwEditTitleID);
	else
		strEDITTITLE.Empty();

	if(dwEditTextID)
		strEDIT = CTChart::LoadString( (TSTRING) dwEditTextID);
	else
		strEDIT.Empty();

	if(dwMessageID)
		strMSG = CTChart::LoadString( (TSTRING) dwMessageID);
	else
		strMSG.Empty();

	if(dwTitle)
		strTITLE = CTChart::LoadString( TSTR_DEFAULT_MSGBOX_TITLE);
	else
		strTITLE = CTChart::LoadString( (TSTRING) dwTitle);

	return MessageBox(
		strMSG,
		strEDITTITLE,
		strEDIT,
		dwYesTextID,
		dwNoTextID,
		dwFrameID,
		vYesID,
		vNoID,
		vIgnoreID,
		bEdit,
		bModal,
		strTITLE,
		dwImageIndex,
		strImageTitle,
		dwSound,
		bSoundType,
		eOpenType);
}

BOOL CTClientWnd::MessageBox( CString strMSG,
							  CString strEditTitle,
							  CString strEditText,
							  DWORD dwYesTextID,
							  DWORD dwNoTextID,
							  DWORD dwFrameID,
							  TCOMMAND vYesID,
							  TCOMMAND vNoID,
							  TCOMMAND vIgnoreID,
							  BYTE bEdit,
							  BYTE bModal,
							  CString strTitle,
							  DWORD dwImageIndex,
							  CString strImageTitle,
							  DWORD dwSound,
							  BYTE bSoundType,
							  TMSGBOXOPEN_TYPE eOpenType,
							  BOOL bInsertStack)
{
	switch( eOpenType )
	{
	default:

	case TMSGBOXOPEN_NONE:	// 기존에 떠 있는게 있으면 지금 열려는 메시지박스는 그냥 무시하자.
		{
			if( (IsMsgBoxVisible() || m_bModalFrame != (BYTE)(T_INVALID)) )
				return FALSE;
		}
		break;


	case TMSGBOXOPEN_CLOSEALL_ALREADY: // 기존에 열려있던 모든 메시지 박스를 강제 종료 시키고 지금 이 메시지박스를 연다.
		{
			ClearMessageBox();
			ClearMsgBoxStackForced();
		}
		break;


	case TMSGBOXOPEN_OVERLAP: // 기존 것에 덮어서 위에 지금 이 메시지박스를 연다.
		{
			ClearMessageBox();
		}
		break;
	}

	if( bInsertStack)
	{
		InsertMsgBoxStack(
			strMSG,
			strEditTitle,
			strEditText,
			dwYesTextID,
			dwNoTextID,
			dwFrameID,
			vYesID,
			vNoID,
			vIgnoreID,
			bEdit,
			bModal,
			strTitle,
			dwImageIndex,
			strImageTitle,
			dwSound,
			bSoundType);
	}

	TFrame *pFRAME = m_MessageBox.FindFrame(dwFrameID);
	CRect rect;

	TComponent *pEDITTITLE = pFRAME->FindKid(ID_CTRLINST_EDIT_TITLE);
	TComponent *pEDITBACK = pFRAME->FindKid(ID_CTRLINST_EDIT_BACK);
	TComponent *pMSG = pFRAME->FindKid(ID_CTRLINST_MSG);
	TComponent *pOK = pFRAME->FindKid(ID_CTRLINST_OK);
	TComponent *pCANCEL = pFRAME->FindKid(ID_CTRLINST_CANCEL);
	TComponent *pCLOSE = pFRAME->FindKid(ID_CTRLINST_CLOSE);
	TComponent *pEDIT = pFRAME->FindKid(ID_CTRLINST_EDIT);
	TComponent *pTITLE = pFRAME->FindKid(ID_CTRLINST_TITLE);
	TImageList* pITEM = (TImageList*) pFRAME->FindKid(ID_CTRLINST_ICON);
	TComponent* pITEM_NAME = pFRAME->FindKid(ID_CTRLINST_NAME);


	m_MessageBox.SetLevel(dwFrameID);
	m_MessageBox.SetParent( GetMainFrame());

	if(bModal)
	{
		SetMainFrame( &m_MessageBox);
		//m_pMainFrame->EnableComponent(FALSE);
	}

	pFRAME->GetComponentRect(&rect);
	rect.OffsetRect(
		(m_Device.m_option.m_dwScreenX - rect.Width()) / 2 - rect.left,
		(m_Device.m_option.m_dwScreenY - rect.Height()) / 2 - rect.top);
	m_MessageBox.MoveComponent(CPoint( 0, 0));
	pFRAME->MoveComponent(rect.TopLeft());

	if(pMSG)
	{
		pMSG->m_bVCenter = bEdit ? FALSE : TRUE;
		pMSG->m_strText = strMSG;
	}

	if(pCLOSE)
		pCLOSE->m_menu[TNM_LCLICK] = vNoID;

	if(pEDITTITLE)
	{
		pEDITTITLE->m_strText = strEditTitle;

		pEDITTITLE->EnableComponent(bEdit);
		pEDITTITLE->ShowComponent(bEdit);
	}

	if(pEDITBACK)
	{
		pEDITBACK->EnableComponent(bEdit);
		pEDITBACK->ShowComponent(bEdit);
	}

	if(pEDIT)
	{
		pEDIT->ClearText();
		pEDIT->m_strText = strEditText;

		pEDIT->EnableComponent(bEdit);
		pEDIT->ShowComponent(bEdit);

		if(bEdit)
			pFRAME->SetFocus(pEDIT->m_id);
	}

	if(pCANCEL)
	{
		pCANCEL->m_strText = CTChart::LoadString( (TSTRING) dwNoTextID);
		pCANCEL->m_menu[TNM_LCLICK] = vNoID;
		pFRAME->m_menu[TNM_ESC] = vNoID;
	}
	else
		pFRAME->m_menu[TNM_ESC] = TCML_ID_NULL;

	if(pOK)
	{
		pOK->m_strText = CTChart::LoadString( (TSTRING) dwYesTextID);
		pOK->m_menu[TNM_LCLICK] = vYesID;
		pFRAME->m_menu[TNM_ENTER] = vYesID;
	}
	else
		pFRAME->m_menu[TNM_ENTER] = TCML_ID_NULL;

	if(pTITLE)
	{
		if( strTitle.IsEmpty() )
			strTitle = CTChart::LoadString( TSTR_DEFAULT_MSGBOX_TITLE);

		pTITLE->m_strText = strTitle;
	}

	if( pITEM )
		pITEM->SetCurImage( dwImageIndex );

	if( pITEM_NAME )
		pITEM_NAME->m_strText = strImageTitle;

	if( dwSound )
		CTachyonRes::m_MEDIA.Play( bSoundType, dwSound);
	ReFresh();

	return TRUE;
}

BOOL CTClientWnd::VeteranBox(BYTE bOption, BYTE bFirstLevel, BYTE bSecondLevel, BYTE bThirdLevel)
{
	if( (IsMsgBoxVisible() || m_bModalFrame != (BYTE)(T_INVALID)) )
		return FALSE;
	
	TMESSAGEBOX MsgBox;
	m_MsgBoxStack.push(MsgBox);

	TFrame *pFRAME = m_MessageBox.FindFrame(ID_FRAME_VETERAN);
	CRect rect;

	TButton *pLvlBtn1 = (TButton*) pFRAME->FindKid(ID_CTRLINST_LVLBTN1);
	TButton *pLvlBtn2 = (TButton*) pFRAME->FindKid(ID_CTRLINST_LVLBTN2);
	TButton *pLvlBtn3 = (TButton*) pFRAME->FindKid(ID_CTRLINST_LVLBTN3);
	TComponent *pNaLvlBtn1 = pFRAME->FindKid(ID_CTRLINST_NALVLBTN1);
	TComponent *pNaLvlBtn2 = pFRAME->FindKid(ID_CTRLINST_NALVLBTN2);
	TComponent *pNaLvlBtn3 = pFRAME->FindKid(ID_CTRLINST_NALVLBTN3);
	TButton *pCancel = (TButton*) pFRAME->FindKid(ID_CTRLINST_CANCEL_VET);
	TComponent *pDescription = pFRAME->FindKid(ID_CTRLINST_DESCRIP_VET);

	m_MessageBox.SetLevel(ID_FRAME_VETERAN);
	m_MessageBox.SetParent( GetMainFrame());

	SetMainFrame(&m_MessageBox);
	
	pFRAME->GetComponentRect(&rect);
	rect.OffsetRect(
		(m_Device.m_option.m_dwScreenX - rect.Width()) / 2 - rect.left,
		(m_Device.m_option.m_dwScreenY - rect.Height()) / 2 - rect.top);
	m_MessageBox.MoveComponent(CPoint( 0, 0));
	pFRAME->MoveComponent(rect.TopLeft());

	pFRAME->EnableComponent(TRUE);

	pLvlBtn1->ClearText();

	if(bOption < 1 || bOption == NULL)
		pLvlBtn1->m_strText.Format("Lv %d", 1);
	else
		pLvlBtn1->m_strText.Format("Lv %d", bFirstLevel);

	pLvlBtn2->ClearText();
	pLvlBtn2->m_strText.Format("Lv %d", bSecondLevel);
	pLvlBtn3->ClearText();
	pLvlBtn3->m_strText.Format("Lv %d", bThirdLevel);
	pNaLvlBtn1->ClearText();
	pNaLvlBtn1->m_strText.Format("Lv %d", bFirstLevel);
	pNaLvlBtn2->ClearText();
	pNaLvlBtn2->m_strText.Format("Lv %d", bSecondLevel);
	pNaLvlBtn3->ClearText();
	pNaLvlBtn3->m_strText.Format("Lv %d", bThirdLevel);

	if(bOption == 1 || bOption == 0)
	{
		pFRAME->AddKid(pLvlBtn1);
		pFRAME->AddKid(pNaLvlBtn2);
		pFRAME->AddKid(pNaLvlBtn3);
		pLvlBtn2->EnableComponent(FALSE);
		pLvlBtn3->EnableComponent(FALSE);
	}
	else if(bOption == 2)
	{
		pFRAME->AddKid(pLvlBtn1);
		pFRAME->AddKid(pLvlBtn2);
		pFRAME->AddKid(pNaLvlBtn3);
		pLvlBtn3->EnableComponent(FALSE);
	}
	else if(bOption == 3)
	{
		pFRAME->AddKid(pLvlBtn1);
		pFRAME->AddKid(pLvlBtn2);
		pFRAME->AddKid(pLvlBtn3);
	}
	ReFresh();

	return TRUE;
}

BOOL CTClientWnd::IsMsgBoxVisible()
{
	return m_MessageBox.GetParent() && m_MessageBox.IsVisible();
}

CString CTClientWnd::GetMsgBoxStrInEditor(DWORD dwMessageID)
{
	TFrame* pMsgBox = static_cast<TFrame*>(m_MessageBox.FindKid(dwMessageID));
	if( pMsgBox && pMsgBox->CanProcess() )
	{
		TEdit* pEdit = static_cast<TEdit*>(pMsgBox->FindKid(ID_CTRLINST_EDIT));
		if( pEdit )
			return pEdit->m_strText;
	}

	return CString("");
}

void CTClientWnd::ClearMsgBoxEditor( DWORD dwMessageID )
{
	TFrame* pMsgBox = static_cast<TFrame*>(m_MessageBox.FindKid(dwMessageID));
	if( pMsgBox )
	{
		TEdit* pEdit = static_cast<TEdit*>(pMsgBox->FindKid(ID_CTRLINST_EDIT));
		if( pEdit )
			pEdit->ClearText();
	}
}

void CTClientWnd::ClearMessageBox()
{
	if( GetMainFrame() == &m_MessageBox)
	{
		SetMainFrame( (TFrame *) m_MessageBox.GetParent() );
	}

	m_MessageBox.SetParent(NULL);
	ReFresh();
}

void CTClientWnd::ClearMsgBoxStackForced()
{
	while( !m_MsgBoxStack.empty() )
	{
		TMESSAGEBOX vBox = m_MsgBoxStack.top();
		m_MsgBoxStack.pop();

		if( vBox.vIgnoreID.m_dwID != 0 )
			OnCommand( vBox.vIgnoreID );
	}
}

void CTClientWnd::InsertMsgBoxStack(
									CString strMSG,
									CString strEditTitle,
									CString strEditText,
									DWORD dwYesTextID,
									DWORD dwNoTextID,
									DWORD dwFrameID,
									TCOMMAND vYesID,
									TCOMMAND vNoID,
									TCOMMAND vIgnoreID,
									BYTE bEdit,
									BYTE bModal,
									CString strTitle,
									DWORD dwImageIndex,
									CString strImageTitle,
									DWORD dwSound,
									BYTE bSoundType )
{
	TMESSAGEBOX MsgBox;
	MsgBox.strMSG = strMSG;
	MsgBox.strEditTitle = strEditTitle;
	MsgBox.strEditText = strEditText;
	MsgBox.dwYesTextID = dwYesTextID;
	MsgBox.dwNoTextID = dwNoTextID;
	MsgBox.dwFrameID = dwFrameID;
	MsgBox.vYesID = vYesID;
	MsgBox.vNoID = vNoID;
	MsgBox.vIgnoreID = vIgnoreID;
	MsgBox.bEdit = bEdit;
	MsgBox.bModal = bModal;
	MsgBox.strTitle = strTitle;
	MsgBox.dwSound = dwSound;
	MsgBox.bSoundType = bSoundType;
	m_MsgBoxStack.push(MsgBox);
}

void CTClientWnd::CloseMessageBox( BOOL bCloseAll )
{
	ClearMessageBox();

	if( GetMainFrame() == &m_TNet )
	{
		switch(m_TNet.m_dwLevel)
		{
		case ID_FRAME_LOGIN_NEW     : 
			{
				m_TNet.SetLevel(ID_FRAME_LOGIN_NEW);
				m_TNet.EnableComponent(TRUE);
				ReFresh();
			}
			break;
		case ID_FRAME_NEWCHAR_NEW	: SelectNEWTCHAR(); break;
		case ID_FRAME_CHAR_NEW		: SelectCHAR(); break;
		}
	}

	if( bCloseAll )
	{
		ClearMsgBoxStackForced();
	}
	else
	{
		if(!m_MsgBoxStack.empty())
			m_MsgBoxStack.pop();

		if( m_MsgBoxStack.empty() == false )
		{
			TMESSAGEBOX MsgBox = m_MsgBoxStack.top();

			MessageBox(
				MsgBox.strMSG,
				MsgBox.strEditTitle,
				MsgBox.strEditText,
				MsgBox.dwYesTextID,
				MsgBox.dwNoTextID,
				MsgBox.dwFrameID,
				MsgBox.vYesID,
				MsgBox.vNoID,
				MsgBox.vIgnoreID,
				MsgBox.bEdit,
				MsgBox.bModal,
				MsgBox.strTitle,
				MsgBox.dwImageIndex,
				MsgBox.strImageTitle,
				MsgBox.dwSound,
				MsgBox.bSoundType,
				TMSGBOXOPEN_OVERLAP,
				FALSE);
		}
	}
}

void CTClientWnd::DoModalFrame(BYTE bFrameID)
{
	if( m_bModalFrame == (BYTE)T_INVALID )
	{
		m_MainGame.EnableUI(bFrameID);
		m_bModalFrame = bFrameID;
		m_pMainFrameBak = m_pMainFrame;
		m_pMainFrame = m_MainGame.m_vTFRAME[bFrameID];
	}
}

void CTClientWnd::CloseModalFrame()
{
	if( m_bModalFrame != (BYTE)T_INVALID )
	{
		m_MainGame.DisableUI(m_bModalFrame);
		SetMainFrame( m_pMainFrameBak);
		m_pMainFrameBak = NULL;
		m_bModalFrame = T_INVALID;
	}
}

TFrame* CTClientWnd::GetCurrentFrame()
{
	return m_pMainFrame;
}

BOOL CTClientWnd::SetGamma(float fGamma, int nOverBright, float fContrast)
{
    WORD wRamp[3*256];
    float f;
	   
	CDC* pDC = GetDC();
	HDC hDC = pDC->GetSafeHdc();

    if( !GetDeviceGammaRamp(hDC, wRamp) )
		return FALSE;
	   
    for ( int i=0; i<256; ++i )
	{
        f = (float)(255 * pow((float)i/256, 1/fGamma));
        f = f * fContrast + nOverBright;
        if (f < 0)
            f = 0;
        if (f > 255)
            f = 255;
       
		wRamp[i+0] = wRamp[i+256] = wRamp[i+512] = ((WORD)f)<<8;
    }
	   
    return SetDeviceGammaRamp(hDC, wRamp);
}

void CTClientWnd::OnSysKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CTachyonWnd::OnKeyDown( nChar, nRepCnt, nFlags);
}

void CTClientWnd::OnSysKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CTachyonWnd::OnKeyUp( nChar, nRepCnt, nFlags);
}

void CTClientWnd::OnKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CTachyonWnd::OnKeyDown( nChar, nRepCnt, nFlags);
}

void CTClientWnd::OnKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CTachyonWnd::OnKeyUp( nChar, nRepCnt, nFlags);
}

void CTClientWnd::OnChar( UINT nChar, UINT nRepCnt, UINT nFlags)
{
	CTachyonWnd::OnChar(nChar, nRepCnt, nFlags);
}

void CTClientWnd::OnLButtonDown( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnLButtonDown(nFlags, point);

	CTachyonWnd::OnLButtonDown(nFlags, point);
}

void CTClientWnd::OnLButtonUp( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnLButtonUp(nFlags, point);
	SetCursor();

	CTachyonWnd::OnLButtonUp(nFlags, point);
}

void CTClientWnd::OnMButtonDown( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnMButtonDown(nFlags, point);

	CTachyonWnd::OnMButtonDown(nFlags, point);
}

void CTClientWnd::OnMButtonUp( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnMButtonUp(nFlags, point);

	CTachyonWnd::OnMButtonUp(nFlags, point);
}

void CTClientWnd::OnRButtonDown( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnRButtonDown(nFlags, point);

	CTachyonWnd::OnRButtonDown(nFlags, point);
}

void CTClientWnd::OnRButtonUp( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnRButtonUp(nFlags, point);
	SetCursor();

	CTachyonWnd::OnRButtonUp(nFlags, point);
}

void CTClientWnd::OnRButtonDblClk( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnRButtonDblClk(nFlags, point);

	CTachyonWnd::OnRButtonDblClk(nFlags, point);
}

void CTClientWnd::OnMButtonDblClk( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnMButtonDown(nFlags, point);

	CTachyonWnd::OnMButtonDblClk(nFlags, point);
}

void CTClientWnd::OnLButtonDblClk( UINT nFlags, CPoint point)
{
	if(m_pMainFrame)
		m_pMainFrame->OnLButtonDblClk(nFlags, point);

	CTachyonWnd::OnLButtonDblClk(nFlags, point);
}

BOOL CTClientWnd::OnMouseWheel( UINT nFlags, short zDelta, CPoint pt)
{
	if(m_pMainFrame)
	{
		ScreenToClient(&pt);
		return m_pMainFrame->DoMouseWheel( nFlags, zDelta, pt);
	}

	return CTachyonWnd::OnMouseWheel( nFlags, zDelta, pt);
}

void CTClientWnd::ReFresh()
{
	if(m_pMainFrame)
	{
		CPoint point;

		GetCursorPos(&point);
		ScreenToClient(&point);

		m_pMainFrame->OnMouseMove( 0, point);
	}
}

void CTClientWnd::ReleaseTCHARINFO()
{
	while(!m_vTCHARINFO.empty())
	{
		delete m_vTCHARINFO.back();
		m_vTCHARINFO.pop_back();
	}
}

void CTClientWnd::SelectCONTRY()
{
}

void CTClientWnd::SelectNEWTCHAR()
{
	TFrame *pFRAME = m_TNet.FindFrame(ID_FRAME_NEWCHAR_NEW);

	TButton* pMAN = (TButton*) pFRAME->FindKid(ID_CTRLINST_SEX_SEL_M);
	pMAN->Select( (BOOL) (m_vNEWTCHAR.m_bSex == TSEX_MAN) );

	TButton* pWOMAN = (TButton*) pFRAME->FindKid(ID_CTRLINST_SEX_SEL_W);
	pWOMAN->Select( (BOOL) (m_vNEWTCHAR.m_bSex == TSEX_WOMAN) );

	TComponent *pFACETYPE = pFRAME->FindKid(ID_CTRLINST_TEXT_FACE);
	pFACETYPE->m_strText = CTChart::Format( TSTR_FMT_CHARTYPE, 'A'+m_vNEWTCHAR.m_bFace);

	TComponent *pHAIRTYPE = pFRAME->FindKid(ID_CTRLINST_TEXT_HAIRCOLOR);
	pHAIRTYPE->m_strText = CTChart::Format( TSTR_FMT_CHARTYPE, 'A'+m_vNEWTCHAR.m_bHair);

	TComponent *pCLASSNAME = pFRAME->FindKid(ID_CTRLINST_TEXT_CLASS_NAME);
	pCLASSNAME->m_strText = CTChart::LoadString( (TSTRING) CTClientGame::m_vTCLASSSTR[m_vNEWTCHAR.m_bClass]);

	if( m_TNet.m_pCLASSTEXTPOPUP )
		m_TNet.m_pCLASSTEXTPOPUP->SetText( CTChart::GetTCLASSINFO( m_vNEWTCHAR.m_bClass ) );

	TImageList *pCLASSIMG = (TImageList*)pFRAME->FindKid(ID_CTRLINST_ICON_CLASS);
	pCLASSIMG->SetCurImage( m_vNEWTCHAR.m_bClass );

	TComponent *pRACENAME = pFRAME->FindKid(ID_CTRLINST_TEXT_RACE_NAME);
	pRACENAME->m_strText = CTChart::LoadString( (TSTRING) CTClientGame::m_vTRACESTR[m_vNEWTCHAR.m_bRace]);

	if( m_TNet.m_pRACETEXTPOPUP )
		m_TNet.m_pRACETEXTPOPUP->SetText( CTChart::GetTRACEINFO( m_vNEWTCHAR.m_bRace ) );

	TImageList *pRACEIMG = (TImageList*)pFRAME->FindKid(ID_CTRLINST_ICON_RACE);
	pRACEIMG->SetCurImage( m_vNEWTCHAR.m_bRace );

	BYTE bOrgRace = m_vNEWTCHAR.m_bRace;


	m_vNEWTCHAR.m_bRace = TRACE_HUMAN;
	EquipStartChar(&m_vNEWTCHAR);
	m_TNet.InitMODEL(&m_vNEWTCHAR, 0);

	m_vNEWTCHAR.m_bRace = TRACE_BEAST;
	EquipStartChar(&m_vNEWTCHAR);
	m_TNet.InitMODEL(&m_vNEWTCHAR, 1);

	m_vNEWTCHAR.m_bRace = TRACE_NYMPH;
	EquipStartChar(&m_vNEWTCHAR);
	m_TNet.InitMODEL(&m_vNEWTCHAR, 2);

	m_vNEWTCHAR.m_bRace = bOrgRace;

	m_TNet.CalcModelLocal( 3 );
	m_TNet.m_nModelCount = 3;
}

void CTClientWnd::SelectCHAR()
{
	TFrame *pFRAME = m_TNet.FindFrame( ID_FRAME_CHAR_NEW );
	pFRAME->SetFocus( ID_CTRLINST_START );

	TComponent* pNAME = pFRAME->FindKid( ID_CTRLINST_NAME0 );
	TComponent* pLOC = pFRAME->FindKid( ID_CTRLINST_LOC0 );
	TComponent* pLV = pFRAME->FindKid( ID_CTRLINST_LVL0 );
	TImageList* pCLASS = (TImageList*) pFRAME->FindKid( ID_CTRLINST_CLASS0 );
	TImageList* pCOUNTRY = (TImageList*) pFRAME->FindKid( ID_CTRLINST_COUNTRY );  
	TComponent* pSERVER_NAME = pFRAME->FindKid(ID_CTRLINST_SERVER_NAME);
	TComponent* pCOUNTRY_NAME = pFRAME->FindKid( ID_CTRLINST_COUNTRY_NAME );

	static DWORD NewServer[6] =
	{
		ID_SERVERS_GROUP,
		ID_CTRLINST_SERVER_COMP1,
		ID_CTRLINST_SERVER_COMP2,
		ID_CTRLINST_SERVER_COMP3,
		ID_CTRLINST_SERVER_COMP4,
		ID_CTRLINST_CHAR_SERVER_IMAGE
	};

	for (int i = 0; i < 6; i++)
	{
		TComponent* pNewServer = pFRAME->FindKid(NewServer[i]);
		pNewServer->ShowComponent(FALSE);
	}

	if( m_bSlotID < m_vTCHARINFO.size() )
	{
		pNAME->m_strText = m_vTCHARINFO[ m_bSlotID ]->m_strNAME;

		if( m_vTCHARINFO[ m_bSlotID ]->m_pTREGION )
			pLOC->m_strText = m_vTCHARINFO[ m_bSlotID ]->m_pTREGION->m_strNAME;
		else
			pLOC->m_strText.Empty();

		pLV->m_strText = CTChart::Format( TSTR_FMT_LEVEL_IN_LOBY, m_vTCHARINFO[ m_bSlotID ]->m_bLevel );
		pCLASS->SetCurImage( m_vTCHARINFO[ m_bSlotID ]->m_bClass );

		switch( m_vTCHARINFO[ m_bSlotID ]->m_bContry )
		{
		case TCONTRY_D:
		case TCONTRY_C:
		case TCONTRY_B:
		case TCONTRY_PEACE:
			{//KOKOT
				pCOUNTRY->SetCurImage( m_vTCHARINFO[ m_bSlotID ]->m_bContry );
				pCOUNTRY_NAME->m_strText = CTChart::LoadString( (TSTRING) CTClientGame::m_vTCOUNTRYSTR[ m_vTCHARINFO[ m_bSlotID ]->m_bContry ] );
			}
			break;

		default:
			pCOUNTRY->SetCurImage( -1 );
			pCOUNTRY_NAME->m_strText.Empty();
			break;
		}
	}
	else
	{
		pNAME->m_strText.Empty();
		pLOC->m_strText.Empty();
		pLV->m_strText.Empty();
		pCLASS->SetCurImage( 6 );
		pCOUNTRY->SetCurImage( -1 );
		pCOUNTRY_NAME->m_strText.Empty();
	}
}

CTClientSession *CTClientWnd::GetIdleSession()
{
	for( BYTE i=1; i<MAX_CON; i++)
		if( m_session[i].m_bSVR == SVR_NONE )
			return &m_session[i];

	return NULL;
}

DWORD CTClientWnd::GetTClientTickCount()
{
	return GetTickCount() - CTClientApp::m_dwAppTick;
}

void CTClientWnd::LoadingIMG()
{
	TComponent *pFRAME = GetMainFrame();

	while( pFRAME && pFRAME->GetParent() )
		pFRAME = pFRAME->GetParent();

	//if( pFRAME != &m_TNet )
	SetMainFrame(&m_TNet);

	m_TNet.SetLevel(ID_FRAME_LOADING);
	m_TNet.m_bROT = FALSE;
	ReFresh();
}

void CTClientWnd::ExitGame()
{
	TComponent *pFRAME = GetMainFrame();

	while( pFRAME && pFRAME->GetParent() )
		pFRAME = pFRAME->GetParent();

	if( pFRAME != &m_TNet )
	{
		m_MainGame.m_dwLeftTickEXIT = TSELECT_EXITGAME_DELAY;
		m_MainGame.m_bDoEXIT = TRUE;
		m_MainGame.StopMoveMainChar();

		MessageBoxOK(
			TSTR_MBOX_CANCELQUIT,
			TSTR_CANCEL,
			GM_CLOSE_CANCELQUIT,
			0 );

		m_MainGame.m_pMainChar->CancelMaintainByFunction( &m_MainGame, CTClientGame::m_dwReleaseMaintainFunctionWhenGameOut, sizeof(CTClientGame::m_dwReleaseMaintainFunctionWhenGameOut)/sizeof(DWORD) );
	}
	else
		m_vCOMMAND.push_back(GM_EXIT);
}

void CTClientWnd::EquipStartChar(LPTCHARINFO pINFO)
{
	if( !pINFO )
		return ;

	DWORD dwKey = ( pINFO->m_bContry * 128 ) + ( pINFO->m_bSex * 64 ) + pINFO->m_bClass;
	LPTEQUIPCREATECHAR pTEquip = CTChart::FindTEquipCreateChar( dwKey );
	pINFO->m_vEQUIP.ClearInven();
	if( pTEquip )
	{
		static BYTE bEQUIPSLOT[TEQUIPCREATECHAR::TE_COUNT] =
		{
			ES_PRMWEAPON,
				ES_SNDWEAPON,
				ES_LONGWEAPON,
				ES_HEAD,
				ES_BODY,
				ES_PANTS,
				ES_HAND,
				ES_FOOT,
				ES_BACK
		};

		size_t i = 0;
		for( ; i < TEQUIPCREATECHAR::TE_COUNT; ++i )
		{
			if( pTEquip->m_wItemID[i] )
			{
				CTClientItem* pItem = new CTClientItem();
				pItem->SetItemID( pTEquip->m_wItemID[i] );
				pItem->SetGrade( (BYTE)pTEquip->m_wGrade[i] );
				pItem->SetGradeEffect( pTEquip->m_bGradeEffect[i] );
				pItem->SetItemSlot( bEQUIPSLOT[i] );

				pINFO->m_vEQUIP.m_mapTITEM.insert( make_pair( pItem->GetItemSlot(), pItem ) );
			}
		}
	}
}

LRESULT CTClientWnd::OnOBJMessage( WPARAM wParam, LPARAM lParam)
{
	return m_MainGame.OnOBJMsg((LPOBJMSG) wParam);
}

TFrame *CTClientWnd::GetTMainFrame()
{
	return GetMainFrame();
}

BOOL CTClientWnd::ResetDevices()
{
	CTClientApp *pTAPP = (CTClientApp *) AfxGetApp();

	EnterCriticalSection(&pTAPP->m_cs);
	m_bResetDevice = TRUE;
	LeaveCriticalSection(&pTAPP->m_cs);

	WaitForSingleObject(
		m_hResetEvent,
		INFINITE);

	return TRUE;
}

BYTE CTClientWnd::RestoreDevice()
{
	if(CTMinimapDlg::m_pTMINIMAP)
	{
		CTMinimapDlg::m_pTMINIMAP->Release();
		CTMinimapDlg::m_pTMINIMAP = NULL;
	}

	if(CTRSCSDlg::m_pTBACK)
	{
		CTRSCSDlg::m_pTBACK->Release();
		CTRSCSDlg::m_pTBACK = NULL;
	}

	if(CTRSCSDlg::m_pTRSCS)
	{
		CTRSCSDlg::m_pTRSCS->Release();
		CTRSCSDlg::m_pTRSCS = NULL;
	}

	CTDynamicBillboard::DeleteForRestore();
	CTClientGuildMark::MRelease();
	CBattleRankTex::Reset();


		

	CTClientGuildMark::OnDeviceReset(TRUE);


#ifdef ADD_TEXTOOL
	static_cast<CTexTool*>( m_MainGame.GetFrame(TFRAME_TEXTOOL) )->OnDeviceReset(TRUE);
#endif

	m_MainGame.OnLostDevice();

	if(m_MainGame.m_vMAP.m_pMAP)
		m_MainGame.m_vMAP.m_pMAP->DeleteForRestore();

	while( m_Device.m_pD3D && m_Device.m_pDevice )
		if(m_Device.Reset())
			break;

	for( int i=0; i<TLIGHT_COUNT; i++)
	{
		m_MainGame.m_vLIGHT[i].SetLight(&m_MainGame.m_vLIGHT[i].m_Light);
		m_MainGame.m_vLIGHT[i].EnableLight();
	}

	InitCommonConst();


	if(m_MainGame.m_vMAP.m_pMAP)
		m_MainGame.m_vMAP.m_pMAP->Restore( &m_Device, &m_Camera);

	D3DXCreateTexture(
		m_Device.m_pDevice,
		TMINIMAPTEX_SIZE,
		TMINIMAPTEX_SIZE, 1,
		D3DUSAGE_RENDERTARGET,
		D3DFMT_A8R8G8B8,
		D3DPOOL_DEFAULT,
		&CTMinimapDlg::m_pTMINIMAP);

	D3DXCreateTexture(
		m_Device.m_pDevice,
		TMINIMAPTEX_SIZE,
		TMINIMAPTEX_SIZE, 1,
		D3DUSAGE_RENDERTARGET,
		D3DFMT_A8R8G8B8,
		D3DPOOL_DEFAULT,
		&CTRSCSDlg::m_pTBACK);

	D3DXCreateTexture(
		m_Device.m_pDevice,
		TMINIMAPTEX_SIZE,
		TMINIMAPTEX_SIZE, 1,
		D3DUSAGE_RENDERTARGET,
		D3DFMT_A8R8G8B8,
		D3DPOOL_DEFAULT,
		&CTRSCSDlg::m_pTRSCS);

	CTDynamicBillboard::Restore(&m_Device);
	CTClientGuildMark::OnDeviceReset(FALSE);

#ifdef ADD_TEXTOOL
	static_cast<CTexTool*>( m_MainGame.GetFrame(TFRAME_TEXTOOL) )->OnDeviceReset( FALSE );
#endif

	if(m_bResetDevice)
		SetEvent(m_hResetEvent);

	m_bResetDevice = FALSE;
	m_bResetTick = TRUE;

	m_MainGame.m_bCanRender = FALSE;

	return TRUE;
}

void CTClientWnd::ResetTOption()
{






















































































	static TOPTION vDEFAULT_NORMAL[ TOPTIONLEVEL_COUNT ] = {
		TOPTION(		// TOPTIONLEVEL_LOW
		TDETAIL_LOW,	// m_bMapDETAIL
		TDETAIL_MED,	// m_bObjDETAIL
		TRUE,			// m_bMapSHADOW
		TRUE,			// m_bObjSHADOW
		FALSE,			// m_bMapSFX
		TRUE,			// m_bNpcNAME
		TRUE,			// m_bMonNAME
		TRUE,			// m_bPcNAME
		FALSE,			// m_bDungeonLIGHTMAP
		FALSE,			// m_bFieldLIGHTMAP
		FALSE,			// m_bFarIMAGE
#ifdef NEW_IF
		TRUE,
#else
		TRUE,			// m_bHUD
#endif
		TRUE,			// m_bAutoHelp
		TRUE,			// m_bTalkBox
		FALSE,			// m_bDenyWhisper
		FALSE,			// m_bDenyCommunity
		FALSE,			// m_bContinualChat
		TRUE,				// m_bMouseClickMove
		0.7f, // m_fOBJRange
		TRUE, // m_bShowCaution15
		TRUE, // m_bAutoTargeting
		FALSE, //m_bDisableDoubleSkill
		FALSE, //m_bDontShowOtherCompanions
		FALSE, //m_bHideTournament
		FALSE, //m_bHideArena
		FALSE, //m_bHideDuel
		FALSE, //m_bDisableAutoSelectSFX
		FALSE //m_bDisableChatTransparency
		),			

		TOPTION(		// TOPTIONLEVEL_MED
		TDETAIL_MED,	// m_bMapDETAIL
		TDETAIL_HI,		// m_bObjDETAIL
		TRUE,			// m_bMapSHADOW
		TRUE,			// m_bObjSHADOW
		FALSE,			// m_bMapSFX
		TRUE,			// m_bNpcNAME
		TRUE,			// m_bMonNAME
		TRUE,			// m_bPcNAME
		TRUE,			// m_bDungeonLIGHTMAP
		FALSE,			// m_bFieldLIGHTMAP
		TRUE,			// m_bFarIMAGE
#ifdef NEW_IF
		TRUE,
#else
		TRUE,			// m_bHUD
#endif
		TRUE,			// m_bAutoHelp
		TRUE,			// m_bTalkBox
		FALSE,			// m_bDenyWhisper
		FALSE,			// m_bDenyCommunity
		FALSE,			// m_bContinualChat
		TRUE,				// m_bMouseClickMove
		0.75f, // m_fOBJRange
		TRUE, // m_bShowCaution15
		TRUE, // m_bAutoTargeting
		FALSE, //m_bDisableDoubleSkill
		FALSE, //m_bDontShowOtherCompanions
		FALSE, //m_bHidetournament
		FALSE, //m_bHideArena
		FALSE, //m_bHideDuel
		FALSE, //m_bDisableAutoSelectSFX
		FALSE //m_bDisableChatTransparency
		),			

		TOPTION(		// TOPTIONLEVEL_HI
		TDETAIL_MED,	// m_bMapDETAIL
		TDETAIL_HI,		// m_bObjDETAIL
		TRUE,			// m_bMapSHADOW
		TRUE,			// m_bObjSHADOW
		TRUE,			// m_bMapSFX
		TRUE,			// m_bNpcNAME
		TRUE,			// m_bMonNAME
		TRUE,			// m_bPcNAME
		TRUE,			// m_bDungeonLIGHTMAP
		FALSE,			// m_bFieldLIGHTMAP
		TRUE,			// m_bFarIMAGE
#ifdef NEW_IF
		TRUE,
#else
		TRUE,			// m_bHUD
#endif
		TRUE,			// m_bAutoHelp
		TRUE,			// m_bTalkBox
		FALSE,			// m_bDenyWhisper
		FALSE,			// m_bDenyCommunity
		FALSE,			// m_bContinualChat
		TRUE,				// m_bMouseClickMove
		0.8f, // m_fOBJRange
		TRUE, // m_bShowCaution15
		TRUE, // m_bAutoTargeting
		FALSE, //m_bDisableDoubleSkill
		FALSE, //m_bDontShowOtherCompanions
		FALSE, //m_bHideTournament
		FALSE, //m_bHideArena
		FALSE, //m_bHideDuel
		FALSE, //m_bDisableAutoSelectSFX
		FALSE //m_bDisableChatTransparency
		)
	};			

	TOPTION* vDEFAULT = NULL;
	vDEFAULT = vDEFAULT_NORMAL;

	CTachyonMedia::m_bMasterVolume = 75;
	CT3DMusic::m_bMasterVolume = 25;
	CD3DSound::m_bMasterVolume = 75;

	if( m_Device.m_lSYSMEM >= 1000000000 && m_Device.m_lVIDEOMEM >= 256 )
		memcpy( &m_MainGame.m_vTOPTION, &vDEFAULT[TOPTIONLEVEL_HI], sizeof(TOPTION));
	else if( m_Device.m_lSYSMEM < 1000000000 && m_Device.m_lVIDEOMEM < 256 )
		memcpy( &m_MainGame.m_vTOPTION, &vDEFAULT[TOPTIONLEVEL_LOW], sizeof(TOPTION));
	else
		memcpy( &m_MainGame.m_vTOPTION, &vDEFAULT[TOPTIONLEVEL_MED], sizeof(TOPTION));
}

BOOL CTClientWnd::OnSetCursor( CWnd* pWnd, UINT nHitTest, UINT message)
{
	CPoint point;

	GetCursorPos(&point);
	ScreenToClient(&point);

	if( m_MainGame.m_vKEY.m_vSTATE[TKEY_ROT] || m_MainGame.m_vKEY.m_vSTATE[TKEY_CAM_ROT] || m_TNet.m_bROT || m_TNet.m_bCharROT )
		::SetCursor(NULL);
	else if( !m_pMainFrame || !m_pMainFrame->OnSetCursor( pWnd, nHitTest, message, point) )
		SetCursor();

	return CTachyonWnd::OnSetCursor( pWnd, nHitTest, message);
}

void CTClientWnd::SetCursor()
{
	BYTE bCursorID = TCURSOR_HAND;

	if( m_MainGame.m_pHIT &&
		!m_MainGame.m_vTSCENE_PLAYER.IsRunning() &&
		m_pMainFrame == &m_MainGame )
	{
		switch(m_MainGame.m_pHIT->m_bType)
		{
		case OT_NPC			:
			if( (m_MainGame.m_pHIT->m_bContryID == TCONTRY_N || m_MainGame.m_pHIT->m_bContryID == TCONTRY_B) ||
				m_MainGame.m_pMainChar->IsAlliance(m_MainGame.m_pHIT) )
				bCursorID = TCURSOR_TALK;

			break;

		case OT_RECALL		:
		case OT_SELF		:
		case OT_PC			:
			if( !m_MainGame.m_pMainChar->IsAlliance(m_MainGame.m_pHIT) )
				bCursorID = TCURSOR_SWORD;
			else
				bCursorID = TCURSOR_ALLIANCE;

			break;

		case OT_MON			:
			if( !m_MainGame.m_pMainChar->IsAlliance(m_MainGame.m_pHIT) )
			{
				if( m_MainGame.m_pHIT->IsDead() )
					bCursorID = TCURSOR_DEADMON;
				else
					bCursorID = TCURSOR_SWORD;
			}
			else
				bCursorID = TCURSOR_ALLIANCE;
			
			break;

		case OT_SWITCH		: bCursorID = TCURSOR_TALK; break;

		case OT_GODBALL : bCursorID = TCURSOR_TALK; break;
		case OT_GODTOWER : bCursorID = TCURSOR_TALK; break;
		}
	}
	else
	{
		TCURSOR_TYPE eCursorType = TCURSOR_HAND;
		if( m_MainGame.m_pChatFrame &&
			m_MainGame.m_pChatFrame->GetApplyCursor( &eCursorType ) )
			bCursorID = (BYTE) eCursorType;
	}

	::SetCursor(m_vTCURSOR[bCursorID]);
}

BOOL CTClientWnd::IsLoading()
{
	if( GetMainFrame() != &m_TNet )
		return FALSE;

	TFrame* pFRAME = m_TNet.GetCurrentFrame();
	return pFRAME && pFRAME->m_id == ID_FRAME_LOADING;
}

void CTClientWnd::OnAgreementPage()
{
	m_TNet.SetLevel(ID_FRAME_AGREEMENT_NEW);
	ReFresh();

	m_TNet.EnableComponent(TRUE);

	TFrame* pFRAME = m_TNet.GetCurrentFrame();
	TList* pList = static_cast<TList*>( pFRAME->FindKid(ID_CTRLINST_LIST) );

	TComponent* pAgreeBtn = pFRAME->FindKid(ID_CTRLINST_AGREE);
	TComponent* pQuitBtn  = pFRAME->FindKid(ID_CTRLINST_QUIT);

	pAgreeBtn->EnableComponent(FALSE);
	pQuitBtn->EnableComponent(FALSE);

	pAgreeBtn->Get3DFont()->m_dwColor = 0xFF888888;
	pQuitBtn->Get3DFont()->m_dwColor  = 0xFF888888;

	if( !m_bNeedReadAgreement )
	{
		pList->SetCurSelItem(0);
		return;
	}

	CString strFile;
	strFile = CTChart::LoadString( TSTR_FILE_AGREEMENT);

	CFile file;
	if( file.Open( LPCSTR(strFile), CFile::modeRead) == FALSE )
		return;
	
	UINT nLen = (UINT)file.GetLength();
	if( nLen == 0 )
		return; 

	char* pBuf = new char[nLen];
	file.Read(pBuf, nLen);
	pBuf[nLen-1] = NULL;
	file.Close();

	CString strAgr(pBuf);
	delete [] pBuf;

	CSize szITEM;
	pList->GetItemSize(&szITEM);
	szITEM.cx -= 2 * TINFOTEXT_MARGINE;

	int nPos = 0;
	CString strLINE = strAgr.Tokenize( "\n", nPos);

	while(!strLINE.IsEmpty())
	{
		while(!strLINE.IsEmpty())
		{
			CString strMBCS = BuildMBCSInfo(strLINE);
			CString strFORMAT = strLINE;

			CSize szTEXT;
			pList->GetTextExtentPoint( strLINE, szTEXT);

			while( szTEXT.cx > szITEM.cx )
			{
				int nLength = strFORMAT.GetLength() - 1;

				strFORMAT.Delete(nLength);
				nLength--;

				if( nLength >= 0 && IS_MBCS_LEAD(strMBCS.GetAt(nLength)) )
					strFORMAT.Delete(nLength);

				pList->GetTextExtentPoint( LPCTSTR(strFORMAT), szTEXT);
			}

			int nCount = strLINE.GetLength() - strFORMAT.GetLength();
			if( nCount > 0 )
				strLINE = strLINE.Right(nCount);
			else
				strLINE.Empty();

			pList->AddItem( strFORMAT, 0);
		}

		strLINE = strAgr.Tokenize( "\n", nPos);
	}

	pList->SetCurSelItem(0);
	m_bNeedReadAgreement = FALSE;
}

CString CTClientWnd::CaptureIMG()
{
	static DWORD dwTick = 0;
	static DWORD dwNUM = 0;

	CString strFileName(_T(""));
	CString strFolder;
	CFileFind vFINDER;

	LPTSCRCAPTURE_PARAM pPARAM = new TSCRCAPTURE_PARAM();
	D3DSURFACE_DESC vDESC;

	HANDLE hThread = NULL;
	DWORD dwThread = 0;

	do
	{
		strFileName = CTChart::Format( TSTR_FMT_CAPTURE, dwNUM);
		dwNUM++;
	} while(vFINDER.FindFile(strFileName));

	strFolder = CTChart::LoadString( TSTR_CAPTURE_FOLDER);
	CreateDirectory( strFolder, NULL);

	if( SUCCEEDED(m_Device.m_pRTARGET->GetDesc(&vDESC)) &&
		SUCCEEDED(m_Device.m_pDevice->CreateOffscreenPlainSurface(
		vDESC.Width,
		vDESC.Height,
		vDESC.Format,
		D3DPOOL_SYSTEMMEM,
		&pPARAM->m_pIMAGE,
		NULL)) && pPARAM->m_pIMAGE &&
		SUCCEEDED(m_Device.m_pDevice->GetRenderTargetData(
		m_Device.m_pRTARGET,
		pPARAM->m_pIMAGE)) )
	{
		pPARAM->m_strFileName = strFileName;

		CString strCamera(pPARAM->m_strFileName);
		strCamera += "_Camera.txt";

		/*{
		FILE* fp = fopen( (LPCTSTR) strCamera, "wt");
		if( fp )
		{
		fprintf(fp, "Character %.2f %.2f %.2f\n",
		m_MainGame.GetMainChar()->GetPositionX(),
		m_MainGame.GetMainChar()->GetPositionY(),
		m_MainGame.GetMainChar()->GetPositionZ());

		fprintf(fp, "Character Dir %d %d\n",
		m_MainGame.GetMainChar()->m_nDIR,
		m_MainGame.GetMainChar()->m_wDIR);

		fprintf(fp, "Position %.2f %.2f %.2f\n",
		m_MainGame.GetMainCam()->m_vPosition.x,
		m_MainGame.GetMainCam()->m_vPosition.y,
		m_MainGame.GetMainCam()->m_vPosition.z );

		fprintf(fp, "Target %.2f %.2f %.2f\n",
		m_MainGame.GetMainCam()->m_vTarget.x,
		m_MainGame.GetMainCam()->m_vTarget.y,
		m_MainGame.GetMainCam()->m_vTarget.z );

		fclose(fp);
		}
		}*/

		hThread = ::CreateThread(
			NULL, 0,
			_CaptureIMG,
			(LPVOID) pPARAM,
			0, &dwThread);
	}

	if(!hThread)
	{
		strFileName.Empty();
		delete pPARAM;
	}


	return strFileName;
}

DWORD WINAPI CTClientWnd::_CaptureIMG( LPVOID lpParam)
{
	LPTSCRCAPTURE_PARAM pPARAM = (LPTSCRCAPTURE_PARAM) lpParam;

	if(pPARAM)
	{
		if( !pPARAM->m_strFileName.IsEmpty() && pPARAM->m_pIMAGE )
		{
			D3DXSaveSurfaceToFile(
				pPARAM->m_strFileName,
				D3DXIFF_JPG,
				pPARAM->m_pIMAGE,
				NULL, NULL);
		}

		delete pPARAM;
	}

	return 0;
}

int CTClientWnd::CheckCharID(LPCSTR str)
{
	int l = strlen(str);
	if(0 > l || l > 16) return -1;

	unsigned char* p = (unsigned char *)str;
	unsigned char* e = (unsigned char *)(str+l);

	if( CTNationOption::GERMANY || CTNationOption::FRANCE || CTNationOption::POLAND ||
		CTNationOption::CZECH || CTNationOption::ITALY || CTNationOption::SPAIN || 
		CTNationOption::UNITEDKINGDOM || CTNationOption::GREECE || CTNationOption::ROMANIA ||
		CTNationOption::UNITEDSTATE || CTNationOption::HUNGARY || CTNationOption::TURKEY || 
		CTNationOption::PORTUGAL )
	{
		while(p < e)
		{
			if('0' <= *p && *p <= '9') 
				++p;				
			else if('a' <= *p && *p <= 'z') 
				++p;	
			else if('A' <= *p && *p <= 'Z') 
				++p;
			else if( (*p == 220) ||
					(*p == 214) ||
					(*p == 196) ||
					(*p == 252) ||
					(*p == 246) ||
					(*p == 228) ||
					(*p == 223) )
				++p;
			else 
				return -2;
		}
	}
	else if( CTNationOption::ENGLISH )
	{
		while(p < e)
		{
			if('0' <= *p && *p <= '9') 
				++p;				
			else if('a' <= *p && *p <= 'z') 
				++p;	
			else if('A' <= *p && *p <= 'Z') 
				++p;
			else
				return -2;
		}
	}
	else if( CTNationOption::JAPAN )
	{
		while(p < e)
		{
			if( 0xA6 <= *p && *p <= 0xDD )
			{
				p += 1;
				continue;
			}
			else if(p+1 < e && 0x80 <= *p)
			{
				if( *p == 0x81 && *(p+1) == 0x5B )
				{
					p += 2;
				}
				else if( *p == 0x82 )
				{
					p += 2;
				}
				else if( *p == 0x83 )
				{
					if( 0x40 <= *(p+1) && *(p+1) <= 0x96 )
						p += 2;
					else
						return -3;
				}
				else if( 0x88 <= *p && *p <= 0xFC )
				{
					p += 2;
				}
				else
					return -3;
			}
			else
			{
				if('0' <= *p && *p <= '9') 
					++p;				
				else if('a' <= *p && *p <= 'z') 
					++p;	
				else if('A' <= *p && *p <= 'Z') 
					++p;	
				else 
					return -2;
			}
		}
	}
	else if ( CTNationOption::TAIWAN )
	{
		while(p < e)
		{
			if( (0xA1 <= *p) && (*p <= 0xF9) && (p+1 < e)  )
			{
				if ( (0xA1 <= *p && *p <= 0xC5) || (0xC9 <= *p && *p <= 0xF8) )
				{
					if ( (0x40 <= *(p+1) && *(p+1) <= 0x7E) || (0xA1 <= *(p+1) && *(p+1) <= 0xFE) )
						p += 2;
					else
						return -2;
				}
				else if ( *p == 0xC6 )
				{
					if ( 0x40 <= *(p+1) && *(p+1) <= 0x7E )
						p += 2;
					else 
						return -2;
				}
				else if ( *p == 0xF9 )
				{
					if ( (0x40 <= *(p+1) && *(p+1) <= 0x7E) || (0xA1 <= *(p+1) && *(p+1) <= 0xDC) )
						p += 2;
					else
						return -2;
				}

			}
			else
			{
				if('0' <= *p && *p <= '9') 
					++p;				
				else if('a' <= *p && *p <= 'z') 
					++p;	
				else if('A' <= *p && *p <= 'Z') 
					++p;	
				else 
					return -2;
			}
		}
	}
	else if ( CTNationOption::RUSSIA )
	{
		enum _LOCTYPE
		{
			E_FIRSTTYPE,
			E_RUSSIAN,
			E_ENGLISH
		};

		_LOCTYPE eLocType = E_FIRSTTYPE;

		while(p < e)
		{
			if( '0' <= *p && *p <= '9' )
			{
				++p;
			}
			else if( ('a' <= *p && *p <= 'z') ||
				('A' <= *p && *p <= 'Z') )
			{
				if( eLocType == E_FIRSTTYPE )
					eLocType = E_ENGLISH;
				else if( eLocType == E_RUSSIAN )
					return -2;

				++p;
			}
			else if( (0xC0 <= *p && *p <= 0xFF) ||
				0xA8 == *p || 0xB8 == *p )
			{
				if( eLocType == E_FIRSTTYPE )
					eLocType = E_RUSSIAN;
				else if( eLocType == E_ENGLISH )
					return -2;

				++p;
			}
			else
				return -2;
		}
	}
	else
	{
		while(p < e)
		{
			if(p+1 < e && 0x80 <= *p)
			{
				if(0xB0 <= *p && *p <= 0xC8 && 0xA1 <= *(p+1) && *(p+1) <= 0xFE)
					p += 2;	
				else
					return -3;
			}
			else
			{
				if('0' <= *p && *p <= '9') 
					++p;				
				else if('a' <= *p && *p <= 'z') 
					++p;	
				else if('A' <= *p && *p <= 'Z') 
					++p;	
				else 
					return -2;
			} 
		}
	}

	return 1;
}

int CTClientWnd::CheckComment( LPCSTR str)
{
	int l = strlen(str);

	unsigned char* p = (unsigned char *)str;
	unsigned char* e = (unsigned char *)(str+l);

	if( CTNationOption::GERMANY || CTNationOption::FRANCE || CTNationOption::POLAND || 
		CTNationOption::CZECH || CTNationOption::ITALY || CTNationOption::SPAIN || 
		CTNationOption::UNITEDKINGDOM || CTNationOption::GREECE || CTNationOption::ROMANIA ||
		CTNationOption::UNITEDSTATE || CTNationOption::HUNGARY || CTNationOption::TURKEY ||
		CTNationOption::PORTUGAL )
	{
		while(p < e)
		{
			if('0' <= *p && *p <= '9') 
				++p;				
			else if('a' <= *p && *p <= 'z') 
				++p;	
			else if('A' <= *p && *p <= 'Z') 
				++p;
			else if( (*p == 220) ||
					(*p == 214) ||
					(*p == 196) ||
					(*p == 252) ||
					(*p == 246) ||
					(*p == 228) ||
					(*p == 223) )
				++p;
			else if( *p = ' ' )
				++p;
			else 
				return -2;
		}
	}
	else if( CTNationOption::ENGLISH )
	{
		while(p < e)
		{
			if('0' <= *p && *p <= '9') 
				++p;				
			else if('a' <= *p && *p <= 'z') 
				++p;	
			else if('A' <= *p && *p <= 'Z') 
				++p;
			else if( *p = ' ' )
				++p;
			else
				return -2;
		}
	}
	else if( CTNationOption::JAPAN )
	{
		while(p < e)
		{
			if( 0xA6 <= *p && *p <= 0xDD )
			{
				p += 1;
				continue;
			}
			else if(p+1 < e && 0x80 <= *p)
			{
				if( *p == 0x81 && *(p+1) == 0x5B )
				{
					p += 2;
				}
				else if( *p == 0x82 )
				{
					p += 2;
				}
				else if( *p == 0x83 )
				{
					if( 0x40 <= *(p+1) && *(p+1) <= 0x96 )
						p += 2;
					else
						return -3;
				}
				else if( 0x88 <= *p && *p <= 0xFC )
				{
					p += 2;
				}
				else
					return -3;
			}
			else
			{
				if('0' <= *p && *p <= '9') 
					++p;				
				else if('a' <= *p && *p <= 'z') 
					++p;	
				else if('A' <= *p && *p <= 'Z') 
					++p;	
				else if( *p = ' ' )
					++p;
				else 
					return -2;
			} 
		}
	}
	else
	{
		while(p < e)
		{
			if(p+1 < e && 0x80 <= *p)
			{
				p += 2;	
			}
			else
			{
				if('0' <= *p && *p <= '9') 
					++p;				
				else if('a' <= *p && *p <= 'z') 
					++p;	
				else if('A' <= *p && *p <= 'Z') 
					++p;
				else if( *p = ' ' )
					++p;
				else 
					return -2;
			} 
		}
	}

	return 1;
}
















































/*void CTClientWnd::CheckInvalidUser(const CString& strUserID)
{
	static BOOL bNeedChk = TRUE;

	if( !bNeedChk )
		return;

	bNeedChk = FALSE;

	VECTORSTRING vDoubtProcs;
	if( CheckProcess(&vDoubtProcs) )
		return;

	CString strSubject;
	strSubject = "Warning : (" + strUserID + ") is using the hack application.";

	CString strText = "User id : " + strUserID + "\n";
	strText += "Doubt process : ";
	for(INT i=0; i<INT(vDoubtProcs.size()); ++i)
		strText += vDoubtProcs[i] + " ";
	
	strText += "  ";

	CTMailSender MailSender;
	MailSender.SetMailServer("mail.zemiinc.co.kr");
	MailSender.SetSender("none", (LPCSTR)strUserID);
	MailSender.SetReceiver("4sbug@zemiinc.co.kr", "4sbug");
	MailSender.SetSubject((LPCSTR)strSubject);
	MailSender.SetMessage((LPCSTR)strText);
	MailSender.SendMail();
}*/


void CTClientWnd::OpenSecurityWindow()
{
	if( (IsMsgBoxVisible() || m_bModalFrame != (BYTE)(T_INVALID)) )
		return;
	
	TMESSAGEBOX MsgBox;
	m_MsgBoxStack.push(MsgBox);

	TFrame *pFRAME = m_MessageBox.FindFrame(1300);
	CRect rect;




	TEdit* pCode = (TEdit*) pFRAME->FindKid(27428);
	TButton* pConfirm = (TButton*) pFRAME->FindKid(26196);
	TButton* pCancel = (TButton*) pFRAME->FindKid(22);

	pConfirm->m_menu[TNM_LCLICK] = GM_SECURITY_CONFIRM;
	pFRAME->m_menu[TNM_ENTER] = GM_SECURITY_CONFIRM;
	pCancel->m_menu[TNM_LCLICK] = GM_CLOSE_MSGBOX;
	pFRAME->m_menu[TNM_ESC] = GM_CLOSE_MSGBOX;

	m_MessageBox.SetLevel(1300);
	m_MessageBox.SetParent( GetMainFrame() );

	SetMainFrame(&m_MessageBox);

	pFRAME->GetComponentRect(&rect);
	rect.OffsetRect(
		(m_Device.m_option.m_dwScreenX - rect.Width()) / 2 - rect.left,
		(m_Device.m_option.m_dwScreenY - rect.Height()) / 2 - rect.top);

	m_MessageBox.MoveComponent(CPoint( 0, 0));
	pFRAME->MoveComponent(rect.TopLeft());
	pFRAME->EnableComponent(TRUE);

	pFRAME->SwitchFocus(pCode);
	pCode->SetFocus(TRUE);





































	ReFresh();
} 

DWORD CTClientWnd::LoadThread()
{
	if( CTNationOption::GERMANY )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_GERMAN, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::GREECE )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_GREEK, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if( CTNationOption::ENGLISH )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_ENGLISH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if( CTNationOption::JAPAN )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_JAPANESE, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::FRANCE )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_FRENCH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::TAIWAN )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_CHINESE, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::CZECH )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_CZECH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::ITALY )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_ITALIAN, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::POLAND )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_POLISH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::SPAIN )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_SPANISH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::UNITEDKINGDOM || CTNationOption::UNITEDSTATE )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_ENGLISH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::RUSSIA )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_RUSSIAN, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::ROMANIA )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_ROMANIAN, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::HUNGARY )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_HUNGARIAN, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::TURKEY )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_TURKISH, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else if ( CTNationOption::PORTUGAL )
	{
		SetThreadLocale( MAKELCID( MAKELANGID(LANG_PORTUGUESE, SUBLANG_DEFAULT) , SORT_DEFAULT ) );
	}
	else
	{
	}

	CTClientApp *pTAPP = (CTClientApp *) AfxGetApp();

	while(TRUE)
	{
		EnterCriticalSection(&pTAPP->m_cs);

		if(!pTAPP->m_qTLOADCMD.empty())
		{
			LPTLOADCMD pTCMD = pTAPP->m_qTLOADCMD.front();
			pTAPP->m_qTLOADCMD.pop();
			pTAPP->m_bWait = FALSE;
			LeaveCriticalSection(&pTAPP->m_cs);

			ProcLoadCMD( pTAPP, pTCMD);
			pTAPP->DeleteTLoadCMD(pTCMD);
		}
		else if(pTAPP->m_bLoadRun)
		{
			pTAPP->m_bWait = TRUE;
			LeaveCriticalSection(&pTAPP->m_cs);

			WaitForSingleObject(
				pTAPP->m_hLoadEvent,
				INFINITE);
		}
		else
		{
			LeaveCriticalSection(&pTAPP->m_cs);
			break;
		}
	}

	return 0;
}

void CTClientWnd::ProcLoadCMD( CTClientApp *pTAPP,
							   LPTLOADCMD pTCMD)
{
	switch(pTCMD->m_dwTCMD)
	{
	case TLOADCMD_OBJ	: m_MainGame.DoTLOADCMD_OBJ( pTAPP, pTCMD); break;
	case TLOADCMD_RES	:
		{
			::SetThreadPriority( pTAPP->m_hLoadThread, THREAD_PRIORITY_HIGHEST);
			InitResource( _T("TClient"), 0);
			::SetThreadPriority( pTAPP->m_hLoadThread, THREAD_PRIORITY_BELOW_NORMAL);

			SMART_LOCKCS(&pTAPP->m_cs);

			CTClientGame* pTGAME = CTClientGame::GetInstance();
			pTAPP->m_bLoaded = TRUE;
			m_bActivate = TRUE;

			m_vCOMMAND.push_back(GM_START_4STORY);
			CTachyonRes::m_MEDIA.ResetVolume();
			PostMessage(WM_TCOMMAND);
		}

		break;
	}
}

void CTClientWnd::OnChangeResolutionCmdBtnDown(CTMiniPopupDlg* pPopupDlg, CTMiniPopupDlg::CTButtonMP* pButton)
{
	DWORD dwIndex = pButton->GetUserData();

	INT nWidth = m_vResolutionModes[ dwIndex ].m_nWidth;
	INT nHeight = m_vResolutionModes[ dwIndex ].m_nHeight;

	if( CTClientWnd::GetInstance()->m_Device.m_option.m_dwScreenX != nWidth ||
		CTClientWnd::GetInstance()->m_Device.m_option.m_dwScreenY != nHeight )
	{
		CTClientWnd::GetInstance()->m_MainGame.ChangeResolution(
			nWidth,
			nHeight);
	}

	CTClientGame::GetInstance()->GetResolutionListPopup()->ShowComponent(FALSE);
}

void CTClientWnd::CollectResolution()
{
	DEVMODE devMode;
	::EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &devMode);
	INT nCurrentFrequently = devMode.dmDisplayFrequency;

	UINT uCount = m_Device.m_pD3D->GetAdapterModeCount(
		D3DADAPTER_DEFAULT,
		m_Device.m_vPRESENT.BackBufferFormat);

	for( UINT i=0 ; i < uCount ; ++i )
	{
		D3DDISPLAYMODE Mode;
		
		if( D3D_OK  == m_Device.m_pD3D->EnumAdapterModes(
			D3DADAPTER_DEFAULT,
			m_Device.m_vPRESENT.BackBufferFormat,
			i,
			&Mode) )
		{
			if( Mode.Width >= TBASE_SCREEN_X &&
				Mode.Height >= TBASE_SCREEN_Y &&
				Mode.Format == m_Device.m_vPRESENT.BackBufferFormat &&
				Mode.RefreshRate == nCurrentFrequently )
			{
				CString strFMT;
				strFMT = CTChart::Format( TSTR_FMT_RESOLUTION,
					Mode.Width,
					Mode.Height );

				m_vResolutionModes.push_back( TRESOLUTIONMODE(strFMT, Mode.Width, Mode.Height));
			}
		}
	}

	CTMiniPopupDlg *pPopup = m_MainGame.GetResolutionListPopup();
	if(pPopup)
		for( INT i=0; i < m_vResolutionModes.size() ; ++i )
		{
			pPopup->AddButton(
				m_vResolutionModes[ i ].m_strMode,
				CTClientWnd::OnChangeResolutionCmdBtnDown,
				i );
		}
}

BOOL CTClientWnd::IsExistingMapSession( BYTE bSvrID )
{
	for( INT i=0 ; i < MAX_CON ; ++i )
	{
		if( m_session[ i ].m_bSVR == SVR_MAP &&
			m_session[ i ].m_bSvrID == bSvrID )
			return TRUE;
	}
	
	return FALSE;
}

BYTE CTClientWnd::CheckModuleFile(BYTE bAll, INT64 dlCP)
{
	HANDLE hFile = INVALID_HANDLE_VALUE;
	TCHAR szFN[MAX_PATH];
	GetModuleFileName(NULL, szFN, MAX_PATH);
	char * pSlash = ::strrchr(szFN, '\\');

	if(!lstrcmp(pSlash+1, _T("TClient.exe")))
	{
		hFile = CreateFile(
			szFN,
			GENERIC_READ,
			FILE_SHARE_READ,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL |
			FILE_FLAG_RANDOM_ACCESS,
			NULL);
	}
	else if(!lstrcmp(pSlash+1, _T("TLoader.exe")))
	{
		hFile = CreateFile(
			_T(".\\TClient.exe"),
			GENERIC_READ,
			FILE_SHARE_READ,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL |
			FILE_FLAG_RANDOM_ACCESS,
			NULL);
	}
	else
	{
#ifdef TEST_MODE
		hFile = CreateFile(
			_T(".\\TClient.exe"),
			GENERIC_READ,
			FILE_SHARE_READ,
			NULL,
			OPEN_EXISTING,
			FILE_ATTRIBUTE_NORMAL |
			FILE_FLAG_RANDOM_ACCESS,
			NULL);
#else
		return FALSE;
#endif
	}

	INT64 dlCheck = 0;
	INT64 dlValue = 0;
	DWORD dwRead = 0;

	if(hFile != INVALID_HANDLE_VALUE)
	{
		if(bAll)
		{
			BYTE bResult = ReadFile(hFile, (LPVOID)&dlValue, sizeof(INT64), &dwRead, NULL);
			while(bResult && dwRead)
			{
				dlCheck ^= dlValue;
				bResult = ReadFile(hFile, (LPVOID)&dlValue, sizeof(INT64), &dwRead, NULL);
			}

#ifndef TEST_MODE
			if(dlCheck != theApp.m_dlCheckFile)
				return FALSE;
#endif
			dlCheck ^= dlCP;
		}
		else
		{
			DWORD dwRet = SetFilePointer(hFile, DWORD(dlCP), NULL, FILE_BEGIN);
			if(dwRet != INVALID_SET_FILE_POINTER)
			{
				ReadFile(hFile, (LPVOID)&dlCheck, sizeof(INT64), &dwRead, NULL);
			}
		}

		CloseHandle(hFile);
		SendCS_HOTSEND_REQ(dlCheck, bAll);
	}

	return TRUE;
}

LRESULT CTClientWnd::DefWindowProc( UINT message, WPARAM wParam, LPARAM lParam)
{
	if( message == WM_POWERBROADCAST )
		return BROADCAST_QUERY_DENY;

	if( message == WM_IME_NOTIFY &&
		TEdit::g_bPassImeNotify )
		return 0;

	if( CTNationOption::JAPAN_IME || CTNationOption::TAIWAN_IME )
	{
		switch(message)
		{
		case WM_IME_STARTCOMPOSITION		:
		case WM_IME_ENDCOMPOSITION			:
			return 0;

		case WM_IME_COMPOSITION				:
			{
				OnImeComposition(
					GetSafeHwnd(),
					wParam,
					lParam);
			}
			return 0;

		case WM_IME_NOTIFY					:
			{
				OnImeNotify(
					GetSafeHwnd(),
					wParam,
					lParam);

				if( wParam == IMN_OPENCANDIDATE ||
					wParam == IMN_CHANGECANDIDATE ||
					wParam == IMN_CLOSECANDIDATE )
					return 0;
			}
			break;

			case WM_INPUTLANGCHANGEREQUEST	:
				{
					if( !OnInputLangChangeRequest( GetSafeHwnd(), wParam, lParam ) )
						return 0;
				}
				break;

			case WM_INPUTLANGCHANGE			:
				{
					if( !OnInputLangChangeRequest( GetSafeHwnd(), wParam, lParam ) )
					{
						ActivateKeyboardLayout( TEdit::m_hKL, 0 );
						return 0;
					}
				}
				break;

		case WM_IME_SETCONTEXT				:
			return CTachyonWnd::DefWindowProc( message, wParam, 0);
		}
	}
	else
	{
		switch(message)
		{
		case WM_IME_STARTCOMPOSITION		: return 0;
		case WM_IME_NOTIFY					:
			{
				OnImeNotify(
					GetSafeHwnd(),
					wParam,
					lParam);
			}
			break;

		case WM_INPUTLANGCHANGEREQUEST		:
			{
				if( !OnInputLangChangeRequest( GetSafeHwnd(), wParam, lParam ) )
					return 0;
			}
			break;

		case WM_INPUTLANGCHANGE				:
			{
				if( !OnInputLangChangeRequest( GetSafeHwnd(), wParam, lParam ) )
				{
					ActivateKeyboardLayout( TEdit::m_hKL, 0 );
					return 0;
				}
			}
			break;
		}
	}

	return CTachyonWnd::DefWindowProc( message, wParam, lParam);
}



// TEST 용 채팅 명령어
// ------------------------------------------------------------------------------------------
CString _on_chatcmd_fps(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pGame = (CTClientGame*)dwUSER;
	pGame->SetShowDebugInfo( !pGame->IsShowDebugInfo() );

	return "";
}

CString _on_chatcmd_f(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame *pTGAME = (CTClientGame *) dwUSER;




	pTGAME->m_bShowFPSInfo = !pTGAME->m_bShowFPSInfo;	
	return "";


}

#ifdef TEST_MODE

CString _on_chatcmd_mon_roaming_off(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pGame = (CTClientGame*)dwUSER;

	return "";
}

CString _on_chatcmd_mon_roaming_on(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pGame = (CTClientGame*)dwUSER;
	
	return "";
}

CString _on_chatcmd_draw_object(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pGame = (CTClientGame*)dwUSER;
	pGame->SetDrawOBJ( !pGame->IsDrawOBJ() );

	return "";
}

CString _on_chatcmd_spawn_edit_start(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame *pTGAME = (CTClientGame *) dwUSER;




	return "";
}

CString _on_chatcmd_spawn_edit_end(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame *pTGAME = (CTClientGame *) dwUSER;


	return "";
}

CString _on_chatcmd_spawn_edit_save(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame *pTGAME = (CTClientGame *) dwUSER;


	return "";
}

CString _on_chatcmd_rm(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*) dwUSER;
	static BOOL bResetMAP = TRUE;
	bResetMAP = !bResetMAP;

	pTGAME->SetResetMAP( bResetMAP );
	return "";
}

CString _on_chatcmd_fog(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	/*CTClientGame* pTGAME = (CTClientGame*) dwUSER;
	if( vPARAM.size() >= 1 )
	{
		int a = atoi( (LPCTSTR) vPARAM[0] );
		pTGAME->GetMainChar()->ClearTActionSFX(&pTGAME->GetMainChar()->m_vTGARBAGESFX);
		pTGAME->GetMainChar()->PlayTActionSFX(&pTGAME->GetMainChar()->m_vTGARBAGESFX, a);

		//CTClientGame::g_TestEnableFOG = a ? TRUE: FALSE;






	}
	return "";*/
	


	
	if( vPARAM.size() >= 1 )
	{
		int a = atoi( (LPCTSTR) vPARAM[0] );



		CTClientGame::g_TestEnableFOG = a ? TRUE : FALSE;






	}
	return "";

}

CString _on_chatcmd_dist(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*) dwUSER;

	MAPTITEMGRADEVISUAL::iterator it, end;
	it = CTChart::m_mapTITEMGRADEVISUAL.begin();
	end = CTChart::m_mapTITEMGRADEVISUAL.end();

	for(; it != end ; ++it )
	{
		TITEMGRADEVISUAL& item = it->second;

		DWORD dwTextureID = (DWORD) atoi(vPARAM[0]);

		MAPRES::iterator finder = CTClientWnd::GetInstance()->m_RES.m_mapTEX.find( dwTextureID );
		if( finder == CTClientWnd::GetInstance()->m_RES.m_mapTEX.end() || finder->second == NULL )
		{
			it = CTChart::m_mapTITEMGRADEVISUAL.erase( it );
			continue;
		}

		item.m_pSkinTex = (LPTEXTURESET) finder->second;
	}



	return "";
}

CString _on_chatcmd_far(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*) dwUSER;
	if( vPARAM.size() >= 1 )
	{
		pTGAME->GetMainCam()->m_fFarPlane = (FLOAT) atof( (LPCTSTR) vPARAM[0] );
		pTGAME->GetMainCam()->ResetFOV(
			pTGAME->GetMainCam()->m_fFOV);
	}
	else
	{
		CString strFMT;
		strFMT.Format( "Camera Far Plane : %f",
			pTGAME->GetMainCam()->m_fFarPlane );
		CTClientGame::DebugMSG( strFMT );
	}
	return "";
}

CString _on_chatcmd_test(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*) dwUSER;
	LPTASSISTANT pNew = new TASSISTANT;
	pNew->m_strName = "똘똘이";
	pNew->m_dwCharID = 123;
	pNew->m_dwCommanderID = 123;
	pNew->m_bDie = TRUE;
	pNew->m_bRace = 0;
	pNew->m_bLevel = 80;
	pNew->m_bHair = 2;
	pTGAME->m_vTASSISTANT.push_back( pNew );
	pNew = new TASSISTANT;
	pNew->m_strName = "멍충이";
	pNew->m_dwCharID = 123;
	pNew->m_dwCommanderID = 0;
	pNew->m_bDie = TRUE;
	pNew->m_bRace = 1;
	pNew->m_bLevel = 90;
	pNew->m_bHair = 0;
	pTGAME->m_vTASSISTANT.push_back( pNew );
	pNew = new TASSISTANT;
	pNew->m_strName = "개박이";
	pNew->m_dwCharID = 123;
	pNew->m_dwCommanderID = 0;
	pNew->m_bDie = FALSE;
	pNew->m_bRace = 0;
	pNew->m_bLevel = 100;
	pNew->m_bHair = 1;
	pTGAME->m_vTASSISTANT.push_back( pNew );
	pTGAME->ResetPlayerINFO(FALSE);


	return "";
}

CString _on_chatcmd_move_node_line(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*) dwUSER;

	if( vPARAM.size() > 0 )
	{
		CTClientMAP *pTMAP = pTGAME->GetClientMap();

		if( pTMAP && pTMAP->m_pMAP && pTMAP->m_vTNODE[pTMAP->m_pMAP->m_bUNIT[4]].m_fLengthX > 0.0f )
		{
			CTClientPath *pTPATH = &pTMAP->m_vTNODE[pTMAP->m_pMAP->m_bUNIT[4]];
			WORD wPointID = WORD(atoi(vPARAM[0]));

			if( pTPATH && wPointID )
			{
				MAPT2DPOINT::iterator finder = pTPATH->m_mapTPOINT.find(wPointID);

				if( finder != pTPATH->m_mapTPOINT.end() )
				{
					D3DXVECTOR3 vTPOS = pTGAME->GetMainChar()->GetPosition();
					(*finder).second = pTPATH->GetT2DPOINT(&vTPOS);
				}
			}
		}
	}
	else
		CTClientGame::DebugMSG(_T("Useage : /move_node_line [line ID]"));

	return "";
}

CString _on_chatcmd_save_node_line(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*) dwUSER;

	if( vPARAM.size() > 0 )
	{
		CTClientMAP *pTMAP = pTGAME->GetClientMap();

		if( pTMAP && pTMAP->m_pMAP && pTMAP->m_vTNODE[pTMAP->m_pMAP->m_bUNIT[4]].m_fLengthX > 0.0f )
		{
			CTClientPath *pTPATH = &pTMAP->m_vTNODE[pTMAP->m_pMAP->m_bUNIT[4]];

			if(pTPATH)
			{
				int nUnitLength = pTMAP->m_pMAP->m_nUnitLength * pTMAP->m_pMAP->m_nTileLength;
				MAPT2DPOINT::iterator itTPOINT;

				CStdioFile vFILE(
					vPARAM[0],
					CFile::modeCreate|
					CFile::modeWrite|
					CFile::typeText);

				for( itTPOINT = pTPATH->m_mapTPOINT.begin(); itTPOINT != pTPATH->m_mapTPOINT.end(); itTPOINT++)
				{
					CString strTDATA;

					strTDATA.Format(
						_T("0\t%d\t%d\t%d\t%d\t%d\t%d\n"),
						pTMAP->m_wMapID,
						INT(pTPATH->m_fBaseX + 1) / nUnitLength,
						INT(pTPATH->m_fBaseZ + 1) / nUnitLength,
						(*itTPOINT).first,
						DWORD(T2DPOINT((*itTPOINT).second & 0xFFFFFFFF)),
						DWORD(T2DPOINT(((*itTPOINT).second >> 32) & 0xFFFFFFFF)));

					vFILE.WriteString(strTDATA);
				}
			}
		}
	}
	else
		CTClientGame::DebugMSG(_T("Useage : /save_node_line [File name]"));

	return "";
}

#endif

CString _on_teleport_bow(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*)dwUSER;
	if (pTGAME->GetSession())
		pTGAME->GetSession()->SendCS_CMTELEPORTBATTLEMODE_REQ(SYSTEM_BOW);

	return "";
}

CString _on_teleport_br(const CString& strCMD, const VECTORSTRING& vPARAM, DWORD dwUSER)
{
	CTClientGame* pTGAME = (CTClientGame*)dwUSER;
	if (pTGAME->GetSession())
		pTGAME->GetSession()->SendCS_CMTELEPORTBATTLEMODE_REQ(SYSTEM_BR);

	return "";
}

void CTClientWnd::InitChatProc()
{
	CTChatFrame* pChat = m_MainGame.m_pChatFrame;


	// fps : 프레임,위치 정보 보기
	pChat->AddChatCmdProc("fps", _on_chatcmd_fps, (DWORD)(&m_MainGame));

	pChat->AddChatCmdProc("f", _on_chatcmd_f, (DWORD)(&m_MainGame));

	pChat->AddChatCmdProc("teleportbow", _on_teleport_bow, (DWORD)(&m_MainGame));
	pChat->AddChatCmdProc("teleportbr", _on_teleport_br, (DWORD)(&m_MainGame));

#ifdef TEST_MODE
	// mon_roaming_off : 몬스터 로밍 끔
	pChat->AddChatCmdProc("mon_roaming_off", _on_chatcmd_mon_roaming_off, (DWORD)(&m_MainGame));

	// mon_roaming_on : 몬스터 로밍 켬
	pChat->AddChatCmdProc("mon_roaming_on", _on_chatcmd_mon_roaming_on, (DWORD)(&m_MainGame));


	// draw_object : 오브젝트 렌더링 여부
	pChat->AddChatCmdProc("draw_object", _on_chatcmd_draw_object, (DWORD)(&m_MainGame));

	// spawn_edit_start : 스폰 에디트 시작
	pChat->AddChatCmdProc("spawn_edit_start", _on_chatcmd_spawn_edit_start, (DWORD)(&m_MainGame));


	// spawn_edit_end : 스폰 에디트 종료
	pChat->AddChatCmdProc("spawn_edit_end", _on_chatcmd_spawn_edit_end, (DWORD)(&m_MainGame));

	// spawn_edit_save : 스폰 에디트 저장
	pChat->AddChatCmdProc("spawn_edit_save", _on_chatcmd_spawn_edit_save, (DWORD)(&m_MainGame));

	pChat->AddChatCmdProc( "rm", _on_chatcmd_rm, (DWORD)(&m_MainGame) );

	pChat->AddChatCmdProc( "fog", _on_chatcmd_fog, (DWORD)(&m_MainGame) );
	pChat->AddChatCmdProc( "dist", _on_chatcmd_dist, (DWORD)(&m_MainGame) );
	pChat->AddChatCmdProc( "far", _on_chatcmd_far, (DWORD)(&m_MainGame) );
	pChat->AddChatCmdProc( "test", _on_chatcmd_test, (DWORD)(&m_MainGame) );
	pChat->AddChatCmdProc( "move_node_line", _on_chatcmd_move_node_line, (DWORD)(&m_MainGame) );
	pChat->AddChatCmdProc( "save_node_line", _on_chatcmd_save_node_line, (DWORD)(&m_MainGame) );
#endif

}
// ------------------------------------------------------------------------------------------
