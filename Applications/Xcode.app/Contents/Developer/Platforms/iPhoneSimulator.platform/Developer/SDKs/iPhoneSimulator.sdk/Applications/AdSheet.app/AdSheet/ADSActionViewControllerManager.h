//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ADSActionViewControllerManager : NSObject
{
    NSMutableDictionary *_pendingAdSpaceControllers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *pendingAdSpaceControllers; // @synthesize pendingAdSpaceControllers=_pendingAdSpaceControllers;
- (void)_cancelRequestForActionViewControllerForAdSpaceController:(id)arg1;
- (void)_actionViewController:(id)arg1 readyForControllerIdentifier:(id)arg2;
- (void)_requestActionViewControllerForAdSpaceController:(id)arg1;
- (id)init;

@end

