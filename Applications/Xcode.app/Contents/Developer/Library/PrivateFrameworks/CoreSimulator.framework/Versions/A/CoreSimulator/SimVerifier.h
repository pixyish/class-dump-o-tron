//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface SimVerifier : NSObject
{
    NSObject<OS_xpc_object> *_serviceConnection;
    NSObject<OS_dispatch_queue> *_serviceConnectionQueue;
}

+ (id)verificationError:(int)arg1;
+ (id)connectionError;
+ (id)sharedVerifier;
@property(retain) NSObject<OS_dispatch_queue> *serviceConnectionQueue; // @synthesize serviceConnectionQueue=_serviceConnectionQueue;
@property(retain) NSObject<OS_xpc_object> *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (id)verifyDyldSim:(id)arg1;
- (id)verifyAll;
- (BOOL)verifyAllWithError:(id *)arg1;
- (void)dealloc;
- (id)init;

@end
