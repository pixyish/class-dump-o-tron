//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "DTMobileNotificationsServiceAuthorizedAPI.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface DTMobileNotificationsService : DTXService <DTMobileNotificationsServiceAuthorizedAPI>
{
    _Bool _applicationStateNotificationsEnabled;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
}

+ (void)registerCapabilities:(id)arg1;
- (void).cxx_destruct;
- (void)_memoryNotification:(unsigned int)arg1 pid:(int)arg2;
- (void)_appStateChanged:(id)arg1;
- (void)_setMemNotificationsEnabled:(_Bool)arg1;
- (void)setMemoryNotificationsEnabled:(id)arg1;
- (void)_setAppStateNotificationsEnabled:(_Bool)arg1;
- (void)setApplicationStateNotificationsEnabled:(id)arg1;
- (void)messageReceived:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

