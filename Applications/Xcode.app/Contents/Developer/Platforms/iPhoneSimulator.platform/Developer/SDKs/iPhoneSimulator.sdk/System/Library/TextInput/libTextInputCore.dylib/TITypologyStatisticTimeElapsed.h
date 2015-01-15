//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic
{
    TITypologyTimer *_timer;
    TITypologyTimer *_adjustedTimer;
}

@property(retain, nonatomic) TITypologyTimer *adjustedTimer; // @synthesize adjustedTimer=_adjustedTimer;
@property(retain, nonatomic) TITypologyTimer *timer; // @synthesize timer=_timer;
- (void)visitRecordKeyboardInput:(id)arg1;
@property(readonly, nonatomic) double adjustedElapsedTime;
@property(readonly, nonatomic) double elapsedTime;
- (id)structuredReport;
- (void)dealloc;
- (id)init;

@end
