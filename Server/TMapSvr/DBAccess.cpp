#include "StdAfx.h"

BEGIN_INIT_QUERY(TMapSvr)
	PREDEFINE_QUERY(CTBLChannelChart)
	PREDEFINE_QUERY(CTBLChannelList)
	PREDEFINE_QUERY(CTBLServerChart)
	PREDEFINE_QUERY(CTBLFormulaChart)
	PREDEFINE_QUERY(CTBLAICondition)
	PREDEFINE_QUERY(CTBLAICommand)
	PREDEFINE_QUERY(CTBLAIChart)
	PREDEFINE_QUERY(CTBLMonster)
PREDEFINE_QUERY(CTBLCustomCloakTable)
PREDEFINE_QUERY(CSPGetCustomCloak)
	PREDEFINE_QUERY(CSPDelSaddle)
	PREDEFINE_QUERY(CTBLSaddle)
	PREDEFINE_QUERY(CTBLMonSpawn)
	PREDEFINE_QUERY(CTBLMonParty)
	PREDEFINE_QUERY(CTBLMapMon)
	PREDEFINE_QUERY(CTBLLevelChart)
	PREDEFINE_QUERY(CTBLClassChart)
	PREDEFINE_QUERY(CTBLSkillChart)
	PREDEFINE_QUERY(CTBLInvenTournametChart)
	PREDEFINE_QUERY(CTBLItemTournamentChart)
	PREDEFINE_QUERY(CTBLItemChart)
	PREDEFINE_QUERY(CTBLTitleChart)
	PREDEFINE_QUERY(CTBLRaceChart)
	PREDEFINE_QUERY(CTBLSkill)
	PREDEFINE_QUERY(CTBLInven)
	PREDEFINE_QUERY(CTBLItem)
	PREDEFINE_QUERY(CTBLTitle)
	PREDEFINE_QUERY(CTBLChar)
	PREDEFINE_QUERY(CTBLSoulmateTable)
	PREDEFINE_QUERY(CTBLProtectedTable)
	PREDEFINE_QUERY(CTBLCharGuild)
	PREDEFINE_QUERY(CTBLCharTactics)
	PREDEFINE_QUERY(CTBLCharGuildInfo)
	PREDEFINE_QUERY(CTBLSkillMaintain)
	PREDEFINE_QUERY(CTBLSkillData)
	PREDEFINE_QUERY(CTBLQuestChart)
	PREDEFINE_QUERY(CTBLQuestConditionChart)
	PREDEFINE_QUERY(CTBLQuestRewardChart)
	PREDEFINE_QUERY(CTBLQuestMagicItemChart)
	PREDEFINE_QUERY(CTBLQuestTermChart)
	PREDEFINE_QUERY(CTBLQuestTable)
	PREDEFINE_QUERY(CTBLQuestTermTable)
	PREDEFINE_QUERY(CTBLCabinetTable)
	PREDEFINE_QUERY(CTBLSpawnPos)
	PREDEFINE_QUERY(CTBLIndunChart)
	PREDEFINE_QUERY(CTBLNpc)
	PREDEFINE_QUERY(CTBLNpcItem)
	PREDEFINE_QUERY(CTBLMonItem)
	PREDEFINE_QUERY(CTBLPostTable)
	PREDEFINE_QUERY(CTBLHotKey)
	PREDEFINE_QUERY(CTBLBattleZoneChart)
	PREDEFINE_QUERY(CTBLLocalTable)
	PREDEFINE_QUERY(CTBLCastleTable)
	PREDEFINE_QUERY(CTBLSkygardenTable)
	PREDEFINE_QUERY(CTBLItemAttrChart)
	PREDEFINE_QUERY(CTBLItemGradeChart)
	PREDEFINE_QUERY(CTBLGemGradeChart)
	PREDEFINE_QUERY(CTBLItemMagicChart)
	PREDEFINE_QUERY(CTBLItemSetChart)
	PREDEFINE_QUERY(CTBLFindChar)
	PREDEFINE_QUERY(CTBLLocalInfo)
	PREDEFINE_QUERY(CTBLItemUsed)
	PREDEFINE_QUERY(CTBLSpawnPath)
	PREDEFINE_QUERY(CTBLRecallMon)
	PREDEFINE_QUERY(CTBLPortalChart)
	PREDEFINE_QUERY(CTBLDestinationChart)
	PREDEFINE_QUERY(CTBLGateChart)
	PREDEFINE_QUERY(CTBLSwitchChart)
	PREDEFINE_QUERY(CTBLPet)
	PREDEFINE_QUERY(CTBLOperatorChart)
	PREDEFINE_QUERY(CTBLPetTable)
	PREDEFINE_QUERY(CTBLMonAttr)
	PREDEFINE_QUERY(CTBLCompanionTable)
	PREDEFINE_QUERY(CTBLCompanionItemTable)
	PREDEFINE_QUERY(CTBLItemMagicSkill)
	PREDEFINE_QUERY(CTBLCashItemCabinet)
	PREDEFINE_QUERY(CTBLCashShopItem)
	PREDEFINE_QUERY(CTBLCashCategory)
	PREDEFINE_QUERY(CTBLGamble)
	PREDEFINE_QUERY(CTBLGodTower)
	PREDEFINE_QUERY(CTBLGodBall)
	PREDEFINE_QUERY(CTBLLocalOccupy)
	PREDEFINE_QUERY(CTBLDuringItem)
	PREDEFINE_QUERY(CTBLExpItem)
	PREDEFINE_QUERY(CTBLSkillPoint)
	PREDEFINE_QUERY(CTBLRecallMaintain)
	PREDEFINE_QUERY(CTBLSvrMsg)
	PREDEFINE_QUERY(CTBLPvPointChart)
	PREDEFINE_QUERY(CTBLPvPRecent)
	PREDEFINE_QUERY(CTBLDuelCharList)
	PREDEFINE_QUERY(CTBLDuelCharScore)
	PREDEFINE_QUERY(CTBLMonsterShop)
	PREDEFINE_QUERY(CTBLCashGambleChart)	
	PREDEFINE_QUERY(CTBLAuctionTable) 
	PREDEFINE_QUERY(CTBLAuctionInterest)
	PREDEFINE_QUERY(CTBLAuctionBidList)
	PREDEFINE_QUERY(CTBLALLAuctionBidder)
	PREDEFINE_QUERY(CTBLAuctionRegList)
	PREDEFINE_QUERY(CTBLMonthRankTable)
	PREDEFINE_QUERY(CTBLFirstGradeGroup)
	PREDEFINE_QUERY(CTBLPostItem)
	PREDEFINE_QUERY(CTBLPostBill)
	PREDEFINE_QUERY(CTBLHeroTable)
	PREDEFINE_QUERY(CTBLTutorialCharItem)
	PREDEFINE_QUERY(CTBLHelpMessage)
	PREDEFINE_QUERY(CTBLMissionTable)
	PREDEFINE_QUERY(CTBLRPSGame)
	PREDEFINE_QUERY(CTBLArena)
	PREDEFINE_QUERY(CTBLAidTable)
	PREDEFINE_QUERY(CTBLGETCASHAMOUNT)
	PREDEFINE_QUERY(CTBLSecureCode)

	PREDEFINE_QUERY(CTBLBRSpawnPos)
	PREDEFINE_QUERY(CTBLCompanionBonusChart)
	PREDEFINE_QUERY(CTBLSpecialBoxChart)

	PREDEFINE_QUERY(CTBLBOWItemChart)
	PREDEFINE_QUERY(CTBLBOWBonusItems)
	PREDEFINE_QUERY(CTBLPremiumSkillChart)

	PREDEFINE_QUERY(CTBLBRSuppliesChart)
	PREDEFINE_QUERY(CTBLBattleRankChart)
	
	PREDEFINE_QUERY(CTBLGuildSkillChart)
	PREDEFINE_QUERY(CTBLGuildSkillDuty)
	PREDEFINE_QUERY(CTBLGuildSkillMember)
	PREDEFINE_QUERY(CTBLAccessoryMagic)
	PREDEFINE_QUERY(CSPGetPlayTime)
	PREDEFINE_QUERY(CSPCreateRecallMon)
	PREDEFINE_QUERY(CSPSaveRecallMon)
	PREDEFINE_QUERY(CSPEnterServer)
	PREDEFINE_QUERY(CSPCheckConnect)
	PREDEFINE_QUERY(CSPGetServerID)
	PREDEFINE_QUERY(CSPSaveCompanion)
	PREDEFINE_QUERY(CSPSaveInven)
	PREDEFINE_QUERY(CSPSaveItem)
	PREDEFINE_QUERY(CSPSaveChar)
	PREDEFINE_QUERY(CSPLogout)
	PREDEFINE_QUERY(CSPClearTitle)
	PREDEFINE_QUERY(CSPSaveTitle)
	PREDEFINE_QUERY(CSPRoute)
	PREDEFINE_QUERY(CSPSaveSkill)
	PREDEFINE_QUERY(CSPSaveSkillMaintain)
	PREDEFINE_QUERY(CSPSaveQuest)
	PREDEFINE_QUERY(CSPSaveQuestTerm)
	PREDEFINE_QUERY(CSPSaveCabinet)
	PREDEFINE_QUERY(CSPSaveHotkey)
	PREDEFINE_QUERY(CSPSaveLocalOccupy)
	PREDEFINE_QUERY(CSPSaveCastleOccupy)
	PREDEFINE_QUERY(CSPSaveSkyGardenOccupy)
	PREDEFINE_QUERY(CSPPostCanSend)
	PREDEFINE_QUERY(CSPSavePost)
	PREDEFINE_QUERY(CSPPostRead)
	PREDEFINE_QUERY(CSPPostDelete)
	PREDEFINE_QUERY(CSPPostGetItem)
	PREDEFINE_QUERY(CSPSaveItemUsed)
	PREDEFINE_QUERY(CSPClearCurrentUser)
	PREDEFINE_QUERY(CSPRecallmonDel)
	PREDEFINE_QUERY(CSPLogSkill)
	PREDEFINE_QUERY(CSPProtectedInsert)
	PREDEFINE_QUERY(CSPProtectedDelete)
	PREDEFINE_QUERY(CSPPetDelete)
	PREDEFINE_QUERY(CSPSavePet)
	PREDEFINE_QUERY(CSPSaveCharDataStart)
	PREDEFINE_QUERY(CSPSaveCharDataEnd)
	PREDEFINE_QUERY(CSPSaveItemDataStart)
	PREDEFINE_QUERY(CSPSaveItemDataEnd)
	PREDEFINE_QUERY(CSPLoadService)
	PREDEFINE_QUERY(CSPSaveSMS)
	PREDEFINE_QUERY(CSPGetPcBangData)
	PREDEFINE_QUERY(CSPEventQuarter)
	PREDEFINE_QUERY(CSPGetCash)
	PREDEFINE_QUERY(CSPCashItemGet)
	PREDEFINE_QUERY(CSPCashItemBuy)
	//PREDEFINE_QUERY(CSPCheckMapChar)
	PREDEFINE_QUERY(CSPSaveDuringItem)
	PREDEFINE_QUERY(CSPSaveExpItem)
	PREDEFINE_QUERY(CSPSaveItemDirect)
	PREDEFINE_QUERY(CSPGuildItemPutIn)
	PREDEFINE_QUERY(CSPGuildItemTakeOut)
	PREDEFINE_QUERY(CSPGuildItemRollback)
	PREDEFINE_QUERY(CSPSaveEXP)
	PREDEFINE_QUERY(CSPSaveMoney)
	PREDEFINE_QUERY(CSPSaveActEnd)
	PREDEFINE_QUERY(CSPCashCabinetBuy)
	PREDEFINE_QUERY(CSPCashItemPutin)
	PREDEFINE_QUERY(CSPGetCashCabinetUseTime)
	PREDEFINE_QUERY(CSPInitGenItemID)
	PREDEFINE_QUERY(CSPDeleteDealItem)
	PREDEFINE_QUERY(CSPSetSaddle)
	PREDEFINE_QUERY(CSPSaveRecallMaintain)
	PREDEFINE_QUERY(CSPDeleteCompanion)
	PREDEFINE_QUERY(CSPCheckDuplicateName)
	PREDEFINE_QUERY(CSPHeroSelect)  
	PREDEFINE_QUERY(CSPStopTheClock)
	PREDEFINE_QUERY(CSPSaveCharBase)
	PREDEFINE_QUERY(CSPGetLimitedLevel)
	PREDEFINE_QUERY(CSPGetNation)
	PREDEFINE_QUERY(CSPQuestSendPost)
	PREDEFINE_QUERY(CSPGetPvPRecord)
	PREDEFINE_QUERY(CSPSavePvPRecord)
	PREDEFINE_QUERY(CSPSavePvPRecent)
	PREDEFINE_QUERY(CSPSaveCharKill)
	PREDEFINE_QUERY(CSPDuelScore)
	PREDEFINE_QUERY(CSPDuelCharAdd)	
	PREDEFINE_QUERY(CSPSaveProtectedOption)
	PREDEFINE_QUERY(CSPAuctionReg)
	PREDEFINE_QUERY(CSPAuctionRegCancel)
	PREDEFINE_QUERY(CSPAuctionBid)
	PREDEFINE_QUERY(CSPAuctionBuyDirect)
	PREDEFINE_QUERY(CSPAuctionEnd)
	PREDEFINE_QUERY(CSPSaveAuctionInterest)
	PREDEFINE_QUERY(CSPGainCashBonus)
	PREDEFINE_QUERY(CSPGetMonthPvPoint)  
	PREDEFINE_QUERY(CSPSaveMonthPvPoint)
	PREDEFINE_QUERY(CSPSaveWarlordSay)
	PREDEFINE_QUERY(CSPGetPostInfo)
	PREDEFINE_QUERY(CSPPostView)
	PREDEFINE_QUERY(CSPPostBillsUpdate)
	PREDEFINE_QUERY(CSPTournamentReward)
	PREDEFINE_QUERY(CSPSaveCharPosition)
	PREDEFINE_QUERY(CSPSaveMissionOccupy)
	PREDEFINE_QUERY(CSPMonthPvPointClear)
	PREDEFINE_QUERY(CSPTCMGiftLog)
	PREDEFINE_QUERY(CSPTCASH)
	PREDEFINE_QUERY(CSPSaveSecureCode)
	PREDEFINE_QUERY(CSPSecureCodeStatus)
#ifdef ADD_KINGDOMBALANCE
	PREDEFINE_QUERY(CSPGetOnWarBalance)
	PREDEFINE_QUERY(CSPGetWarBalance)
#endif
	PREDEFINE_QUERY(CSPSaveLastCompanion)
	PREDEFINE_QUERY(CSPGetLastCompanion)
	PREDEFINE_QUERY(CSPGetMedals)
	PREDEFINE_QUERY(CSPSaveMedals)
	PREDEFINE_QUERY(CSPClearBOWPlayers)

	PREDEFINE_QUERY(CSPGiveBOWReward)
	PREDEFINE_QUERY(CSPGiveTitle)

	PREDEFINE_QUERY(CSPClearBRPlayers)
	PREDEFINE_QUERY(CSPDeleteBRPlayer)
	PREDEFINE_QUERY(CSPGetRankPoint)
	
	PREDEFINE_QUERY(CSPGiveBRReward)
	PREDEFINE_QUERY(CSPGiveBRTeamReward)

	PREDEFINE_QUERY(CSPGetPosition)
	PREDEFINE_QUERY(CSPSaveGuildSkill)
END_INIT_QUERY()
