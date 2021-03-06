//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSSecureCoding.h"

@class NSString, UIVisualEffect, _UIVisualEffectContentView;

@interface UIVisualEffectView : UIView <NSSecureCoding>
{
    UIView *_maskView;
    struct {
        unsigned int hasHadAlphaAnimated:1;
        unsigned int suppressReportingEmptyContentView:1;
    } _effectViewFlags;
    _UIVisualEffectContentView *_contentView;
    NSString *_groupName;
    UIVisualEffect *_effect;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // @synthesize _groupName;
- (id)_whatsWrongWithThisEffect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)viewDidMoveToSuperview;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (void)_applyGroupNameToSubviews;
- (void)_configureForEffectConfig:(id)arg1;
- (void)_configureForEffectSettings:(id)arg1;
- (void)_configureForCurrentEffect;
- (void)_setEffect:(id)arg1;
- (void)_createContentViewIfNecessary;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (void)_commonInit;

@end

