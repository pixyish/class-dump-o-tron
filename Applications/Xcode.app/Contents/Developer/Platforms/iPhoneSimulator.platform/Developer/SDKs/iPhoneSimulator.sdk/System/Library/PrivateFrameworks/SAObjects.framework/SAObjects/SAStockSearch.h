//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSURL;

@interface SAStockSearch : SABaseClientBoundCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *stockReferences;
@property(copy, nonatomic) NSArray *companyNameList;
@property(copy, nonatomic) NSURL *targetAppId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

