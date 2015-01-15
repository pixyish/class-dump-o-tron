//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRTraceFlag.h>

@class NSMutableData, NSString, XRFlagRulerMarker;

@interface XRTimeFlag : XRTraceFlag
{
    NSString *_key;
    unsigned long long _nanoTimestamp;
    NSMutableData *_colorData;
    id <NSObject><NSCoding> _color;
    XRFlagRulerMarker *_marker;
}

+ (id)flagWithTimestamp:(unsigned long long)arg1 modifiable:(BOOL)arg2 global:(BOOL)arg3;
+ (id)flagWithName:(id)arg1 summary:(id)arg2 icon:(id)arg3 modifiable:(BOOL)arg4 global:(BOOL)arg5 timestamp:(unsigned long long)arg6;
+ (void)initialize;
- (id)dataElementsForContext:(id)arg1;
- (id)description;
- (id)flagKey;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)setMarker:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 summary:(id)arg2 icon:(id)arg3 modifiable:(BOOL)arg4 global:(BOOL)arg5 timestamp:(unsigned long long)arg6;

@end
