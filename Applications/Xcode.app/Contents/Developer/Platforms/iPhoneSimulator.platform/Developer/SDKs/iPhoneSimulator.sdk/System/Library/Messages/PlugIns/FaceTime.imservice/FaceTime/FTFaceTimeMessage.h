//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTIDSMessage.h"

#import "NSCopying.h"

@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying>
{
    NSData *_sessionToken;
}

@property(copy) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (id)messageBody;
- (id)requiredKeys;
- (_Bool)isValidMessage;
- (_Bool)hasRequiredKeys:(id *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

