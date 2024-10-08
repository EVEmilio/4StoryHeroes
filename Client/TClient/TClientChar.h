#pragma once


class CTClientChar : public CTClientMoveObj
{
public:
	DWORD m_dwEncryptEXP;
	DWORD m_dwSoulEncryptEXP;

	WORD m_vTSKILLPOINT[TPOINT_COUNT];
	BYTE m_vTRECALL[TRECALL_MAX];
	BYTE m_vTSPOLECNIK[1];


	CString m_strNAME;
	CString m_strGUILD;
	CString m_strTACTICS;

	DWORD m_dwGuildID;
	DWORD m_dwTacticsID;
	BYTE m_bGuildDuty;
	BYTE m_bGuildPeer;

	DWORD m_dwChiefID;
    WORD m_wCommanderID;
	WORD m_wPartyID;
	WORD m_wAssistantID;
	CString m_strAssistantCommander;

	DWORD m_dwRune;
	DWORD m_dwLuna;
	DWORD m_dwCron;

	DWORD m_dwPrevEXP;
	DWORD m_dwNextEXP;
	//DWORD m_dwEXP;
	
	BYTE m_bAfterMath;
	BYTE m_bRaceID_;

	BYTE m_bSex;
	DWORD m_dwMantleCond;

	BYTE m_bHair;
	BYTE m_bFace;
	BYTE m_bBody;
	BYTE m_bPants;
	BYTE m_bHand;
	BYTE m_bFoot;
	
	BYTE m_bPrevPants;
	BYTE m_bPrevBody;
	BYTE m_bPrevHand;
	BYTE m_bPrevFoot;

	BYTE m_bInPCROOM;
	BYTE m_bPrivateShop;
	CString m_strPrivateShop;

	BOOL m_bEnterCastle;
	BOOL m_bEnterSkygarden;
	WORD m_wCastleID;
	WORD m_wBallID;
	BYTE m_bCamp;
	BYTE m_bDeaths;

	BYTE m_MyStatLevel;
	BYTE m_MyStatPoint;
	DWORD m_MyStatExp;
    CTClientGuildMark* m_pGuildMark;
	CTClientPet* m_pRidingPet;

//	CTBFGRankDlg* m_pBTGRank;

	BYTE m_bPrevMainRecallAI;

	CString m_strUserTitle;


	TSTATINFO m_StatInfo;

	DWORD m_dwPvPTotalPoint;
	DWORD m_dwPvPUseablePoint;

	DWORD m_dwPvPMonthPoint;
	BYTE m_bUseFameTitle;
	CString m_strFameTitle;

	WORD m_wActiveSkillID;
	DWORD m_dwActiveSkillTick;
	DWORD m_dwChangeRaceTick;

	BYTE m_bShowCloakCustume;

	DWORD m_dwRankPoint;
public:
	void SetRaceID(BYTE bRace);
	BYTE GetRaceID();
	BYTE GetCostumeRaceID();

	BYTE GetFreeRecallPOS();
	BYTE GetFreeSpolecnikPOS();

	CTClientPet* GetRidingPet() const;

	void SetRidingPet(
		CTClientPet* pTPET);

	void DoResetObj(
		CD3DDevice *pDevice,
		CTachyonRes *pRES);

	BOOL CanTalkWithNPC(
		CTClientNpc* );

	virtual BYTE GetDrawName();
	virtual void ReleaseData();
	virtual CString GetName();

	virtual THIDEPART FindHidePart(
		CTClientItem *pTITEM,
		BYTE bSlotID);

	virtual BYTE CheckOBJPart(
		LPTHIDEPART pTHIDE);

	virtual void ResetDEFOBJPart(
		LPTHIDEPART pTHIDE);

	virtual void ResetDEFEQUIP(
		CD3DDevice *pDevice,
		BYTE bEquipPOS);

	virtual void ClearDEFEQUIP(
		CD3DDevice *pDevice,
		BYTE bEquipPOS);

	virtual void ResetWeaponPOS(
		DWORD dwHideEquipSlot,
		CD3DDevice *pDevice,
		CTachyonRes *pRES);

	virtual void DoTRANS(
		CD3DDevice *pDevice,
		CTachyonRes *pRES,
		WORD wMonID);

	virtual void DoRETRANS(
		CD3DDevice *pDevice,
		CTachyonRes *pRES);

	virtual void DoDISGUISE(
		CD3DDevice *pDevice,
		CTachyonRes *pRES,
		BYTE bCountry);
	
	virtual void EndDISGUISE(
		CD3DDevice *pDevice,
		CTachyonRes *pRES);

	virtual BYTE IsAlliance(
		CTClientObjBase *pTARGET);

	virtual void OnDIE(
		CD3DDevice *pDevice,
		CTachyonRes *pRES);

	virtual void ActivateTALK(
		LPDIRECT3DDEVICE9 pDevice,
		CString strTALK,
		DWORD dwCOLOR);

	virtual D3DXMATRIX& GetPositionMat();

	virtual CString GetUserTitle() { return m_strUserTitle; }

	virtual void ResetEQUIP(
		CD3DDevice *pDevice,
		CTachyonRes *pRES);

	void ApplyMantleTexture();
	virtual BYTE GetAftermathStep();

	bool GetHasShield();

	bool IsAvailableNPC( CTClientObjBase* pTARGET );

	INT GetRandomAniIndex(
		DWORD dwActionID,
		INT nCount);

public :	// ������Ż��.

	void PlayGodBallSFX( BOOL bShow = TRUE );
	void ClearGodBallSFX();

	void EnterCastle();
	void LeaveCastle();

	void EnterSkygarden();
	void LeaveSkygarden();

	BOOL InCastle() const;
	BOOL InSkygarden() const;
	WORD GetCastleID() const;
	WORD GetGodBallID() const;
	BYTE GetCamp() const;

	void SetCastleID( WORD wCastleID );
	void SetGodBallID( WORD wBallID );
	void SetCamp( BYTE bCamp );

	DWORD GetEXP();
	void SetEXP(DWORD dwEXP);

	DWORD GetSoulEXP();
	void SetSoulEXP(DWORD dwSoulEXP);

public:
	CTClientChar();
	virtual ~CTClientChar();

public:
	DWORD m_zEncryptKEY;
};

