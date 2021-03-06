//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/XRDecorator.h>

@class NSDictionary, XRCPUStrategyController, XRCPUStrategyQuery, XRRun;

@interface XRCPUDecorator : XRDecorator
{
    XRCPUStrategyQuery *_query;
    XRCPUStrategyController *_controller;
    XRRun *_run;
    NSDictionary *_legend;
}

+ (id)displayStyles;
- (id)legend;
- (void)setLegend:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 controller:(id)arg2 run:(id)arg3;

@end

