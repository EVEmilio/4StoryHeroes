// TScroll.h: interface for the TScroll class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TSCROLL_H__99C8C3F8_EA5D_4155_BE12_C77726B50432__INCLUDED_)
#define AFX_TSCROLL_H__99C8C3F8_EA5D_4155_BE12_C77726B50432__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#define VALID_DISTANCE								100

class TScroll : public TComponent  
{
public:	
	void SetScrollType(BOOL bVertical);
	void GetScrollPos(int &nRange, int &nPos);
	void SetScrollPos(int nRange, int nPos = 0);	

	TScroll(TComponent* pParent, FRAMEDESC_SHAREDPTR pDesc);
	TScroll(TComponent* pParent, FRAMEDESC_WEAKPTR pDesc);
	TScroll(TComponent* pParent, const TScroll& rSrcScroll);
	virtual ~TScroll();

protected:
	void SetBarPosition();
	int GetLogicalPos(CPoint pt);
	void GetPhysicalPos(int nLogicalPos, CPoint *ppt);

	virtual TComponent* Clone() const
	{
		return new TScroll(m_pParent, *this);
	};

	BOOL		m_bDrag;
	int			m_nRange;
	int			m_nCurPos;
	SCROLLDESC	m_scrollDesc;

public:
	TComponent *m_pBar;
	TComponent *m_pUpLeft;
	TComponent *m_pDownRight;

public:
	virtual void OnLButtonUp(UINT nFlags, CPoint pt);
	virtual void OnMouseMove(UINT nFlags, CPoint pt);
	virtual void OnLButtonDown(UINT nFlags, CPoint pt);

	virtual void OnNotify(DWORD from, WORD msg, LPVOID param);

private:
	void Init();
};

#endif // !defined(AFX_TSCROLL_H__99C8C3F8_EA5D_4155_BE12_C77726B50432__INCLUDED_)
