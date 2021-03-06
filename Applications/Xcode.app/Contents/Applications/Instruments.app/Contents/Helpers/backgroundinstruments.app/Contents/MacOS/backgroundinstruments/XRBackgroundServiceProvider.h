//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRTimeProfileRequestor.h"

@class NSString, XRTimeProfileRequestElement;

@interface XRBackgroundServiceProvider : NSObject <XRTimeProfileRequestor>
{
    XRTimeProfileRequestElement *_currentTimeProfileRequest;
}

@property(retain, nonatomic) XRTimeProfileRequestElement *currentTimeProfileRequest; // @synthesize currentTimeProfileRequest=_currentTimeProfileRequest;
- (void).cxx_destruct;
- (void)timeProfileUnderMouse:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)toggleRecordingState:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)timeProfileFrontMost:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)timeProfileSystem:(id)arg1 userData:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

