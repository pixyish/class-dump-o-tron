//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EBookManifest : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_manifest;
    NSString *_manifestPath;
}

+ (id)syncedBookManifest;
+ (id)purchasedBookManifest;
- (id)_manifest;
- (void)_invalidateAfterExternalChange;
- (id)_entries;
- (void)synchronizeData;
@property(readonly) NSString *manifestPath;
- (id)manifestEntriesWithProperty:(id)arg1 equalToValue:(id)arg2 limitCount:(long long)arg3;
- (void)addManifestEntries:(id)arg1;
- (void)addManifestEntry:(id)arg1;
- (void)dealloc;
- (id)initWithManifestPath:(id)arg1;
- (id)init;

@end

