//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACUIViewController;

@protocol ACUIViewControllerAccountChangeObserver <NSObject>

@optional
- (void)viewController:(ACUIViewController *)arg1 didFinishRemovingAccountWithSuccess:(_Bool)arg2;
- (void)viewController:(ACUIViewController *)arg1 didFinishSavingAccountWithSuccess:(_Bool)arg2;
@end

