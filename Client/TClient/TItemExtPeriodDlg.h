#pragma once

class CTItemExtPeriodDlg : public CTItemSlotBaseDlg
{
public:
	enum 
	{
		TARGET_SLOT=0,
		SLOT_COUNT
	};

public:
	virtual BOOL CheckItem(BYTE bSlotID, CTClientItem* pClientItem) const;

public:
	CTItemExtPeriodDlg(TComponent* pParent, FRAMEDESC_SHAREDPTR pDesc);
	virtual ~CTItemExtPeriodDlg();
};
