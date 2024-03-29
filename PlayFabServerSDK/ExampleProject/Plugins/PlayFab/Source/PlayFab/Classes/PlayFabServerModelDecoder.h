#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Server
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabServerModels.h"
#include "PlayFabServerModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS()
class PLAYFAB_API UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    //////////////////////////////////////////////////////////////////////////
    // Generated PlayFab Server API Functions
    //////////////////////////////////////////////////////////////////////////


    ///////////////////////////////////////////////////////
    // Authentication
    //////////////////////////////////////////////////////

    /** Decode the AuthenticateSessionTicketResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Authentication Models")
        static FServerAuthenticateSessionTicketResult decodeAuthenticateSessionTicketResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Account Management
    //////////////////////////////////////////////////////

    /** Decode the GetPlayFabIDsFromFacebookIDsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Account Management Models")
        static FServerGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserAccountInfoResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Account Management Models")
        static FServerGetUserAccountInfoResult decodeGetUserAccountInfoResultResponse(UPlayFabJsonObject* response);

    /** Decode the SendPushNotificationResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Account Management Models")
        static FServerSendPushNotificationResult decodeSendPushNotificationResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Player Data Management
    //////////////////////////////////////////////////////

    /** Decode the GetLeaderboardResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Data Management Models")
        static FServerGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetLeaderboardAroundUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Data Management Models")
        static FServerGetLeaderboardAroundUserResult decodeGetLeaderboardAroundUserResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Data Management Models")
        static FServerGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserStatisticsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Data Management Models")
        static FServerGetUserStatisticsResult decodeGetUserStatisticsResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateUserDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Data Management Models")
        static FServerUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateUserStatisticsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Data Management Models")
        static FServerUpdateUserStatisticsResult decodeUpdateUserStatisticsResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Title-Wide Data Management
    //////////////////////////////////////////////////////

    /** Decode the GetCatalogItemsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Title-Wide Data Management Models")
        static FServerGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetTitleDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Title-Wide Data Management Models")
        static FServerGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetTitleNewsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Title-Wide Data Management Models")
        static FServerGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* response);

    /** Decode the SetTitleDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Title-Wide Data Management Models")
        static FServerSetTitleDataResult decodeSetTitleDataResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Player Item Management
    //////////////////////////////////////////////////////

    /** Decode the ModifyCharacterVirtualCurrencyResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerModifyCharacterVirtualCurrencyResult decodeModifyCharacterVirtualCurrencyResultResponse(UPlayFabJsonObject* response);

    /** Decode the ModifyUserVirtualCurrencyResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetCharacterInventoryResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserInventoryResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response);

    /** Decode the GrantItemsToCharacterResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerGrantItemsToCharacterResult decodeGrantItemsToCharacterResultResponse(UPlayFabJsonObject* response);

    /** Decode the GrantItemsToUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerGrantItemsToUserResult decodeGrantItemsToUserResultResponse(UPlayFabJsonObject* response);

    /** Decode the GrantItemsToUsersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerGrantItemsToUsersResult decodeGrantItemsToUsersResultResponse(UPlayFabJsonObject* response);

    /** Decode the ModifyItemUsesResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerModifyItemUsesResult decodeModifyItemUsesResultResponse(UPlayFabJsonObject* response);

    /** Decode the MoveItemToCharacterFromCharacterResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerMoveItemToCharacterFromCharacterResult decodeMoveItemToCharacterFromCharacterResultResponse(UPlayFabJsonObject* response);

    /** Decode the MoveItemToCharacterFromUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerMoveItemToCharacterFromUserResult decodeMoveItemToCharacterFromUserResultResponse(UPlayFabJsonObject* response);

    /** Decode the MoveItemToUserFromCharacterResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerMoveItemToUserFromCharacterResult decodeMoveItemToUserFromCharacterResultResponse(UPlayFabJsonObject* response);

    /** Decode the RedeemCouponResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* response);

    /** Decode the ReportPlayerServerResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerReportPlayerServerResult decodeReportPlayerServerResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateUserInventoryItemDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Player Item Management Models")
        static FServerUpdateUserInventoryItemDataResult decodeUpdateUserInventoryItemDataResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Friend List Management
    //////////////////////////////////////////////////////



    ///////////////////////////////////////////////////////
    // Matchmaking APIs
    //////////////////////////////////////////////////////

    /** Decode the NotifyMatchmakerPlayerLeftResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Matchmaking APIs Models")
        static FServerNotifyMatchmakerPlayerLeftResult decodeNotifyMatchmakerPlayerLeftResultResponse(UPlayFabJsonObject* response);

    /** Decode the RedeemMatchmakerTicketResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Matchmaking APIs Models")
        static FServerRedeemMatchmakerTicketResult decodeRedeemMatchmakerTicketResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Steam-Specific APIs
    //////////////////////////////////////////////////////

    /** Decode the AwardSteamAchievementResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Steam-Specific APIs Models")
        static FServerAwardSteamAchievementResult decodeAwardSteamAchievementResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Analytics
    //////////////////////////////////////////////////////

    /** Decode the LogEventResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Analytics Models")
        static FServerLogEventResult decodeLogEventResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Shared Group Data
    //////////////////////////////////////////////////////

    /** Decode the AddSharedGroupMembersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* response);

    /** Decode the CreateSharedGroupResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* response);

    /** Decode the EmptyResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerEmptyResult decodeEmptyResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPublisherDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetSharedGroupDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the RemoveSharedGroupMembersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* response);

    /** Decode the SetPublisherDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerSetPublisherDataResult decodeSetPublisherDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateSharedGroupDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Shared Group Data Models")
        static FServerUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Content
    //////////////////////////////////////////////////////

    /** Decode the GetContentDownloadUrlResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Content Models")
        static FServerGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Characters
    //////////////////////////////////////////////////////

    /** Decode the DeleteCharacterFromUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerDeleteCharacterFromUserResult decodeDeleteCharacterFromUserResultResponse(UPlayFabJsonObject* response);

    /** Decode the ListUsersCharactersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetCharacterLeaderboardResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetCharacterStatisticsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerGetCharacterStatisticsResult decodeGetCharacterStatisticsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetLeaderboardAroundCharacterResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetLeaderboardForUsersCharactersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* response);

    /** Decode the GrantCharacterToUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateCharacterStatisticsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Characters Models")
        static FServerUpdateCharacterStatisticsResult decodeUpdateCharacterStatisticsResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Character Data
    //////////////////////////////////////////////////////

    /** Decode the GetCharacterDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Character Data Models")
        static FServerGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateCharacterDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Server | Character Data Models")
        static FServerUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* response);



};
