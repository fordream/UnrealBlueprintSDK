#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated header file for the UE4 PlayFab plugin.
// This header file contains the function definitions.
//
// API: Matchmaker
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "OnlineBlueprintCallProxyBase.h"
#include "PlayFabBaseModel.h"
#include "PlayFabMatchmakerModels.h"
#include "PlayFabPrivatePCH.h"
#include "PlayFabMatchmakerAPI.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayFabMatchmakerRequestCompleted, FPlayFabBaseModel, response, bool, successful);

UCLASS(Blueprintable, BlueprintType)
class UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase
{
    GENERATED_UCLASS_BODY()

public:

    UPROPERTY(BlueprintAssignable)
    FOnPlayFabMatchmakerRequestCompleted OnPlayFabResponse;

    /** Set the Request Json object */
    //UFUNCTION(BlueprintCallable, Category = "PlayFab")
        void SetRequestObject(UPlayFabJsonObject* JsonObject);

    /** Get the Response Json object */
    //UFUNCTION(BlueprintCallable, Category = "PlayFab")
        UPlayFabJsonObject* GetResponseObject();

    /** Applies percent-encoding to text */
    //UFUNCTION(BlueprintCallable, Category = "PlayFab")
        static FString PercentEncode(const FString& Text);

    /** Reset saved response data */
    //UFUNCTION(BlueprintCallable, Category = "PlayFab")
        void ResetResponseData();

    /** UOnlineBlueprintCallProxyBase interface */
    virtual void Activate() override;

    //////////////////////////////////////////////////////////////////////////
    // Generated PlayFab Matchmaker API Functions
    //////////////////////////////////////////////////////////////////////////

    

    ///////////////////////////////////////////////////////
    // Matchmaking APIs
    //////////////////////////////////////////////////////
    /** Validates a user with the PlayFab service */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Matchmaker | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabMatchmakerAPI* AuthUser(FMatchmakerAuthUserRequest request);

    /** Informs the PlayFab game server hosting service that the indicated user has joined the Game Server Instance specified */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Matchmaker | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabMatchmakerAPI* PlayerJoined(FMatchmakerPlayerJoinedRequest request);

    /** Informs the PlayFab game server hosting service that the indicated user has left the Game Server Instance specified */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Matchmaker | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabMatchmakerAPI* PlayerLeft(FMatchmakerPlayerLeftRequest request);

    /** Instructs the PlayFab game server hosting service to instantiate a new Game Server Instance */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Matchmaker | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabMatchmakerAPI* StartGame(FMatchmakerStartGameRequest request);

    /** Retrieves the relevant details for a specified user, which the external match-making service can then use to compute effective matches */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Matchmaker | Matchmaking APIs ", meta = (BlueprintInternalUseOnly = "true"))
        static UPlayFabMatchmakerAPI* UserInfo(FMatchmakerUserInfoRequest request);



    /** PlayFab Request Info */
    FString PlayFabRequestURL;
    bool useSecretKey = false;
    bool useSessionTicket = false;
    bool cloudScript = false;
    bool isLoginRequest = false;

    /** Is the response valid JSON? */
    bool bIsValidJsonResponse;
    FString ResponseContent;
    int32 ResponseCode;

private:
    /** Internal bind function for the IHTTPRequest::OnProcessRequestCompleted() event */
    void OnProcessRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

protected:

    /** Internal request data stored as JSON */
    UPROPERTY()
        UPlayFabJsonObject* RequestJsonObj;

    /** Response data stored as JSON */
    UPROPERTY()
        UPlayFabJsonObject* ResponseJsonObj;

    /** Mapping of header section to values. Used to generate final header string for request */
    TMap<FString, FString> RequestHeaders;
};
