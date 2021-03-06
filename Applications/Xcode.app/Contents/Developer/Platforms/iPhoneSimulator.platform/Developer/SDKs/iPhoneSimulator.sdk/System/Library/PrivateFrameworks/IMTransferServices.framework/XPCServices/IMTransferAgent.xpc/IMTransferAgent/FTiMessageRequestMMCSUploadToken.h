//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSMessage.h"

#import "NSCopying.h"

@class NSData, NSNumber, NSString;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying>
{
    NSString *_responseAuthToken;
    NSNumber *_length;
    NSData *_signature;
    NSString *_responseRequestURL;
    NSString *_responseRequestorID;
}

@property(copy) NSString *responseRequestorID; // @synthesize responseRequestorID=_responseRequestorID;
@property(copy) NSString *responseRequestURL; // @synthesize responseRequestURL=_responseRequestURL;
@property(copy) NSData *signature; // @synthesize signature=_signature;
@property(copy) NSNumber *length; // @synthesize length=_length;
@property(copy) NSString *responseAuthToken; // @synthesize responseAuthToken=_responseAuthToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (long long)command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

