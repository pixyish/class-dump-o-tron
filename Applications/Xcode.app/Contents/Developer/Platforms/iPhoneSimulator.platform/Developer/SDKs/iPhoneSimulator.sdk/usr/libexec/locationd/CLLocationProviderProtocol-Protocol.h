//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLNotifierServiceProtocol.h"

@class CLNotifierData;

@protocol CLLocationProviderProtocol <CLNotifierServiceProtocol>
- (void)setSimulationEnabled:(_Bool)arg1;
- (void)shutdown;
- (void)start;
- (void)register:(byref id <CLLocationProviderClientProtocol>)arg1 forNotification:(int)arg2 withRegistrationInfo:(struct RegInfo)arg3;
- (void)updateNotification:(int)arg1 withRegistrationInfo:(CLNotifierData *)arg2 forClient:(byref id <CLLocationProviderClientProtocol>)arg3;
@end

