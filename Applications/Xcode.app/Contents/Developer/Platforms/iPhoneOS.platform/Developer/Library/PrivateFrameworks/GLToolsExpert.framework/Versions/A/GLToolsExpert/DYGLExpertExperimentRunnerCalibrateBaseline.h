//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertExperimentRunner.h>

__attribute__((visibility("hidden")))
@interface DYGLExpertExperimentRunnerCalibrateBaseline : DYGLExpertExperimentRunner
{
    unsigned long long _baselineFrameTime;
    BOOL _useModifiedCapture;
}

@property(readonly, nonatomic) BOOL useModifiedCapture; // @synthesize useModifiedCapture=_useModifiedCapture;
@property(nonatomic) unsigned long long baselineFrameTime; // @synthesize baselineFrameTime=_baselineFrameTime;
- (void)processFinishedExperiments;
- (id)executeAndWait;
- (id)numberOfExperiments;
- (id)initWithExpert:(id)arg1 useModifiedCapture:(BOOL)arg2;
- (id)description;

@end

