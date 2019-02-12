#pragma once
class CTGuildSummaryNewDlg: public ITInnerFrame
{
public:
	static BYTE		m_bTabIndex;

public:
	enum InfoEnum
	{
		INFO_GNAME,							///< ����
		INFO_GDATE,							///< ��� ���� ��
		INFO_GMASTER,						///< �����
		INFO_GMASTER_PEER,					///< ����� ����
		INFO_GSUBMASTER1,					///< �� �����
		INFO_GSUBMASTER2,					///< �� �����
		INFO_GMBCNT,						///< ������ ��
		INFO_GLEV,							///< ��� ����
		INFO_GEXP,							///< ��� ����ġ
		INFO_MYDUTY,						///< ���� ����
		INFO_MYPEER,						///< ���� ����
		INFO_GMONEY_RUNE,					///< ��� �ڱ�
		INFO_GMONEY_LUNA,					///< ��� �ڱ�
		INFO_GMONEY_CRON,					///< ��� �ڱ�
		INFO_NOTIFY,						///< ��� ��������
		INFO_GUILD_RANK,
		INFO_GUILD_POINT,
		INFO_GUILD_USEABLE_POINT,
		INFO_GUILD_MONTH_POINT,
		INFO_GUILD_RANK_TOTAL,
		INFO_GUILD_RANK_MONTH,
		INFO_COUNT,
	};

public:
	enum { BUTTON_COUNT = 3 };

	enum COLUMN
	{
		COL_TITLE,			///< ���� ����
		COL_DATE,			///< ���� �ۼ���
		COL_SELECTION,		///< ���� ��ü ����
		COL_DELETE,			///< ���� ���� ��ư
		COL_COUNT
	};

	enum MODE
	{
		MODE_NORMAL,		///< �Ϲ� ��� (������ ���°͸� ������)
		MODE_MASTER,		///< ����� ��� (���� ���� ����)
		MODE_NEW,			///< ������ �ۼ�
		MODE_EDIT,			///< ���� ����
		MODE_COUNT
	};

	typedef CTGuildCommander::GuildNotify		GuildNotify;
	typedef CTGuildCommander::GuildNotifyVec	GuildNotifyVec;

public:
	static const BUTTON_STATE	MODE_BTN_VIEW[MODE_COUNT][BUTTON_COUNT];

protected:
	TComponent*		m_vInfoCtrl[INFO_COUNT];
	TButton* m_pGuildMarkButton;
	TButton* m_pGuildRewardButton;
	TButton* m_pGuildRewardMemberButton;
	TButton* m_pGuildExitButton;
	
	TImageList*		m_pMarkImgset;
	TImageList*		m_pBackImgset;
	TComponent*		m_pBackBase;

	//ANNOUNCEMENTS
	MODE			m_eMode;
	INT				m_nPrvSel;
	INT				m_nModIdx;

	TList*			m_pList;
	TComponent*		m_pViewAuthor;
	
	TComponent*		m_pViewTitle;
	TEdit*			m_pEditTitle;
	
	TMultiLineEdit*	m_pEditContents;
	TList*			m_pViewContents;

	TComponent*		m_pBTN[BUTTON_COUNT];
	//

public:
	/// ���� ����� �ֽ��� ������ �����Ѵ�.
	void UpdateInfo();

	/// ���� ������ �⺻ ���� �ʱ�ȭ �Ѵ�. �⺻ ���� ����� ���ο� ���� �ٸ��� �����ȴ�.
	void ResetMode();
	/// ��忡 ���� ������Ʈ�� �ٽ� �����Ѵ�.
	void UpdateCompByMode();

	/// ������ �ۼ��� �����Ѵ�.
	void StartNew();
	/// ������ �ۼ��� ������.
	void EndNew(BOOL bOK);

	/// ���� ������ �����Ѵ�.
	void StartModify();
	/// ���� ������ ������.
	void EndModify(BOOL bOK);

	/// ������ �����Ѵ�.
	void Delete();

	/// ���� ������� ���θ� ��´�.
	BOOL IsEditMode();
	/// ���� ��Ŀ���� ����Ʈ ��Ʈ���� ��´�.
	TEdit* GetCurEdit();

protected:
	/// ���� ���õ� ���������� �ݿ��Ѵ�.
	void UpdateByListSel();

public:
	virtual void RequestInfo();
	virtual void ResetInfo();

	void HideComponentWhenTactics();

public:
	virtual void OnLButtonDown(UINT nFlags, CPoint pt);
	virtual void OnKeyDown(UINT nChar, int nRepCnt, UINT nFlags);
	virtual void ShowComponent( BOOL bVisible = TRUE);
	virtual HRESULT Render( DWORD dwTickCount );

public :
	CTGuildSummaryNewDlg( TComponent *pParent, FRAMEDESC_SHAREDPTR pDesc);
	virtual ~CTGuildSummaryNewDlg();
};