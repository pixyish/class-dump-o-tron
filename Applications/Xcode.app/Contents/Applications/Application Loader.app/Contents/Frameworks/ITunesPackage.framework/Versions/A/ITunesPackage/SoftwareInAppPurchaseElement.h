//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/SoftwareInAppPurchaseElementBase.h>

@interface SoftwareInAppPurchaseElement : SoftwareInAppPurchaseElementBase
{
}

+ (id)iTunesConnectPurpleSoftwareTypeForMacOS;
+ (id)iTunesConnectPurpleSoftwareTypeForIOS;
+ (void)initialize;
- (id)products;
- (void)setProducts:(id)arg1;
- (id)iapContentAssetContainerElementCreatingIfNeeded;
- (id)iapContentAssetContainerElement;
- (id)assetContainerElementWithType:(id)arg1;
- (BOOL)addSoftwareIAPInfoFromElement:(id)arg1 error:(id *)arg2;
- (id)defaultProductIntervalsWithoutTopLevelInterval;
- (id)defaultProductIntervalsWithTimeGapsFilledInUsingTopLevelInterval;
- (void)setDefaultProductIntervals:(id)arg1;
- (id)defaultProductIntervals;
- (void)setDefaultProductClearedForSale:(id)arg1;
- (id)defaultProductClearedForSale;
- (id)defaultProduct;
- (id)defaultProductInsertingIfNeeded;
- (BOOL)isSubscription;
- (BOOL)isNonConsumable;
- (BOOL)isConsumable;
- (BOOL)isAutoRenewable;
- (id)init;

@end

