//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, TopBarStyledLabel;

__attribute__((visibility("hidden")))
@interface TwoLineTopBarTitleView : UIView
{
    UIView *_container;
    TopBarStyledLabel *_primaryLabel;
    TopBarStyledLabel *_secondaryLabel;
    NSLayoutConstraint *_interLabelBaselineConstraint;
    _Bool _dimmed;
    _Bool _darkUI;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool darkUI; // @synthesize darkUI=_darkUI;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
- (void).cxx_destruct;
- (void)clearStrings;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_interLabelBaselineDistance;
- (void)_setupInitialConstraints;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *secondaryAccessibilityText;
- (void)_updateAttributes;
- (id)_secondaryAttributeCollection;
- (id)_primaryAttributeCollection;
@property(copy, nonatomic) CDUnknownBlockType secondaryTextProvider;
@property(copy, nonatomic) CDUnknownBlockType primaryTextProvider;
- (id)initWithFrame:(struct CGRect)arg1;

@end
