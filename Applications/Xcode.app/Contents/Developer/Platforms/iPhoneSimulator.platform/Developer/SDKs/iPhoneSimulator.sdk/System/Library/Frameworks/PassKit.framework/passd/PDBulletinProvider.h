//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"
#import "NSSecureCoding.h"

@class BBDataProviderProxy, NSDictionary, NSMutableDictionary, NSString;

@interface PDBulletinProvider : NSObject <BBRemoteDataProvider, NSSecureCoding>
{
    NSMutableDictionary *_bulletins;
    BBDataProviderProxy *_proxy;
    id <PDBulletinProviderDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) id <PDBulletinProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BBDataProviderProxy *proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) NSDictionary *bulletins; // @synthesize bulletins=_bulletins;
- (void)removeAllBulletins;
- (void)removeBulletin:(id)arg1;
- (void)insertOrUpdateBulletin:(id)arg1;
- (void)cullBulletinsToCount:(unsigned long long)arg1;
- (void)applyConnection:(id)arg1;
- (_Bool)syncsBulletinDismissal;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sectionParameters;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)universalSectionIdentifier;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

