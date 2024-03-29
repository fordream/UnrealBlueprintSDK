//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the UE4 PlayFab plugin.
// This cpp file contains the utilities functions that supports the plugin..
//
// SDK Version: 0.0.151019
//////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayFabPrivatePCH.h"
#include "PlayFabUtilities.h"

void UPlayFabUtilities::setPlayFabSettings(FString GameTitleId, FString PlayFabSecretApiKey, FString PhotonRealtimeAppId,
    FString PhotonTurnbasedAppId, FString PhotonChatAppId, int32 CloudScriptVersion)
{
    // Set the settings
    IPlayFab::Get().setGameTitleId(GameTitleId);
    IPlayFab::Get().setApiSecretKey(PlayFabSecretApiKey);
    IPlayFab::Get().PhotonRealtimeAppId = PhotonRealtimeAppId;
    IPlayFab::Get().PhotonTurnbasedAppId = PhotonTurnbasedAppId;
    IPlayFab::Get().PhotonChatAppId = PhotonChatAppId;
    IPlayFab::Get().CloudScriptVersion = CloudScriptVersion;
}


void UPlayFabUtilities::setCloudScriptVersion(int32 CloudScriptVersion)
{
    // Set the CloudScriptVersion
    IPlayFab::Get().CloudScriptVersion = CloudScriptVersion;
}

FString UPlayFabUtilities::getPhotonAppId(bool Realtime, bool Chat, bool Turnbased)
{
    if (Realtime) { return IPlayFab::Get().PhotonRealtimeAppId; }
    else if (Chat) { return IPlayFab::Get().PhotonChatAppId; }
    else if (Turnbased) { return IPlayFab::Get().PhotonTurnbasedAppId; }
    else { return ""; }
}

//void UPlayFabUtilities::setSessionTicket(FString SessionTicket)
//{
//    Set the SessionTicket
//    IPlayFab::Get().setSessionTicket(SessionTicket);
//}

FString UPlayFabUtilities::getErrorText(int32 code)
{
    // Variable to hold the return text
    FString returnText = "";

    // Switch on the code
    switch (code)
    {
    case 0:
        returnText = "Success";
        break;

    case 1000:
        returnText = "InvalidParams";
        break;

    case 1001:
        returnText = "AccountNotFound";
        break;

    case 1002:
        returnText = "AccountBanned";
        break;

    case 1003:
        returnText = "InvalidUsernameOrPassword";
        break;

    case 1004:
        returnText = "InvalidTitleId";
        break;

    case 1005:
        returnText = "InvalidEmailAddress";
        break;

    case 1006:
        returnText = "EmailAddressNotAvailable";
        break;

    case 1007:
        returnText = "InvalidUsername";
        break;

    case 1008:
        returnText = "InvalidPassword";
        break;

    case 1009:
        returnText = "UsernameNotAvailable";
        break;

    case 1010:
        returnText = "InvalidSteamTicket";
        break;

    case 1011:
        returnText = "AccountAlreadyLinked";
        break;

    case 1012:
        returnText = "LinkedAccountAlreadyClaimed";
        break;

    case 1013:
        returnText = "InvalidFacebookToken";
        break;

    case 1014:
        returnText = "AccountNotLinked";
        break;

    case 1015:
        returnText = "FailedByPaymentProvider";
        break;

    case 1016:
        returnText = "CouponCodeNotFound";
        break;

    case 1017:
        returnText = "InvalidContainerItem";
        break;

    case 1018:
        returnText = "ContainerNotOwned";
        break;

    case 1019:
        returnText = "KeyNotOwned";
        break;

    case 1020:
        returnText = "InvalidItemIdInTable";
        break;

    case 1021:
        returnText = "InvalidReceipt";
        break;

    case 1022:
        returnText = "ReceiptAlreadyUsed";
        break;

    case 1023:
        returnText = "ReceiptCancelled";
        break;

    case 1024:
        returnText = "GameNotFound";
        break;

    case 1025:
        returnText = "GameModeNotFound";
        break;

    case 1026:
        returnText = "InvalidGoogleToken";
        break;

    case 1027:
        returnText = "UserIsNotPartOfDeveloper";
        break;

    case 1028:
        returnText = "InvalidTitleForDeveloper";
        break;

    case 1029:
        returnText = "TitleNameConflicts";
        break;

    case 1030:
        returnText = "UserisNotValid";
        break;

    case 1031:
        returnText = "ValueAlreadyExists";
        break;

    case 1032:
        returnText = "BuildNotFound";
        break;

    case 1033:
        returnText = "PlayerNotInGame";
        break;

    case 1034:
        returnText = "InvalidTicket";
        break;

    case 1035:
        returnText = "InvalidDeveloper";
        break;

    case 1036:
        returnText = "InvalidOrderInfo";
        break;

    case 1037:
        returnText = "RegistrationIncomplete";
        break;

    case 1038:
        returnText = "InvalidPlatform";
        break;

    case 1039:
        returnText = "UnknownError";
        break;

    case 1040:
        returnText = "SteamApplicationNotOwned";
        break;

    case 1041:
        returnText = "WrongSteamAccount";
        break;

    case 1042:
        returnText = "TitleNotActivated";
        break;

    case 1043:
        returnText = "RegistrationSessionNotFound";
        break;

    case 1044:
        returnText = "NoSuchMod";
        break;

    case 1045:
        returnText = "FileNotFound";
        break;

    case 1046:
        returnText = "DuplicateEmail";
        break;

    case 1047:
        returnText = "ItemNotFound";
        break;

    case 1048:
        returnText = "ItemNotOwned";
        break;

    case 1049:
        returnText = "ItemNotRecycleable";
        break;

    case 1050:
        returnText = "ItemNotAffordable";
        break;

    case 1051:
        returnText = "InvalidVirtualCurrency";
        break;

    case 1052:
        returnText = "WrongVirtualCurrency";
        break;

    case 1053:
        returnText = "WrongPrice";
        break;

    case 1054:
        returnText = "NonPositiveValue";
        break;

    case 1055:
        returnText = "InvalidRegion";
        break;

    case 1056:
        returnText = "RegionAtCapacity";
        break;

    case 1057:
        returnText = "ServerFailedToStart";
        break;

    case 1058:
        returnText = "NameNotAvailable";
        break;

    case 1059:
        returnText = "InsufficientFunds";
        break;

    case 1060:
        returnText = "InvalidDeviceID";
        break;

    case 1061:
        returnText = "InvalidPushNotificationToken";
        break;

    case 1062:
        returnText = "NoRemainingUses";
        break;

    case 1063:
        returnText = "InvalidPaymentProvider";
        break;

    case 1064:
        returnText = "PurchaseInitializationFailure";
        break;

    case 1065:
        returnText = "DuplicateUsername";
        break;

    case 1066:
        returnText = "InvalidBuyerInfo";
        break;

    case 1067:
        returnText = "NoGameModeParamsSet";
        break;

    case 1068:
        returnText = "BodyTooLarge";
        break;

    case 1069:
        returnText = "ReservedWordInBody";
        break;

    case 1070:
        returnText = "InvalidTypeInBody";
        break;

    case 1071:
        returnText = "InvalidRequest";
        break;

    case 1072:
        returnText = "ReservedEventName";
        break;

    case 1073:
        returnText = "InvalidUserStatistics";
        break;

    case 1074:
        returnText = "NotAuthenticated";
        break;

    case 1075:
        returnText = "StreamAlreadyExists";
        break;

    case 1076:
        returnText = "ErrorCreatingStream";
        break;

    case 1077:
        returnText = "StreamNotFound";
        break;

    case 1078:
        returnText = "InvalidAccount";
        break;

    case 1080:
        returnText = "PurchaseDoesNotExist";
        break;

    case 1081:
        returnText = "InvalidPurchaseTransactionStatus";
        break;

    case 1082:
        returnText = "APINotEnabledForGameClientAccess";
        break;

    case 1083:
        returnText = "NoPushNotificationARNForTitle";
        break;

    case 1084:
        returnText = "BuildAlreadyExists";
        break;

    case 1085:
        returnText = "BuildPackageDoesNotExist";
        break;

    case 1087:
        returnText = "CustomAnalyticsEventsNotEnabledForTitle";
        break;

    case 1088:
        returnText = "InvalidSharedGroupId";
        break;

    case 1089:
        returnText = "NotAuthorized";
        break;

    case 1090:
        returnText = "MissingTitleGoogleProperties";
        break;

    case 1091:
        returnText = "InvalidItemProperties";
        break;

    case 1092:
        returnText = "InvalidPSNAuthCode";
        break;

    case 1093:
        returnText = "InvalidItemId";
        break;

    case 1094:
        returnText = "PushNotEnabledForAccount";
        break;

    case 1095:
        returnText = "PushServiceError";
        break;

    case 1096:
        returnText = "ReceiptDoesNotContainInAppItems";
        break;

    case 1097:
        returnText = "ReceiptContainsMultipleInAppItems";
        break;

    case 1098:
        returnText = "InvalidBundleID";
        break;

    case 1099:
        returnText = "JavascriptException";
        break;

    case 1100:
        returnText = "InvalidSessionTicket";
        break;

    case 1101:
        returnText = "UnableToConnectToDatabase";
        break;

    case 1110:
        returnText = "InternalServerError";
        break;

    case 1111:
        returnText = "InvalidReportDate";
        break;

    case 1112:
        returnText = "ReportNotAvailable";
        break;

    case 1113:
        returnText = "DatabaseThroughputExceeded";
        break;

    case 1114:
        returnText = "InvalidLobbyId";
        break;

    case 1115:
        returnText = "InvalidGameTicket";
        break;

    case 1116:
        returnText = "ExpiredGameTicket";
        break;

    case 1117:
        returnText = "GameTicketDoesNotMatchLobby";
        break;

    case 1118:
        returnText = "LinkedDeviceAlreadyClaimed";
        break;

    case 1119:
        returnText = "DeviceAlreadyLinked";
        break;

    case 1120:
        returnText = "DeviceNotLinked";
        break;

    case 1121:
        returnText = "PartialFailure";
        break;

    case 1122:
        returnText = "PublisherNotSet";
        break;

    case 1123:
        returnText = "ServiceUnavailable";
        break;

    case 1124:
        returnText = "VersionNotFound";
        break;

    case 1125:
        returnText = "RevisionNotFound";
        break;

    case 1126:
        returnText = "InvalidPublisherId";
        break;

    case 1127:
        returnText = "DownstreamServiceUnavailable";
        break;

    case 1128:
        returnText = "APINotIncludedInTitleUsageTier";
        break;

    case 1129:
        returnText = "DAULimitExceeded";
        break;

    case 1130:
        returnText = "APIRequestLimitExceeded";
        break;

    case 1131:
        returnText = "InvalidAPIEndpoint";
        break;

    case 1132:
        returnText = "BuildNotAvailable";
        break;

    case 1133:
        returnText = "ConcurrentEditError";
        break;

    case 1134:
        returnText = "ContentNotFound";
        break;

    case 1135:
        returnText = "CharacterNotFound";
        break;

    case 1136:
        returnText = "CloudScriptNotFound";
        break;

    case 1137:
        returnText = "ContentQuotaExceeded";
        break;

    case 1138:
        returnText = "InvalidCharacterStatistics";
        break;

    case 1139:
        returnText = "PhotonNotEnabledForTitle";
        break;

    case 1140:
        returnText = "PhotonApplicationNotFound";
        break;

    case 1141:
        returnText = "PhotonApplicationNotAssociatedWithTitle";
        break;

    case 1142:
        returnText = "InvalidEmailOrPassword";
        break;

    case 1143:
        returnText = "FacebookAPIError";
        break;

    case 1144:
        returnText = "InvalidContentType";
        break;

    case 1145:
        returnText = "KeyLengthExceeded";
        break;

    case 1146:
        returnText = "DataLengthExceeded";
        break;

    case 1147:
        returnText = "TooManyKeys";
        break;

    case 1148:
        returnText = "FreeTierCannotHaveVirtualCurrency";
        break;

    case 1149:
        returnText = "MissingAmazonSharedKey";
        break;

    case 1150:
        returnText = "AmazonValidationError";
        break;

    case 1151:
        returnText = "InvalidPSNIssuerId";
        break;

    case 1152:
        returnText = "PSNInaccessible";
        break;

    case 1153:
        returnText = "ExpiredAuthToken";
        break;

    case 1154:
        returnText = "FailedToGetEntitlements";
        break;

    case 1155:
        returnText = "FailedToConsumeEntitlement";
        break;

    case 1156:
        returnText = "TradeAcceptingUserNotAllowed";
        break;

    case 1157:
        returnText = "TradeInventoryItemIsAssignedToCharacter";
        break;

    case 1158:
        returnText = "TradeInventoryItemIsBundle";
        break;

    case 1159:
        returnText = "TradeStatusNotValidForCancelling";
        break;

    case 1160:
        returnText = "TradeStatusNotValidForAccepting";
        break;

    case 1161:
        returnText = "TradeDoesNotExist";
        break;

    case 1162:
        returnText = "TradeCancelled";
        break;

    case 1163:
        returnText = "TradeAlreadyFilled";
        break;

    case 1164:
        returnText = "TradeWaitForStatusTimeout";
        break;

    case 1165:
        returnText = "TradeInventoryItemExpired";
        break;

    case 1166:
        returnText = "TradeMissingOfferedAndAcceptedItems";
        break;

    case 1167:
        returnText = "TradeAcceptedItemIsBundle";
        break;

    case 1168:
        returnText = "TradeAcceptedItemIsStackable";
        break;

    case 1169:
        returnText = "TradeInventoryItemInvalidStatus";
        break;

    case 1170:
        returnText = "TradeAcceptedCatalogItemInvalid";
        break;

    case 1171:
        returnText = "TradeAllowedUsersInvalid";
        break;

    case 1172:
        returnText = "TradeInventoryItemDoesNotExist";
        break;

    case 1173:
        returnText = "TradeInventoryItemIsConsumed";
        break;

    case 1174:
        returnText = "TradeInventoryItemIsStackable";
        break;

    case 1175:
        returnText = "TradeAcceptedItemsMismatch";
        break;

    case 1176:
        returnText = "InvalidKongregateToken";
        break;

    case 1177:
        returnText = "FeatureNotConfiguredForTitle";
        break;

    case 1178:
        returnText = "NoMatchingCatalogItemForReceipt";
        break;

    case 1179:
        returnText = "InvalidCurrencyCode";
        break;

    case 1180:
        returnText = "NoRealMoneyPriceForCatalogItem";
        break;

    case 1181:
        returnText = "TradeInventoryItemIsNotTradable";
        break;

    case 1182:
        returnText = "TradeAcceptedCatalogItemIsNotTradable";
        break;

    case 1183:
        returnText = "UsersAlreadyFriends";
        break;

    case 1184:
        returnText = "LinkedIdentifierAlreadyClaimed";
        break;

    case 1185:
        returnText = "CustomIdNotLinked";
        break;

    case 1186:
        returnText = "TotalDataSizeExceeded";
        break;

    case 1187:
        returnText = "DeleteKeyConflict";
        break;

    case 1188:
        returnText = "InvalidXboxLiveToken";
        break;

    }

    // Return the text
    return returnText;
}

