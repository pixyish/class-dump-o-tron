//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSOrderedSet, NSString;

@interface GKListCacheObject : GKExpiringCacheObject
{
}

+ (id)relationshipKeyPathsForPrefetch;
+ (Class)entryClass;
- (id)entriesPassingTest:(CDUnknownBlockType)arg1;
- (id)entryPassingTest:(CDUnknownBlockType)arg1;
- (id)findEntry:(CDUnknownBlockType)arg1;
- (void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(CDUnknownBlockType)arg2 reuseEntriesByIndex:(_Bool)arg3;
- (void)removeEntriesMatchingPredicate:(id)arg1;
- (void)reorderEntry:(id)arg1 toIndex:(long long)arg2;
- (id)internalRepresentation;
- (void)updateSeed;

// Remaining properties
@property(nonatomic) _Bool detailsLoaded; // @dynamic detailsLoaded;
@property(retain, nonatomic) NSOrderedSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *seed; // @dynamic seed;

@end
