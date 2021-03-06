//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSDate, NSTimer;

@interface PLRoundProgressView : UIView
{
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void)resetProgress;
- (void)setProgress:(double)arg1;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)increaseUIProgress:(id)arg1;
- (double)toRadian:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (void)setPieRadius:(double)arg1;
- (void)setPieCenter:(struct CGPoint)arg1;
- (void)_setupSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

