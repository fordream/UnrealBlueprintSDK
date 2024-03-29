#pragma once

//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated header file for the UE4 PlayFab plugin.
// This header file contains the utilities functions that supports the plugin.
//
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayFabUtilities.generated.h"

class UPlayFabJsonObject;

UCLASS()
class PLAYFAB_API UPlayFabUtilities : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

/** Setup the PlayFab settings used throughout the plugin. */
UFUNCTION(BlueprintCallable, Category = "PlayFab | Settings")
    static void setPlayFabSettings(FString GameTitleId, FString PhotonRealtimeAppId = "",
            FString PhotonTurnbasedAppId = "", FString PhotonChatAppId = "", int32 CloudScriptVersion = 1);


    /** Set the cloud script version from the get cloud script version call. This is called when needed by the api. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Settings")
        static void setCloudScriptVersion(int32 CloudScriptVersion);

    ///** Set the Session Key retrieved during login or authentication. This is called when needed by the api. */
    //UFUNCTION(BlueprintCallable, Category = "PlayFab | Authentication")
    //    static void setSessionTicket(FString SessionTicket);

    /** Returns the error code text given the error code */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Errors")
        static FString getErrorText(int32 code);

    /** Returns the requested photon application id. */
    UFUNCTION(BlueprintCallable, Category = "PlayFab | Photon | Authentication")
        static FString getPhotonAppId(bool Realtime = false, bool Chat = false, bool Turnbased = false);

};
