//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface ITunesValidationResult : NSObject
{
    NSError *_error;
    long long _validationResultType;
}

@property(nonatomic) long long validationResultType; // @synthesize validationResultType=_validationResultType;
- (id)localizedFailureReason;
- (id)localizedDescription;
- (void)dealloc;
- (BOOL)isWarning;
- (id)initWithInfoMessage:(id)arg1;
- (id)initWithWarning:(id)arg1;
- (id)initWithMessage:(id)arg1 type:(long long)arg2;
- (id)initWithError:(id)arg1;
- (id)image;
- (id)imageName;

@end

