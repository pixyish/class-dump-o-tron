//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle
{
    unsigned long long _deleteCount;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;
- (unsigned long long)deleteCount;
- (id)initWithCandidate:(id)arg1 deleteCount:(unsigned long long)arg2;

@end

