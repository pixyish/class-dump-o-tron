//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, PSIDatabase;

@interface PSIGroupResult : NSObject
{
    PSIDatabase *_idx;
    PSIDatabase *_heldIdx;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    _Bool _didFetchOwningContentString;
    float _score;
    NSArray *_contentStrings;
    NSArray *_matchRanges;
    struct __CFArray *_categories;
    struct __CFArray *_owningGroupIds;
    struct __CFArray *_assetIds;
}

@property(nonatomic) __weak PSIDatabase *idx; // @synthesize idx=_idx;
@property(retain, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(retain, nonatomic) struct __CFArray *owningGroupIds; // @synthesize owningGroupIds=_owningGroupIds;
@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) struct __CFArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSArray *matchRanges; // @synthesize matchRanges=_matchRanges;
@property(retain, nonatomic) NSArray *contentStrings; // @synthesize contentStrings=_contentStrings;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2 outFetchOwningContentString:(_Bool *)arg3;
@property(readonly) NSArray *assetUUIDs;
@property(readonly) NSString *owningContentString;
@property(readonly, nonatomic) unsigned long long matchCount;
- (id)unitTestDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end

