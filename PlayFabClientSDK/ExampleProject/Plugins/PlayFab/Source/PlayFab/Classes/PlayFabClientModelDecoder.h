#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Client
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabClientModels.h"
#include "PlayFabClientModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS()
class PLAYFAB_API UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    //////////////////////////////////////////////////////////////////////////
    // Generated PlayFab Client API Functions
    //////////////////////////////////////////////////////////////////////////


    ///////////////////////////////////////////////////////
    // Authentication
    //////////////////////////////////////////////////////

    /** Decode the GetPhotonAuthenticationTokenResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Authentication Models")
        static FClientGetPhotonAuthenticationTokenResult decodeGetPhotonAuthenticationTokenResultResponse(UPlayFabJsonObject* response);

    /** Decode the LoginResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Authentication Models")
        static FClientLoginResult decodeLoginResultResponse(UPlayFabJsonObject* response);

    /** Decode the RegisterPlayFabUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Authentication Models")
        static FClientRegisterPlayFabUserResult decodeRegisterPlayFabUserResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Account Management
    //////////////////////////////////////////////////////

    /** Decode the AddUsernamePasswordResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientAddUsernamePasswordResult decodeAddUsernamePasswordResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetAccountInfoResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientGetAccountInfoResult decodeGetAccountInfoResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPlayFabIDsFromFacebookIDsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientGetPlayFabIDsFromFacebookIDsResult decodeGetPlayFabIDsFromFacebookIDsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPlayFabIDsFromGameCenterIDsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientGetPlayFabIDsFromGameCenterIDsResult decodeGetPlayFabIDsFromGameCenterIDsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPlayFabIDsFromGoogleIDsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientGetPlayFabIDsFromGoogleIDsResult decodeGetPlayFabIDsFromGoogleIDsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPlayFabIDsFromSteamIDsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientGetPlayFabIDsFromSteamIDsResult decodeGetPlayFabIDsFromSteamIDsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserCombinedInfoResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientGetUserCombinedInfoResult decodeGetUserCombinedInfoResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkAndroidDeviceIDResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkAndroidDeviceIDResult decodeLinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkCustomIDResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkCustomIDResult decodeLinkCustomIDResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkFacebookAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkFacebookAccountResult decodeLinkFacebookAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkGameCenterAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkGameCenterAccountResult decodeLinkGameCenterAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkGoogleAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkGoogleAccountResult decodeLinkGoogleAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkIOSDeviceIDResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkIOSDeviceIDResult decodeLinkIOSDeviceIDResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkKongregateAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkKongregateAccountResult decodeLinkKongregateAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the LinkSteamAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientLinkSteamAccountResult decodeLinkSteamAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the SendAccountRecoveryEmailResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientSendAccountRecoveryEmailResult decodeSendAccountRecoveryEmailResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkAndroidDeviceIDResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkAndroidDeviceIDResult decodeUnlinkAndroidDeviceIDResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkCustomIDResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkCustomIDResult decodeUnlinkCustomIDResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkFacebookAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkFacebookAccountResult decodeUnlinkFacebookAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkGameCenterAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkGameCenterAccountResult decodeUnlinkGameCenterAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkGoogleAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkGoogleAccountResult decodeUnlinkGoogleAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkIOSDeviceIDResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkIOSDeviceIDResult decodeUnlinkIOSDeviceIDResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkKongregateAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkKongregateAccountResult decodeUnlinkKongregateAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlinkSteamAccountResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUnlinkSteamAccountResult decodeUnlinkSteamAccountResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateUserTitleDisplayNameResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Account Management Models")
        static FClientUpdateUserTitleDisplayNameResult decodeUpdateUserTitleDisplayNameResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Player Data Management
    //////////////////////////////////////////////////////

    /** Decode the GetLeaderboardResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Data Management Models")
        static FClientGetLeaderboardResult decodeGetLeaderboardResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetLeaderboardAroundCurrentUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Data Management Models")
        static FClientGetLeaderboardAroundCurrentUserResult decodeGetLeaderboardAroundCurrentUserResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Data Management Models")
        static FClientGetUserDataResult decodeGetUserDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserStatisticsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Data Management Models")
        static FClientGetUserStatisticsResult decodeGetUserStatisticsResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateUserDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Data Management Models")
        static FClientUpdateUserDataResult decodeUpdateUserDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateUserStatisticsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Data Management Models")
        static FClientUpdateUserStatisticsResult decodeUpdateUserStatisticsResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Title-Wide Data Management
    //////////////////////////////////////////////////////

    /** Decode the GetCatalogItemsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Title-Wide Data Management Models")
        static FClientGetCatalogItemsResult decodeGetCatalogItemsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetStoreItemsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Title-Wide Data Management Models")
        static FClientGetStoreItemsResult decodeGetStoreItemsResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetTitleDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Title-Wide Data Management Models")
        static FClientGetTitleDataResult decodeGetTitleDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetTitleNewsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Title-Wide Data Management Models")
        static FClientGetTitleNewsResult decodeGetTitleNewsResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Player Item Management
    //////////////////////////////////////////////////////

    /** Decode the ModifyUserVirtualCurrencyResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientModifyUserVirtualCurrencyResult decodeModifyUserVirtualCurrencyResultResponse(UPlayFabJsonObject* response);

    /** Decode the ConfirmPurchaseResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientConfirmPurchaseResult decodeConfirmPurchaseResultResponse(UPlayFabJsonObject* response);

    /** Decode the ConsumeItemResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientConsumeItemResult decodeConsumeItemResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetCharacterInventoryResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientGetCharacterInventoryResult decodeGetCharacterInventoryResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPurchaseResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientGetPurchaseResult decodeGetPurchaseResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetUserInventoryResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientGetUserInventoryResult decodeGetUserInventoryResultResponse(UPlayFabJsonObject* response);

    /** Decode the PayForPurchaseResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientPayForPurchaseResult decodePayForPurchaseResultResponse(UPlayFabJsonObject* response);

    /** Decode the PurchaseItemResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientPurchaseItemResult decodePurchaseItemResultResponse(UPlayFabJsonObject* response);

    /** Decode the RedeemCouponResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientRedeemCouponResult decodeRedeemCouponResultResponse(UPlayFabJsonObject* response);

    /** Decode the ReportPlayerClientResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientReportPlayerClientResult decodeReportPlayerClientResultResponse(UPlayFabJsonObject* response);

    /** Decode the StartPurchaseResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientStartPurchaseResult decodeStartPurchaseResultResponse(UPlayFabJsonObject* response);

    /** Decode the UnlockContainerItemResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Player Item Management Models")
        static FClientUnlockContainerItemResult decodeUnlockContainerItemResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Friend List Management
    //////////////////////////////////////////////////////

    /** Decode the AddFriendResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Friend List Management Models")
        static FClientAddFriendResult decodeAddFriendResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetFriendsListResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Friend List Management Models")
        static FClientGetFriendsListResult decodeGetFriendsListResultResponse(UPlayFabJsonObject* response);

    /** Decode the RemoveFriendResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Friend List Management Models")
        static FClientRemoveFriendResult decodeRemoveFriendResultResponse(UPlayFabJsonObject* response);

    /** Decode the SetFriendTagsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Friend List Management Models")
        static FClientSetFriendTagsResult decodeSetFriendTagsResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // IOS-Specific APIs
    //////////////////////////////////////////////////////

    /** Decode the RegisterForIOSPushNotificationResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | IOS-Specific APIs Models")
        static FClientRegisterForIOSPushNotificationResult decodeRegisterForIOSPushNotificationResultResponse(UPlayFabJsonObject* response);

    /** Decode the RestoreIOSPurchasesResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | IOS-Specific APIs Models")
        static FClientRestoreIOSPurchasesResult decodeRestoreIOSPurchasesResultResponse(UPlayFabJsonObject* response);

    /** Decode the ValidateIOSReceiptResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | IOS-Specific APIs Models")
        static FClientValidateIOSReceiptResult decodeValidateIOSReceiptResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Matchmaking APIs
    //////////////////////////////////////////////////////

    /** Decode the CurrentGamesResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Matchmaking APIs Models")
        static FClientCurrentGamesResult decodeCurrentGamesResultResponse(UPlayFabJsonObject* response);

    /** Decode the GameServerRegionsResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Matchmaking APIs Models")
        static FClientGameServerRegionsResult decodeGameServerRegionsResultResponse(UPlayFabJsonObject* response);

    /** Decode the MatchmakeResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Matchmaking APIs Models")
        static FClientMatchmakeResult decodeMatchmakeResultResponse(UPlayFabJsonObject* response);

    /** Decode the StartGameResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Matchmaking APIs Models")
        static FClientStartGameResult decodeStartGameResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Android-Specific APIs
    //////////////////////////////////////////////////////

    /** Decode the AndroidDevicePushNotificationRegistrationResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Android-Specific APIs Models")
        static FClientAndroidDevicePushNotificationRegistrationResult decodeAndroidDevicePushNotificationRegistrationResultResponse(UPlayFabJsonObject* response);

    /** Decode the ValidateGooglePlayPurchaseResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Android-Specific APIs Models")
        static FClientValidateGooglePlayPurchaseResult decodeValidateGooglePlayPurchaseResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Analytics
    //////////////////////////////////////////////////////

    /** Decode the LogEventResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Analytics Models")
        static FClientLogEventResult decodeLogEventResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Shared Group Data
    //////////////////////////////////////////////////////

    /** Decode the AddSharedGroupMembersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Shared Group Data Models")
        static FClientAddSharedGroupMembersResult decodeAddSharedGroupMembersResultResponse(UPlayFabJsonObject* response);

    /** Decode the CreateSharedGroupResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Shared Group Data Models")
        static FClientCreateSharedGroupResult decodeCreateSharedGroupResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetPublisherDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Shared Group Data Models")
        static FClientGetPublisherDataResult decodeGetPublisherDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetSharedGroupDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Shared Group Data Models")
        static FClientGetSharedGroupDataResult decodeGetSharedGroupDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the RemoveSharedGroupMembersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Shared Group Data Models")
        static FClientRemoveSharedGroupMembersResult decodeRemoveSharedGroupMembersResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateSharedGroupDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Shared Group Data Models")
        static FClientUpdateSharedGroupDataResult decodeUpdateSharedGroupDataResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Sony-specific APIs
    //////////////////////////////////////////////////////



    ///////////////////////////////////////////////////////
    // Server-Side Cloud Script
    //////////////////////////////////////////////////////

    /** Decode the GetCloudScriptUrlResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Server-Side Cloud Script Models")
        static FClientGetCloudScriptUrlResult decodeGetCloudScriptUrlResultResponse(UPlayFabJsonObject* response);

    /** Decode the RunCloudScriptResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Server-Side Cloud Script Models")
        static FClientRunCloudScriptResult decodeRunCloudScriptResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Content
    //////////////////////////////////////////////////////

    /** Decode the GetContentDownloadUrlResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Content Models")
        static FClientGetContentDownloadUrlResult decodeGetContentDownloadUrlResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Characters
    //////////////////////////////////////////////////////

    /** Decode the ListUsersCharactersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Characters Models")
        static FClientListUsersCharactersResult decodeListUsersCharactersResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetCharacterLeaderboardResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Characters Models")
        static FClientGetCharacterLeaderboardResult decodeGetCharacterLeaderboardResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetLeaderboardAroundCharacterResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Characters Models")
        static FClientGetLeaderboardAroundCharacterResult decodeGetLeaderboardAroundCharacterResultResponse(UPlayFabJsonObject* response);

    /** Decode the GetLeaderboardForUsersCharactersResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Characters Models")
        static FClientGetLeaderboardForUsersCharactersResult decodeGetLeaderboardForUsersCharactersResultResponse(UPlayFabJsonObject* response);

    /** Decode the GrantCharacterToUserResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Characters Models")
        static FClientGrantCharacterToUserResult decodeGrantCharacterToUserResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Character Data
    //////////////////////////////////////////////////////

    /** Decode the GetCharacterDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Character Data Models")
        static FClientGetCharacterDataResult decodeGetCharacterDataResultResponse(UPlayFabJsonObject* response);

    /** Decode the UpdateCharacterDataResult response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Character Data Models")
        static FClientUpdateCharacterDataResult decodeUpdateCharacterDataResultResponse(UPlayFabJsonObject* response);



    ///////////////////////////////////////////////////////
    // Amazon-Specific APIs
    //////////////////////////////////////////////////////



    ///////////////////////////////////////////////////////
    // Trading
    //////////////////////////////////////////////////////

    /** Decode the AcceptTradeResponse response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Trading Models")
        static FClientAcceptTradeResponse decodeAcceptTradeResponseResponse(UPlayFabJsonObject* response);

    /** Decode the CancelTradeResponse response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Trading Models")
        static FClientCancelTradeResponse decodeCancelTradeResponseResponse(UPlayFabJsonObject* response);

    /** Decode the GetPlayerTradesResponse response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Trading Models")
        static FClientGetPlayerTradesResponse decodeGetPlayerTradesResponseResponse(UPlayFabJsonObject* response);

    /** Decode the GetTradeStatusResponse response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Trading Models")
        static FClientGetTradeStatusResponse decodeGetTradeStatusResponseResponse(UPlayFabJsonObject* response);

    /** Decode the OpenTradeResponse response object*/
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Client | Trading Models")
        static FClientOpenTradeResponse decodeOpenTradeResponseResponse(UPlayFabJsonObject* response);



};
