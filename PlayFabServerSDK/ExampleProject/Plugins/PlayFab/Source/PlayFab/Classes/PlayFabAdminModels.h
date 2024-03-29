#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Admin
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabAdminModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Admin API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Account Management
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminLookupUserAccountInfoRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString PlayFabId;

    /** User email address attached to their account */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString Email;

    /** PlayFab username for the account (3-20 characters) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString Username;

    /** Title specific username to match against existing user accounts */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString TitleDisplayName;

};

USTRUCT(BlueprintType)
struct FAdminLookupUserAccountInfoResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** User info for the user matching the request */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        UPlayFabJsonObject* UserInfo;
};

USTRUCT(BlueprintType)
struct FAdminBlankResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminResetUsersRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Array of users to reset */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        TArray<UPlayFabJsonObject*> Users;

};

USTRUCT(BlueprintType)
struct FAdminSendAccountRecoveryEmailRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** User email address attached to their account */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString Email;

};

USTRUCT(BlueprintType)
struct FAdminSendAccountRecoveryEmailResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminUpdateUserTitleDisplayNameRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose title specific display name is to be changed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString PlayFabId;

    /** new title display name for the user - must be between 3 and 25 characters */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString DisplayName;

};

USTRUCT(BlueprintType)
struct FAdminUpdateUserTitleDisplayNameResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** current title display name for the user (this will be the original display name if the rename attempt failed) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Account Management Models")
        FString DisplayName;

};



///////////////////////////////////////////////////////
// Player Data Management
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminDeleteUsersRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** An array of unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString PlayFabIds;

};

USTRUCT(BlueprintType)
struct FAdminDeleteUsersResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminGetDataReportRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Report name */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString ReportName;

    /** Reporting year (UTC) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        int32 Year;
    /** Reporting month (UTC) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        int32 Month;
    /** Reporting year (UTC) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        int32 Day;
};

USTRUCT(BlueprintType)
struct FAdminGetDataReportResult
{
    GENERATED_USTRUCT_BODY()

public:

    /**  */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString DownloadUrl;

};

USTRUCT(BlueprintType)
struct FAdminGetUserDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString PlayFabId;

    /** Specific keys to search for in the custom user data. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString Keys;

    /** The version that currently exists according to the caller. The call will return the data for all of the keys if the version in the system is greater than this. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        int32 IfChangedFromDataVersion;
};

USTRUCT(BlueprintType)
struct FAdminGetUserDataResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose custom data is being returned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString PlayFabId;

    /** Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        int32 DataVersion;
    /** User specific data for this title. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        UPlayFabJsonObject* Data;

};

USTRUCT(BlueprintType)
struct FAdminResetUserStatisticsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString PlayFabId;

};

USTRUCT(BlueprintType)
struct FAdminResetUserStatisticsResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminUpdateUserDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString PlayFabId;

    /** Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace, are limited in size, and may not begin with a '!' character. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        UPlayFabJsonObject* Data;

    /** Optional list of Data-keys to remove from UserData.  Some SDKs cannot insert null-values into Data due to language constraints.  Use this to delete the keys directly. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString KeysToRemove;

    /** Permission to be applied to all user data keys written in this request. Defaults to "private" if not set. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        EPermissionEnum Permission;

};

USTRUCT(BlueprintType)
struct FAdminUpdateUserDataResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        int32 DataVersion;
};

USTRUCT(BlueprintType)
struct FAdminUpdateUserInternalDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString PlayFabId;

    /** Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace, are limited in size, and may not begin with a '!' character. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        UPlayFabJsonObject* Data;

    /** Optional list of Data-keys to remove from UserData.  Some SDKs cannot insert null-values into Data due to language constraints.  Use this to delete the keys directly. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Data Management Models")
        FString KeysToRemove;

};



///////////////////////////////////////////////////////
// Title-Wide Data Management
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminAddNewsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Time this news was published. If not set, defaults to now. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Timestamp;

    /** Title (headline) of the news item */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Title;

    /** Body text of the news */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Body;

};

USTRUCT(BlueprintType)
struct FAdminAddNewsResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique id of the new news item */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString NewsId;

};

USTRUCT(BlueprintType)
struct FAdminAddVirtualCurrencyTypesRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** List of virtual currencies and their initial deposits (the amount a user is granted when signing in for the first time) to the title */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> VirtualCurrencies;

};

USTRUCT(BlueprintType)
struct FAdminGetCatalogItemsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Which catalog is being requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString CatalogVersion;

};

USTRUCT(BlueprintType)
struct FAdminGetCatalogItemsResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Array of items which can be purchased. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> Catalog;

};

USTRUCT(BlueprintType)
struct FAdminGetRandomResultTablesRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** catalog version to fetch tables from. Use default catalog version if null */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString CatalogVersion;

};

USTRUCT(BlueprintType)
struct FAdminGetRandomResultTablesResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** array of random result tables currently available */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        UPlayFabJsonObject* Tables;

};

USTRUCT(BlueprintType)
struct FAdminGetStoreItemsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** catalog version to store items from. Use default catalog version if null */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString CatalogVersion;

    /** Unqiue identifier for the store which is being requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString StoreId;

};

USTRUCT(BlueprintType)
struct FAdminGetStoreItemsResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Array of items which can be purchased from this store. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> Store;

};

USTRUCT(BlueprintType)
struct FAdminGetTitleDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Specific keys to search for in the title data (leave null to get all keys) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Keys;

};

USTRUCT(BlueprintType)
struct FAdminGetTitleDataResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** a dictionary object of key / value pairs */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        UPlayFabJsonObject* Data;

};

USTRUCT(BlueprintType)
struct FAdminListVirtualCurrencyTypesRequest
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminListVirtualCurrencyTypesResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** List of virtual currency names defined for this title */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> VirtualCurrencies;

};

USTRUCT(BlueprintType)
struct FAdminUpdateCatalogItemsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** which catalog is being updated */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString CatalogVersion;

    /** array of catalog items to be submitted */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> Catalog;

};

USTRUCT(BlueprintType)
struct FAdminUpdateCatalogItemsResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminUpdateStoreItemsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** catalog version of the store to update. Use default catalog version if null */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString CatalogVersion;

    /** unqiue identifier for the store which is to be updated */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString StoreId;

    /** array of store items - references to catalog items, with specific pricing - to be added */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> Store;

};

USTRUCT(BlueprintType)
struct FAdminUpdateStoreItemsResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminSetTitleDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** key we want to set a value on (note, this is additive - will only replace an existing key's value if they are the same name.) Keys are trimmed of whitespace. Keys may not begin with the '!' character. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Key;

    /** new value to set. Set to null to remove a value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Value;

};

USTRUCT(BlueprintType)
struct FAdminSetTitleDataResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminSetupPushNotificationRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** name of the application sending the message (application names must be made up of only uppercase and lowercase ASCII letters, numbers, underscores, hyphens, and periods, and must be between 1 and 256 characters long) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Name;

    /** supported notification platforms are Apple Push Notification Service (APNS and APNS_SANDBOX) for iOS and Google Cloud Messaging (GCM) for Android */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Platform;

    /** for APNS, this is the PlatformPrincipal (SSL Certificate) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Key;

    /** Credential is the Private Key for APNS/APNS_SANDBOX, and the API Key for GCM */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString Credential;

    /** replace any existing ARN with the newly generated one. If this is set to false, an error will be returned if notifications have already setup for this platform. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        bool OverwriteOldARN;
};

USTRUCT(BlueprintType)
struct FAdminSetupPushNotificationResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Amazon Resource Name for the created notification topic. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString ARN;

};

USTRUCT(BlueprintType)
struct FAdminUpdateRandomResultTablesRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** which catalog is being updated. If null, update the current default catalog version */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        FString CatalogVersion;

    /** array of random result tables to make available (Note: specifying an existing TableId will result in overwriting that table, while any others will be added to the available set) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Title-Wide Data Management Models")
        TArray<UPlayFabJsonObject*> Tables;

};

USTRUCT(BlueprintType)
struct FAdminUpdateRandomResultTablesResult
{
    GENERATED_USTRUCT_BODY()

public:

};



///////////////////////////////////////////////////////
// Player Item Management
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminAddUserVirtualCurrencyRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose virtual currency balance is to be increased. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString PlayFabId;

    /** Name of the virtual currency which is to be incremented. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString VirtualCurrency;

    /** Amount to be added to the user balance of the specified virtual currency. Maximum VC balance is Int32 (2,147,483,647). Any increase over this value will be discarded. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        int32 Amount;
};

USTRUCT(BlueprintType)
struct FAdminModifyUserVirtualCurrencyResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** User currency was subtracted from. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString PlayFabId;

    /** Name of the virtual currency which was modified. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString VirtualCurrency;

    /** Amount added or subtracted from the user's virtual currency. Maximum VC balance is Int32 (2,147,483,647). Any increase over this value will be discarded. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        int32 BalanceChange;
    /** Balance of the virtual currency after modification. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        int32 Balance;
};

USTRUCT(BlueprintType)
struct FAdminGetUserInventoryRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString PlayFabId;

};

USTRUCT(BlueprintType)
struct FAdminGetUserInventoryResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose inventory is being returned. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString PlayFabId;

    /** Array of inventory items belonging to the user. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        TArray<UPlayFabJsonObject*> Inventory;

    /** Array of virtual currency balance(s) belonging to the user. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        UPlayFabJsonObject* VirtualCurrency;

    /** Array of remaining times and timestamps for virtual currencies. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        UPlayFabJsonObject* VirtualCurrencyRechargeTimes;

};

USTRUCT(BlueprintType)
struct FAdminGrantItemsToUsersRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Catalog version from which items are to be granted. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString CatalogVersion;

    /** Array of items to grant and the users to whom the items are to be granted. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        TArray<UPlayFabJsonObject*> ItemGrants;

};

USTRUCT(BlueprintType)
struct FAdminGrantItemsToUsersResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Array of items granted to users. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        TArray<UPlayFabJsonObject*> ItemGrantResults;

};

USTRUCT(BlueprintType)
struct FAdminRevokeInventoryItemRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique PlayFab identifier for the user account which is to have the specified item removed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString PlayFabId;

    /** Unique PlayFab assigned ID for a specific character owned by a user */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString CharacterId;

    /** unique PlayFab identifier for the item instance to be removed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString ItemInstanceId;

};

USTRUCT(BlueprintType)
struct FAdminRevokeInventoryResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminSubtractUserVirtualCurrencyRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose virtual currency balance is to be decreased. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString PlayFabId;

    /** Name of the virtual currency which is to be decremented. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        FString VirtualCurrency;

    /** Amount to be subtracted from the user balance of the specified virtual currency. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Player Item Management Models")
        int32 Amount;
};



///////////////////////////////////////////////////////
// Matchmaking APIs
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminGetMatchmakerGameInfoRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier of the lobby for which info is being requested */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString LobbyId;

};

USTRUCT(BlueprintType)
struct FAdminGetMatchmakerGameInfoResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier of the lobby  */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString LobbyId;

    /** unique identifier of the Game Server Instance for this lobby */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString TitleId;

    /** time when the Game Server Instance was created */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString StartTime;

    /** time when Game Server Instance is currently scheduled to end */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString EndTime;

    /** game mode for this Game Server Instance */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString Mode;

    /** version identifier of the game server executable binary being run */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString BuildVersion;

    /** region in which the Game Server Instance is running */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString Region;

    /** array of unique PlayFab identifiers for users currently connected to this Game Server Instance */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString Players;

    /** IP address for this Game Server Instance */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString ServerAddress;

    /** communication port for this Game Server Instance */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        int32 ServerPort;
};

USTRUCT(BlueprintType)
struct FAdminGetMatchmakerGameModesRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** previously uploaded build version for which game modes are being requested */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString BuildVersion;

};

USTRUCT(BlueprintType)
struct FAdminGetMatchmakerGameModesResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** array of game modes available for the specified build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        TArray<UPlayFabJsonObject*> GameModes;

};

USTRUCT(BlueprintType)
struct FAdminModifyMatchmakerGameModesRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** previously uploaded build version for which game modes are being specified */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        FString BuildVersion;

    /** array of game modes (Note: this will replace all game modes for the indicated build version) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Matchmaking APIs Models")
        TArray<UPlayFabJsonObject*> GameModes;

};

USTRUCT(BlueprintType)
struct FAdminModifyMatchmakerGameModesResult
{
    GENERATED_USTRUCT_BODY()

public:

};



///////////////////////////////////////////////////////
// Custom Server Management
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminAddServerBuildRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier for the build executable */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

    /** appended to the end of the command line when starting game servers */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString CommandLineTemplate;

    /** path to the game server executable. Defaults to gameserver.exe */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ExecutablePath;

    /** server host regions in which this build should be running and available */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ActiveRegions;

    /** developer comment(s) for this build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Comment;

    /** maximum number of game server instances that can run on a single host machine */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        int32 MaxGamesPerHost;
};

USTRUCT(BlueprintType)
struct FAdminAddServerBuildResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier for this build executable */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

    /** array of regions where this build can used, when it is active */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ActiveRegions;

    /** maximum number of game server instances that can run on a single host machine */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        int32 MaxGamesPerHost;
    /** appended to the end of the command line when starting game servers */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString CommandLineTemplate;

    /** path to the game server executable. Defaults to gameserver.exe */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ExecutablePath;

    /** developer comment(s) for this build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Comment;

    /** time this build was last modified (or uploaded, if this build has never been modified) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Timestamp;

    /** Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString TitleId;

    /** the current status of the build validation and processing steps */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Status;

};

USTRUCT(BlueprintType)
struct FAdminGetServerBuildInfoRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier of the previously uploaded build executable for which information is being requested */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

};

USTRUCT(BlueprintType)
struct FAdminGetServerBuildInfoResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier for this build executable */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

    /** array of regions where this build can used, when it is active */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ActiveRegions;

    /** maximum number of game server instances that can run on a single host machine */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        int32 MaxGamesPerHost;
    /** developer comment(s) for this build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Comment;

    /** time this build was last modified (or uploaded, if this build has never been modified) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Timestamp;

    /** Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString TitleId;

    /** the current status of the build validation and processing steps */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Status;

    /** error message, if any, about this build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ErrorMessage;

};

USTRUCT(BlueprintType)
struct FAdminGetServerBuildUploadURLRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier of the game server build to upload */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

};

USTRUCT(BlueprintType)
struct FAdminGetServerBuildUploadURLResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** pre-authorized URL for uploading the game server build package */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString URL;

};

USTRUCT(BlueprintType)
struct FAdminListBuildsRequest
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminListBuildsResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** array of uploaded game server builds */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        TArray<UPlayFabJsonObject*> Builds;

};

USTRUCT(BlueprintType)
struct FAdminModifyServerBuildRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier of the previously uploaded build executable to be updated */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

    /** new timestamp */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Timestamp;

    /** array of regions where this build can used, when it is active */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ActiveRegions;

    /** maximum number of game server instances that can run on a single host machine */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        int32 MaxGamesPerHost;
    /** appended to the end of the command line when starting game servers */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString CommandLineTemplate;

    /** path to the game server executable. Defaults to gameserver.exe */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ExecutablePath;

    /** developer comment(s) for this build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Comment;

};

USTRUCT(BlueprintType)
struct FAdminModifyServerBuildResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier for this build executable */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

    /** array of regions where this build can used, when it is active */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ActiveRegions;

    /** maximum number of game server instances that can run on a single host machine */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        int32 MaxGamesPerHost;
    /** appended to the end of the command line when starting game servers */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString CommandLineTemplate;

    /** path to the game server executable. Defaults to gameserver.exe */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString ExecutablePath;

    /** developer comment(s) for this build */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Comment;

    /** time this build was last modified (or uploaded, if this build has never been modified) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Timestamp;

    /** Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString TitleId;

    /** the current status of the build validation and processing steps */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString Status;

};

USTRUCT(BlueprintType)
struct FAdminRemoveServerBuildRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** unique identifier of the previously uploaded build executable to be removed */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Custom Server Management Models")
        FString BuildId;

};

USTRUCT(BlueprintType)
struct FAdminRemoveServerBuildResult
{
    GENERATED_USTRUCT_BODY()

public:

};



///////////////////////////////////////////////////////
// Shared Group Data
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminGetPublisherDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /**  array of keys to get back data from the Publisher data blob, set by the admin tools */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Shared Group Data Models")
        FString Keys;

};

USTRUCT(BlueprintType)
struct FAdminGetPublisherDataResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** a dictionary object of key / value pairs */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Shared Group Data Models")
        UPlayFabJsonObject* Data;

};

USTRUCT(BlueprintType)
struct FAdminSetPublisherDataRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** key we want to set a value on (note, this is additive - will only replace an existing key's value if they are the same name.) Keys are trimmed of whitespace. Keys may not begin with the '!' character. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Shared Group Data Models")
        FString Key;

    /** new value to set. Set to null to remove a value */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Shared Group Data Models")
        FString Value;

};

USTRUCT(BlueprintType)
struct FAdminSetPublisherDataResult
{
    GENERATED_USTRUCT_BODY()

public:

};



///////////////////////////////////////////////////////
// Server-Side Cloud Script
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminGetCloudScriptRevisionRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Version number. If left null, defaults to the latest version */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Version;
    /** Revision number. If left null, defaults to the latest revision */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Revision;
};

USTRUCT(BlueprintType)
struct FAdminGetCloudScriptRevisionResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Version number. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Version;
    /** Revision number. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Revision;
    /** Time this revision was created */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        FString CreatedAt;

    /** List of Cloud Script files in this revision. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        TArray<UPlayFabJsonObject*> Files;

    /** True if this is the currently published revision */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        bool IsPublished;
};

USTRUCT(BlueprintType)
struct FAdminGetCloudScriptVersionsRequest
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminGetCloudScriptVersionsResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** List of versions */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        TArray<UPlayFabJsonObject*> Versions;

};

USTRUCT(BlueprintType)
struct FAdminSetPublishedRevisionRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Version number */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Version;
    /** Revision to make the current published revision */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Revision;
};

USTRUCT(BlueprintType)
struct FAdminSetPublishedRevisionResult
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FAdminUpdateCloudScriptRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Cloud Script version to update. If null, defaults to most recent version */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Version;
    /** List of Cloud Script files to upload to create the new revision. Must have at least one file. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        TArray<UPlayFabJsonObject*> Files;

};

USTRUCT(BlueprintType)
struct FAdminUpdateCloudScriptResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Cloud Script version updated */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Version;
    /** New revision number created */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Server-Side Cloud Script Models")
        int32 Revision;
};



///////////////////////////////////////////////////////
// Content
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminDeleteContentRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Key of the content item to be deleted */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        FString Key;

};

USTRUCT(BlueprintType)
struct FAdminGetContentListRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Limits the response to keys that begin with the specified prefix. You can use prefixes to list contents under a folder, or for a specified version, etc. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        FString Prefix;

};

USTRUCT(BlueprintType)
struct FAdminGetContentListResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** Number of content items returned. We currently have a maximum of 1000 items limit. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        int32 ItemCount;
    /** The total size of listed contents in bytes */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        int32 TotalSize;
    /**  */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        TArray<UPlayFabJsonObject*> Contents;

};

USTRUCT(BlueprintType)
struct FAdminGetContentUploadUrlRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Key of the content item to upload, usually formatted as a path, e.g. images/a.png */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        FString Key;

    /** A standard MIME type describing the format of the contents. The same MIME type has to be set in the header when uploading the content. If not specified, the MIME type is 'binary/octet-stream' by default. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        FString ContentType;

};

USTRUCT(BlueprintType)
struct FAdminGetContentUploadUrlResult
{
    GENERATED_USTRUCT_BODY()

public:

    /** URL for uploading content via HTTP PUT method. The URL will expire in 1 hour. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Content Models")
        FString URL;

};



///////////////////////////////////////////////////////
// Characters
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FAdminResetCharacterStatisticsRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique PlayFab assigned ID of the user on whom the operation will be performed. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Characters Models")
        FString PlayFabId;

    /** Unique PlayFab assigned ID for a specific character owned by a user */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Admin | Characters Models")
        FString CharacterId;

};

USTRUCT(BlueprintType)
struct FAdminResetCharacterStatisticsResult
{
    GENERATED_USTRUCT_BODY()

public:

};


