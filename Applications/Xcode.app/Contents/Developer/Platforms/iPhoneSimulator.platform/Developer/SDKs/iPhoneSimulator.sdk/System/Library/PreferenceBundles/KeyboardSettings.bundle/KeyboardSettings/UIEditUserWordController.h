//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KeyboardSettings/EditUserWordController.h>

@class UIWindow;

@interface UIEditUserWordController : EditUserWordController
{
    long long _oldPopoverStyle;
    CDUnknownBlockType _dismissCompletionHandler;
    UIWindow *_rotationDecider;
}

@property(retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider; // @synthesize _rotationDecider;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_dismiss;
- (void)viewDidLoad;
- (_Bool)_shouldSetDefaultFirstResponder;
- (void)dealloc;
- (id)initWithText:(id)arg1 andShortcut:(id)arg2;
- (id)initWithText:(id)arg1;

@end
