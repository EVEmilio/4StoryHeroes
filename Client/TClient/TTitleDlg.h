#pragma once

#define TITLESLOT_COUNT			(9)

struct TITLE
{
	DWORD m_dwTitleID;
	CString m_strTitle;
	CString m_strRequirement;
	BYTE m_bGroupID;
	DWORD m_dwRequirement;

	TITLE()
		: m_bGroupID(0)
	{};
};

struct TITLEAV
{
	DWORD m_dwTitleID;
	BYTE m_bAvailable;
	BYTE m_bChecked;

	TITLEAV()
		: m_bAvailable(0), m_bChecked(0)
	{};
};

struct CHECKBOX
{
	INT m_nIndex;
	TButton* m_pCheckBtn;

	CHECKBOX()
	{
		m_nIndex = 0;

		m_pCheckBtn = NULL;
	}
};

class CTTitleDlg;

class CTTitleList : public TList
{
public:
	CTTitleList(CTTitleDlg *pParent, FRAMEDESC_SHAREDPTR pDesc);
	virtual ~CTTitleList();

	virtual void OnNotify( DWORD from, WORD msg, LPVOID param );
	virtual BOOL DoMouseWheel( UINT nFlags, short zDelta, CPoint pt);

protected:
	CTTitleDlg* m_pParent;
};


class CTTitleDlg : public CTClientUIBase
{
protected:
	std::vector<CHECKBOX> m_vCheckBox;
	std::vector<TITLE> m_vTitle;
	std::vector<TITLEAV> m_vTitleAV;

public:
	CTTitleList*	m_pMainList;
	TList*			m_pAqList;
	TList*			m_pGroupList;

	TButton*		m_pCheckBox;
	CPoint			m_vCheckBox_Offset;
	CPoint			m_ptBasisPos;

	TComponent*		m_pDescription;
	TComponent*		m_pAqTitle;

	TButton*		m_pBtn;
public:
	void AddLists();
	void ClearLists();
	void Add(
		DWORD dwTitleID,
		const CString& strTitle,
		const CString& strRequirement,
		BYTE bGroupID,
		DWORD dwRequirement,
		BYTE bCount);
	void AddAV(
		DWORD dwTitleID,
		const CString& strTitle,
		const CString& strRequirement,
		BYTE bGroupID,
		DWORD dwRequirement,
		BYTE bCount);
	void SetTitle(DWORD dwTitle, BYTE bAvailable, BYTE bSelected);
	void UpdateTitle(WORD wTitleID);
	void _UpdateCheckBox();
	void ClearMainList();
	void ClearAqList();
	BYTE FindTitleID(WORD wTitleID);

public:
	BOOL m_bListVisible;
	virtual void OnLButtonDown( UINT nFlags, CPoint pt );
	virtual void SwitchFocus(TComponent *pCandidate);
	virtual HRESULT Render(DWORD dwTickCount);

public:
	CTTitleDlg( TComponent *pParent, FRAMEDESC_SHAREDPTR pDesc );
	virtual ~CTTitleDlg();
};