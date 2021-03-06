//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface PSIAsset : NSObject <NSCopying>
{
    NSString *_uuid;
    NSArray *_contentStrings;
    struct __CFArray *_categories;
    struct __CFArray *_owningCategories;
}

@property(readonly, nonatomic) struct __CFArray *owningCategories; // @synthesize owningCategories=_owningCategories;
@property(readonly, nonatomic) struct __CFArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) NSArray *contentStrings; // @synthesize contentStrings=_contentStrings;
@property(copy, nonatomic, setter=setUUID:) NSString *uuid; // @synthesize uuid=_uuid;
- (void)clear;
- (void)reverse;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)_initForCopy:(_Bool)arg1;

@end

