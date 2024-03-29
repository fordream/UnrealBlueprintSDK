//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the play fab models
//
// API: Server
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayFabPrivatePCH.h"
#include "PlayFabServerModelDecoder.h"

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Server API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Authentication
//////////////////////////////////////////////////////

FServerAuthenticateSessionTicketResult UPlayFabServerModelDecoder::decodeAuthenticateSessionTicketResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerAuthenticateSessionTicketResult tempStruct;

    /** Account info for the user whose session ticket was supplied. */
    tempStruct.UserInfo = response->GetObjectField("data")->GetObjectField("UserInfo");

    return tempStruct;
}



///////////////////////////////////////////////////////
// Account Management
//////////////////////////////////////////////////////

FServerGetPlayFabIDsFromFacebookIDsResult UPlayFabServerModelDecoder::decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetPlayFabIDsFromFacebookIDsResult tempStruct;

    /** Mapping of Facebook identifiers to PlayFab identifiers. */
    tempStruct.Data = response->GetObjectField("data")->GetObjectArrayField("Data");

    return tempStruct;
}

FServerGetUserAccountInfoResult UPlayFabServerModelDecoder::decodeGetUserAccountInfoResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetUserAccountInfoResult tempStruct;

    /** Account info for the user whose information was requested. */
    tempStruct.UserInfo = response->GetObjectField("data")->GetObjectField("UserInfo");

    return tempStruct;
}

FServerSendPushNotificationResult UPlayFabServerModelDecoder::decodeSendPushNotificationResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerSendPushNotificationResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Player Data Management
//////////////////////////////////////////////////////

FServerGetLeaderboardResult UPlayFabServerModelDecoder::decodeGetLeaderboardResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetLeaderboardResult tempStruct;

    /** Ordered list of leaderboard entries. */
    tempStruct.Leaderboard = response->GetObjectField("data")->GetObjectArrayField("Leaderboard");

    return tempStruct;
}

FServerGetLeaderboardAroundUserResult UPlayFabServerModelDecoder::decodeGetLeaderboardAroundUserResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetLeaderboardAroundUserResult tempStruct;

    /** Ordered list of leaderboard entries. */
    tempStruct.Leaderboard = response->GetObjectField("data")->GetObjectArrayField("Leaderboard");

    return tempStruct;
}

FServerGetUserDataResult UPlayFabServerModelDecoder::decodeGetUserDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetUserDataResult tempStruct;

    /** PlayFab unique identifier of the user whose custom data is being returned. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data. */
    tempStruct.DataVersion = int(response->GetObjectField("data")->GetNumberField("DataVersion"));

    /** User specific data for this title. */
    tempStruct.Data = response->GetObjectField("data")->GetObjectField("Data");

    return tempStruct;
}

FServerGetUserStatisticsResult UPlayFabServerModelDecoder::decodeGetUserStatisticsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetUserStatisticsResult tempStruct;

    /** PlayFab unique identifier of the user whose statistics are being returned. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** User statistics for the requested user. */
    tempStruct.UserStatistics = response->GetObjectField("data")->GetObjectField("UserStatistics");

    return tempStruct;
}

FServerUpdateUserDataResult UPlayFabServerModelDecoder::decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerUpdateUserDataResult tempStruct;

    /** Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data. */
    tempStruct.DataVersion = int(response->GetObjectField("data")->GetNumberField("DataVersion"));

    return tempStruct;
}

FServerUpdateUserStatisticsResult UPlayFabServerModelDecoder::decodeUpdateUserStatisticsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerUpdateUserStatisticsResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Title-Wide Data Management
//////////////////////////////////////////////////////

FServerGetCatalogItemsResult UPlayFabServerModelDecoder::decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetCatalogItemsResult tempStruct;

    /** Array of items which can be purchased. */
    tempStruct.Catalog = response->GetObjectField("data")->GetObjectArrayField("Catalog");

    return tempStruct;
}

FServerGetTitleDataResult UPlayFabServerModelDecoder::decodeGetTitleDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetTitleDataResult tempStruct;

    /** a dictionary object of key / value pairs */
    tempStruct.Data = response->GetObjectField("data")->GetObjectField("Data");

    return tempStruct;
}

FServerGetTitleNewsResult UPlayFabServerModelDecoder::decodeGetTitleNewsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetTitleNewsResult tempStruct;

    /** Array of news items. */
    tempStruct.News = response->GetObjectField("data")->GetObjectArrayField("News");

    return tempStruct;
}

FServerSetTitleDataResult UPlayFabServerModelDecoder::decodeSetTitleDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerSetTitleDataResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Player Item Management
//////////////////////////////////////////////////////

FServerModifyCharacterVirtualCurrencyResult UPlayFabServerModelDecoder::decodeModifyCharacterVirtualCurrencyResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerModifyCharacterVirtualCurrencyResult tempStruct;

    /** Name of the virtual currency which was modified. */
    tempStruct.VirtualCurrency = response->GetObjectField("data")->GetStringField("VirtualCurrency");

    /** Balance of the virtual currency after modification. */
    tempStruct.Balance = int(response->GetObjectField("data")->GetNumberField("Balance"));

    return tempStruct;
}

FServerModifyUserVirtualCurrencyResult UPlayFabServerModelDecoder::decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerModifyUserVirtualCurrencyResult tempStruct;

    /** User currency was subtracted from. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** Name of the virtual currency which was modified. */
    tempStruct.VirtualCurrency = response->GetObjectField("data")->GetStringField("VirtualCurrency");

    /** Amount added or subtracted from the user's virtual currency. Maximum VC balance is Int32 (2,147,483,647). Any increase over this value will be discarded. */
    tempStruct.BalanceChange = int(response->GetObjectField("data")->GetNumberField("BalanceChange"));

    /** Balance of the virtual currency after modification. */
    tempStruct.Balance = int(response->GetObjectField("data")->GetNumberField("Balance"));

    return tempStruct;
}

FServerGetCharacterInventoryResult UPlayFabServerModelDecoder::decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetCharacterInventoryResult tempStruct;

    /** PlayFab unique identifier of the user whose character inventory is being returned. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** Unique identifier of the character for this inventory. */
    tempStruct.CharacterId = response->GetObjectField("data")->GetStringField("CharacterId");

    /** Array of inventory items belonging to the character. */
    tempStruct.Inventory = response->GetObjectField("data")->GetObjectArrayField("Inventory");

    /** Array of virtual currency balance(s) belonging to the character. */
    tempStruct.VirtualCurrency = response->GetObjectField("data")->GetObjectField("VirtualCurrency");

    /** Array of remaining times and timestamps for virtual currencies. */
    tempStruct.VirtualCurrencyRechargeTimes = response->GetObjectField("data")->GetObjectField("VirtualCurrencyRechargeTimes");

    return tempStruct;
}

FServerGetUserInventoryResult UPlayFabServerModelDecoder::decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetUserInventoryResult tempStruct;

    /** PlayFab unique identifier of the user whose inventory is being returned. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** Array of inventory items belonging to the user. */
    tempStruct.Inventory = response->GetObjectField("data")->GetObjectArrayField("Inventory");

    /** Array of virtual currency balance(s) belonging to the user. */
    tempStruct.VirtualCurrency = response->GetObjectField("data")->GetObjectField("VirtualCurrency");

    /** Array of remaining times and timestamps for virtual currencies. */
    tempStruct.VirtualCurrencyRechargeTimes = response->GetObjectField("data")->GetObjectField("VirtualCurrencyRechargeTimes");

    return tempStruct;
}

FServerGrantItemsToCharacterResult UPlayFabServerModelDecoder::decodeGrantItemsToCharacterResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGrantItemsToCharacterResult tempStruct;

    /** Array of items granted to users. */
    tempStruct.ItemGrantResults = response->GetObjectField("data")->GetObjectArrayField("ItemGrantResults");

    return tempStruct;
}

FServerGrantItemsToUserResult UPlayFabServerModelDecoder::decodeGrantItemsToUserResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGrantItemsToUserResult tempStruct;

    /** Array of items granted to users. */
    tempStruct.ItemGrantResults = response->GetObjectField("data")->GetObjectArrayField("ItemGrantResults");

    return tempStruct;
}

FServerGrantItemsToUsersResult UPlayFabServerModelDecoder::decodeGrantItemsToUsersResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGrantItemsToUsersResult tempStruct;

    /** Array of items granted to users. */
    tempStruct.ItemGrantResults = response->GetObjectField("data")->GetObjectArrayField("ItemGrantResults");

    return tempStruct;
}

FServerModifyItemUsesResult UPlayFabServerModelDecoder::decodeModifyItemUsesResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerModifyItemUsesResult tempStruct;

    /** Unique instance identifier of the item with uses consumed. */
    tempStruct.ItemInstanceId = response->GetObjectField("data")->GetStringField("ItemInstanceId");

    /** Number of uses remaining on the item. */
    tempStruct.RemainingUses = int(response->GetObjectField("data")->GetNumberField("RemainingUses"));

    return tempStruct;
}

FServerMoveItemToCharacterFromCharacterResult UPlayFabServerModelDecoder::decodeMoveItemToCharacterFromCharacterResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerMoveItemToCharacterFromCharacterResult tempStruct;

    return tempStruct;
}

FServerMoveItemToCharacterFromUserResult UPlayFabServerModelDecoder::decodeMoveItemToCharacterFromUserResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerMoveItemToCharacterFromUserResult tempStruct;

    return tempStruct;
}

FServerMoveItemToUserFromCharacterResult UPlayFabServerModelDecoder::decodeMoveItemToUserFromCharacterResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerMoveItemToUserFromCharacterResult tempStruct;

    return tempStruct;
}

FServerRedeemCouponResult UPlayFabServerModelDecoder::decodeRedeemCouponResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerRedeemCouponResult tempStruct;

    /** Items granted to the player as a result of redeeming the coupon. */
    tempStruct.GrantedItems = response->GetObjectField("data")->GetObjectArrayField("GrantedItems");

    return tempStruct;
}

FServerReportPlayerServerResult UPlayFabServerModelDecoder::decodeReportPlayerServerResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerReportPlayerServerResult tempStruct;

    /**  */
    tempStruct.Updated = response->GetObjectField("data")->GetBoolField("Updated");

    /**  */
    tempStruct.SubmissionsRemaining = int(response->GetObjectField("data")->GetNumberField("SubmissionsRemaining"));

    return tempStruct;
}

FServerUpdateUserInventoryItemDataResult UPlayFabServerModelDecoder::decodeUpdateUserInventoryItemDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerUpdateUserInventoryItemDataResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Friend List Management
//////////////////////////////////////////////////////



///////////////////////////////////////////////////////
// Matchmaking APIs
//////////////////////////////////////////////////////

FServerNotifyMatchmakerPlayerLeftResult UPlayFabServerModelDecoder::decodeNotifyMatchmakerPlayerLeftResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerNotifyMatchmakerPlayerLeftResult tempStruct;

    /** State of user leaving the Game Server Instance. */
    tempStruct.PlayerState = response->GetObjectField("data")->GetStringField("PlayerState");

    return tempStruct;
}

FServerRedeemMatchmakerTicketResult UPlayFabServerModelDecoder::decodeRedeemMatchmakerTicketResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerRedeemMatchmakerTicketResult tempStruct;

    /** Boolean indicating whether the ticket was validated by the PlayFab service. */
    tempStruct.TicketIsValid = response->GetObjectField("data")->GetBoolField("TicketIsValid");

    /** Error value if the ticket was not validated. */
    tempStruct.Error = response->GetObjectField("data")->GetStringField("Error");

    /** User account information for the user validated. */
    tempStruct.UserInfo = response->GetObjectField("data")->GetObjectField("UserInfo");

    return tempStruct;
}



///////////////////////////////////////////////////////
// Steam-Specific APIs
//////////////////////////////////////////////////////

FServerAwardSteamAchievementResult UPlayFabServerModelDecoder::decodeAwardSteamAchievementResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerAwardSteamAchievementResult tempStruct;

    /** Array of achievements granted. */
    tempStruct.AchievementResults = response->GetObjectField("data")->GetObjectArrayField("AchievementResults");

    return tempStruct;
}



///////////////////////////////////////////////////////
// Analytics
//////////////////////////////////////////////////////

FServerLogEventResult UPlayFabServerModelDecoder::decodeLogEventResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerLogEventResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Shared Group Data
//////////////////////////////////////////////////////

FServerAddSharedGroupMembersResult UPlayFabServerModelDecoder::decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerAddSharedGroupMembersResult tempStruct;

    return tempStruct;
}

FServerCreateSharedGroupResult UPlayFabServerModelDecoder::decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerCreateSharedGroupResult tempStruct;

    /** Unique identifier for the shared group. */
    tempStruct.SharedGroupId = response->GetObjectField("data")->GetStringField("SharedGroupId");

    return tempStruct;
}

FServerEmptyResult UPlayFabServerModelDecoder::decodeEmptyResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerEmptyResult tempStruct;

    return tempStruct;
}

FServerGetPublisherDataResult UPlayFabServerModelDecoder::decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetPublisherDataResult tempStruct;

    /** a dictionary object of key / value pairs */
    tempStruct.Data = response->GetObjectField("data")->GetObjectField("Data");

    return tempStruct;
}

FServerGetSharedGroupDataResult UPlayFabServerModelDecoder::decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetSharedGroupDataResult tempStruct;

    /** Data for the requested keys. */
    tempStruct.Data = response->GetObjectField("data")->GetObjectField("Data");

    /** List of PlayFabId identifiers for the members of this group, if requested. */
    tempStruct.Members = FString::Join(response->GetObjectField("data")->GetStringArrayField("Members"), TEXT(","));

    return tempStruct;
}

FServerRemoveSharedGroupMembersResult UPlayFabServerModelDecoder::decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerRemoveSharedGroupMembersResult tempStruct;

    return tempStruct;
}

FServerSetPublisherDataResult UPlayFabServerModelDecoder::decodeSetPublisherDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerSetPublisherDataResult tempStruct;

    return tempStruct;
}

FServerUpdateSharedGroupDataResult UPlayFabServerModelDecoder::decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerUpdateSharedGroupDataResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Content
//////////////////////////////////////////////////////

FServerGetContentDownloadUrlResult UPlayFabServerModelDecoder::decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetContentDownloadUrlResult tempStruct;

    /** URL for downloading content via HTTP GET or HEAD method. The URL will expire in 1 hour. */
    tempStruct.URL = response->GetObjectField("data")->GetStringField("URL");

    return tempStruct;
}



///////////////////////////////////////////////////////
// Characters
//////////////////////////////////////////////////////

FServerDeleteCharacterFromUserResult UPlayFabServerModelDecoder::decodeDeleteCharacterFromUserResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerDeleteCharacterFromUserResult tempStruct;

    return tempStruct;
}

FServerListUsersCharactersResult UPlayFabServerModelDecoder::decodeListUsersCharactersResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerListUsersCharactersResult tempStruct;

    /**  */
    tempStruct.Characters = response->GetObjectField("data")->GetObjectArrayField("Characters");

    return tempStruct;
}

FServerGetCharacterLeaderboardResult UPlayFabServerModelDecoder::decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetCharacterLeaderboardResult tempStruct;

    /** Ordered list of leaderboard entries. */
    tempStruct.Leaderboard = response->GetObjectField("data")->GetObjectArrayField("Leaderboard");

    return tempStruct;
}

FServerGetCharacterStatisticsResult UPlayFabServerModelDecoder::decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetCharacterStatisticsResult tempStruct;

    /** PlayFab unique identifier of the user whose character statistics are being returned. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** Unique identifier of the character for the statistics. */
    tempStruct.CharacterId = response->GetObjectField("data")->GetStringField("CharacterId");

    /** Character statistics for the requested user. */
    tempStruct.CharacterStatistics = response->GetObjectField("data")->GetObjectField("CharacterStatistics");

    return tempStruct;
}

FServerGetLeaderboardAroundCharacterResult UPlayFabServerModelDecoder::decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetLeaderboardAroundCharacterResult tempStruct;

    /** Ordered list of leaderboard entries. */
    tempStruct.Leaderboard = response->GetObjectField("data")->GetObjectArrayField("Leaderboard");

    return tempStruct;
}

FServerGetLeaderboardForUsersCharactersResult UPlayFabServerModelDecoder::decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetLeaderboardForUsersCharactersResult tempStruct;

    /** Ordered list of leaderboard entries. */
    tempStruct.Leaderboard = response->GetObjectField("data")->GetObjectArrayField("Leaderboard");

    return tempStruct;
}

FServerGrantCharacterToUserResult UPlayFabServerModelDecoder::decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGrantCharacterToUserResult tempStruct;

    /** Unique identifier tagged to this character. */
    tempStruct.CharacterId = response->GetObjectField("data")->GetStringField("CharacterId");

    return tempStruct;
}

FServerUpdateCharacterStatisticsResult UPlayFabServerModelDecoder::decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerUpdateCharacterStatisticsResult tempStruct;

    return tempStruct;
}



///////////////////////////////////////////////////////
// Character Data
//////////////////////////////////////////////////////

FServerGetCharacterDataResult UPlayFabServerModelDecoder::decodeGetCharacterDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerGetCharacterDataResult tempStruct;

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    tempStruct.PlayFabId = response->GetObjectField("data")->GetStringField("PlayFabId");

    /** Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data. */
    tempStruct.DataVersion = int(response->GetObjectField("data")->GetNumberField("DataVersion"));

    /** User specific data for this title. */
    tempStruct.Data = response->GetObjectField("data")->GetObjectField("Data");

    /** Unique PlayFab assigned ID for a specific character owned by a user */
    tempStruct.CharacterId = response->GetObjectField("data")->GetStringField("CharacterId");

    return tempStruct;
}

FServerUpdateCharacterDataResult UPlayFabServerModelDecoder::decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* response)
{
    // Temp ustruct
    FServerUpdateCharacterDataResult tempStruct;

    /** Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data. */
    tempStruct.DataVersion = int(response->GetObjectField("data")->GetNumberField("DataVersion"));

    return tempStruct;
}



