//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSHashTable, NSMutableSet, NSString;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;
    NSMutableSet *_registeredTopics;
    NSString *_pushToken;
    NSHashTable *_consumers;
}

@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (void)connect;
- (void)recalculatePushTopics;
- (void)unregisterAllConsumers;
- (void)unregisterConsumer:(id)arg1;
- (void)registerConsumer:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
