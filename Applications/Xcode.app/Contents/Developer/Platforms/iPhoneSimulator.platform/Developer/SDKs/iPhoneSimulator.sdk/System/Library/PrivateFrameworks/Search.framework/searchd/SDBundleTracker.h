//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SDBundleTracker : NSObject
{
    NSMutableDictionary *_trackingInfos;
}

+ (id)trackerKeyForBundleIdentifier:(id)arg1 category:(id)arg2;
+ (id)sharedBundleTracker;
- (void)recordEvent:(int)arg1 info:(id)arg2 forBundleWithKey:(id)arg3 inState:(int)arg4;
- (_Bool)shouldContinueIndexingBundleWithKey:(id)arg1 transitionedToState:(int)arg2;
- (_Bool)shouldRunIndexerForBundleWithKey:(id)arg1;
- (void)_saveInfoForBundleWithKey:(id)arg1;
- (id)_infoForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

