//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface XRLogEvent : NSObject <NSCoding>
{
    NSString *_logMessage;
    int _type;
    NSString *_deviceUUID;
    int _pid;
    unsigned long long _nanoTimestamp;
    unsigned long long _linesInMessage;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)linesInMessage;
- (unsigned long long)timestamp;
- (int)pid;
- (int)type;
- (id)logMessage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initLogEvent:(id)arg1 type:(int)arg2 pid:(int)arg3 timestamp:(unsigned long long)arg4;

@end
