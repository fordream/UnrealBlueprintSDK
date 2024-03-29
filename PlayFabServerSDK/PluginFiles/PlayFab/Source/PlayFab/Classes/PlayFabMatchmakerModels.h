#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated model file for the UE4 PlayFab plugin.
// This model file contains the request and response USTRUCTS
//
// API: Matchmaker
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabMatchmakerModels.generated.h"

class UPlayFabJsonObject;

//////////////////////////////////////////////////////////////////////////
// Generated PlayFab Matchmaker API Functions
//////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////
// Matchmaking APIs
//////////////////////////////////////////////////////

USTRUCT(BlueprintType)
struct FMatchmakerAuthUserRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Session Ticket provided by the client. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString AuthorizationTicket;

};

USTRUCT(BlueprintType)
struct FMatchmakerAuthUserResponse
{
    GENERATED_USTRUCT_BODY()

public:

    /** Boolean indicating if the user has been authorized to use the external match-making service. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        bool Authorized;
    /** PlayFab unique identifier of the account that has been authorized. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString PlayFabId;

};

USTRUCT(BlueprintType)
struct FMatchmakerPlayerJoinedRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique identifier of the Game Server Instance the user is joining. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString LobbyId;

    /** PlayFab unique identifier for the user joining. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString PlayFabId;

};

USTRUCT(BlueprintType)
struct FMatchmakerPlayerJoinedResponse
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FMatchmakerPlayerLeftRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique identifier of the Game Server Instance the user is leaving. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString LobbyId;

    /** PlayFab unique identifier for the user leaving. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString PlayFabId;

};

USTRUCT(BlueprintType)
struct FMatchmakerPlayerLeftResponse
{
    GENERATED_USTRUCT_BODY()

public:

};

USTRUCT(BlueprintType)
struct FMatchmakerStartGameRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique identifier of the previously uploaded build executable which is to be started. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString Build;

    /** Region with which to associate the server, for filtering. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString Region;

    /** Game mode for this Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString GameMode;

    /** Custom command line argument when starting game server process. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString CustomCommandLineData;

    /** HTTP endpoint URL for receiving game status events, if using an external matchmaker. When the game ends, PlayFab will make a POST request to this URL with the X-SecretKey header set to the value of the game's secret and an application/json body of { "EventName": "game_ended", "GameID": "<gameid>" }. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString ExternalMatchmakerEventEndpoint;

};

USTRUCT(BlueprintType)
struct FMatchmakerStartGameResponse
{
    GENERATED_USTRUCT_BODY()

public:

    /** Unique identifier for the lobby in the new Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString GameID;

    /** IP address of the new Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString ServerHostname;

    /** Port number for communication with the Game Server Instance. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        int32 ServerPort;
};

USTRUCT(BlueprintType)
struct FMatchmakerUserInfoRequest
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose information is being requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString PlayFabId;

    /** Minimum catalog version for which data is requested (filters the results to only contain inventory items which have a catalog version of this or higher). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        int32 MinCatalogVersion;
};

USTRUCT(BlueprintType)
struct FMatchmakerUserInfoResponse
{
    GENERATED_USTRUCT_BODY()

public:

    /** PlayFab unique identifier of the user whose information was requested. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString PlayFabId;

    /** PlayFab unique user name. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString Username;

    /** Title specific display name, if set. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString TitleDisplayName;

    /** Array of inventory items in the user's current inventory. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        TArray<UPlayFabJsonObject*> Inventory;

    /** Array of virtual currency balance(s) belonging to the user. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        UPlayFabJsonObject* VirtualCurrency;

    /** Array of remaining times and timestamps for virtual currencies. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        UPlayFabJsonObject* VirtualCurrencyRechargeTimes;

    /** Boolean indicating whether the user is a developer. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        bool IsDeveloper;
    /** Steam unique identifier, if the user has an associated Steam account. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayFab | Matchmaker | Matchmaking APIs Models")
        FString SteamId;

};


