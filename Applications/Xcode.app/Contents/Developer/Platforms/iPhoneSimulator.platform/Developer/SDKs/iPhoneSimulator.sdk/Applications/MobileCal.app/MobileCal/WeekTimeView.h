//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EKCurrentTimeMarkerViewUpdating.h"
#import "UIScrollViewDelegate.h"

@class EKDayTimeView, NSString, UILabel, UIScrollView;

@interface WeekTimeView : UIView <UIScrollViewDelegate, EKCurrentTimeMarkerViewUpdating>
{
    UIScrollView *_timeScroller;
    EKDayTimeView *_timeView;
    UIView *_rightBorderView;
    UILabel *_monthLabel;
    UILabel *_overlayMonthLabel;
    UILabel *_weekNumberLabel;
    UILabel *_allDayLabel;
    UIView *_allDayBackgroundColorView;
    UIView *_topAllDaySeparatorView;
    UIView *_bottomAllDaySeparatorView;
    UIView *_headerBackground;
    double _headerHeight;
    long long _orientation;
}

+ (double)widthForOrientation:(long long)arg1;
@property(readonly, nonatomic) EKDayTimeView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_timeScroller;
- (void).cxx_destruct;
- (void)updateMarkerPosition;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (double)allDayBackgroundColorOriginY;
@property(retain, nonatomic) NSString *overlayMonthText;
@property(retain, nonatomic) NSString *weekNumberText;
@property(retain, nonatomic) NSString *monthText;
@property(nonatomic) _Bool allDayVisible;
- (void)contentSizeCategoryChanged;
- (void)setHourHeightScale:(double)arg1;
- (void)setDayTimeViewDelegate:(id)arg1;
@property(nonatomic) _Bool showsTimeMarker;
@property(nonatomic) _Bool allDayHighlighted;
@property(nonatomic) _Bool usesLightText;
- (_Bool)_showRightBorder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

