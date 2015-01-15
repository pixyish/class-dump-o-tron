//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASProtocolCapabilities;

@interface ASProtocol : NSObject
{
    ASProtocolCapabilities *_capabilities;
}

@property(retain, nonatomic) ASProtocolCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void).cxx_destruct;
- (_Bool)supportsFreeBusyLookup;
- (_Bool)supportsConversations;
- (_Bool)supportsNoteSyncing;
- (id)addressBookConstraintsPath;
- (id)calendarConstraintsPath;
- (_Bool)serverUpdatesAttendeeStatusOnEvents;
- (_Bool)supportsItemOperationsCommand;
- (_Bool)supportsSettingsCommand;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (_Bool)supportsAttendeesInExceptions;
- (_Bool)supportsGALPhotos;
- (_Bool)sendUserAgentInDeviceInfo;
- (_Bool)sendDeviceInfoOnProvision;
- (_Bool)useEventIdsInMeetingResponse;
- (_Bool)sendFirstDayOfWeekInRecurrence;
- (_Bool)allowsReminderOnCompletedTasks;
- (_Bool)serverCreatesEventChangesForInvitations;
- (_Bool)sendCalendarInfoInRecurrence;
- (_Bool)allAttachmentsAreBase64ed;
- (_Bool)fetchAttachmentsWithItemOperations;
- (_Bool)useSmartMailTasks;
- (_Bool)usesTopLevelStatusCodes;
- (_Bool)sendEmailInWBXML;
- (_Bool)useBooleanFolderItemsSyncDeletesAsMoves;
- (_Bool)requiresExplicitlyFalseGetChanges;
- (_Bool)shouldSendFullContactInfo;
- (_Bool)shouldSendClassForFolderItemsSync;
- (_Bool)sendAttendeeRole;
- (_Bool)usesAirSyncBaseNamespace;
- (_Bool)shouldUseWBXMLProvisioning;
- (_Bool)commandStringNeedsSaveInSent;
- (_Bool)headerNeedsProtocolVersion;
- (_Bool)headerNeedsPolicyKey;
- (_Bool)headerNeedsUserAgent;
- (id)requestURLStringWithTask:(id)arg1;
- (id)_requestLinePrefixWithTask:(id)arg1;
- (id)_usernameOnlyPortionOfUserString:(id)arg1;
- (id)protocolVersion;
- (_Bool)versionChangeRequiresAccountUpgrade:(id)arg1;
- (id)initWithCachedVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)_initWithVersion:(id)arg1 capabilitiesVersion:(id)arg2;
- (void)_setCapabilitiesVersion:(id)arg1;
- (id)init;

@end
