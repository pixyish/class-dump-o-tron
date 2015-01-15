//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardPredictiveSettings : _UISettings
{
    int _lastVolume;
    _Bool _nextPage;
    NSString *_currentInputMode;
    _Bool _currentInputModeEnablePrediction;
    _Bool _didShowHUD;
    _Bool _alwaysShowTypedText;
    int _minLetters;
}

+ (void)hideViaNotification;
+ (void)loadSettings;
+ (id)sharedInstance;
@property(nonatomic) _Bool alwaysShowTypedText; // @synthesize alwaysShowTypedText=_alwaysShowTypedText;
@property(nonatomic) int minLetters; // @synthesize minLetters=_minLetters;
@property(nonatomic) int messageCount;
- (void)next;
- (void)previous;
- (void)show;
- (void)show:(_Bool)arg1;
- (void)pressRingerButton;
- (id)settingsHUDConfiguration;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)saveSettings;
- (void)cancel;
- (id)initWithDefaultValues;
- (void)hide;
- (_Bool)_isShowingHUD;
- (id)_sharedHUD;

@end
