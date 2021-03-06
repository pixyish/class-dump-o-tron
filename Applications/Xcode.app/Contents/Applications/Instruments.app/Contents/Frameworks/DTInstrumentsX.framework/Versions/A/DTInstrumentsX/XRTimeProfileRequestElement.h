//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTInstrumentsX/XRImmutableElement.h>

#import "NSCoding.h"

@interface XRTimeProfileRequestElement : XRImmutableElement <NSCoding>
{
    BOOL _userCallstacks;
    BOOL _kernelCallstacks;
    int _pid;
    int _purpose;
    double _duration;
    double _samplePeriod;
}

@property(readonly, nonatomic) double samplePeriod; // @synthesize samplePeriod=_samplePeriod;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int purpose; // @synthesize purpose=_purpose;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) BOOL kernelCallstacks; // @synthesize kernelCallstacks=_kernelCallstacks;
@property(readonly, nonatomic) BOOL userCallstacks; // @synthesize userCallstacks=_userCallstacks;
- (id)shortDescription;
- (id)fullDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDuration:(double)arg1 samplePeriod:(double)arg2 userCallstacks:(BOOL)arg3 kernelCallstacks:(BOOL)arg4 pid:(int)arg5 purpose:(int)arg6;
- (id)init;

@end

