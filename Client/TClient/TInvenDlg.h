#pragma once


class CTInvenDlg : public CTClientUIBase
{
public:
	static TFRAMEOFFSET m_vSubInvenPos[ MAX_SUBINVEN ];
	static TFRAMEOFFSET m_pDefInven;

	TFRAMEOFFSET* m_pSubInvenPos;
	CTClientInven *m_pTINVEN;
	TComponent* m_pEXTPERIOD;
	DWORD m_EXTINVENPERIOD_Button; // 기간연장 버튼 아이디
	BOOL m_bCharInfo;

public:
	virtual ITDetailInfoPtr GetTInfoKey( const CPoint& point );
	virtual BOOL GetTChatInfo( const CPoint& point, TCHATINFO& outInfo );
	virtual HRESULT Render( DWORD dwTickCount);
	virtual void OnNotify(DWORD from, WORD msg, LPVOID param);

	virtual TDROPINFO OnDrop( CPoint point);
	virtual BYTE OnBeginDrag(
		LPTDRAG pDRAG,
		CPoint point);

	virtual BOOL CanWithItemUI();
	virtual void MoveComponent( CPoint pt );

public:
	CTInvenDlg( TComponent *pParent, FRAMEDESC_SHAREDPTR pDesc, WORD wFrameID);
	virtual ~CTInvenDlg();
};
