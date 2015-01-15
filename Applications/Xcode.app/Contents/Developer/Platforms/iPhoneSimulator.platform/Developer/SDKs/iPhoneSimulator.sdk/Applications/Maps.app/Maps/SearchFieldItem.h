//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AddressBookAddress, MKSearchCompletion, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface SearchFieldItem : NSObject
{
    NSString *_searchString;
    NSString *_completedQuery;
    MKSearchCompletion *_completion;
    SearchResult *_searchResult;
    AddressBookAddress *_address;
}

@property(retain, nonatomic) AddressBookAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(retain, nonatomic) MKSearchCompletion *completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void).cxx_destruct;
- (id)description;
- (id)atomColor;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)setSearchString:(id)arg1 forCompletedQuery:(id)arg2;
- (void)clear;
- (void)dealloc;
- (id)waypoint;

@end
