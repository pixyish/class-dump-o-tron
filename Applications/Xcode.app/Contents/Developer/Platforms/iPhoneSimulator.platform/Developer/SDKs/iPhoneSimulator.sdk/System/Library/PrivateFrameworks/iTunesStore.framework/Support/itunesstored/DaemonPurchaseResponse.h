//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSPurchaseResponse.h"

@class StoreDownloadQueueResponse;

@interface DaemonPurchaseResponse : SSPurchaseResponse
{
    StoreDownloadQueueResponse *_decodedResponse;
}

@property(retain, nonatomic) StoreDownloadQueueResponse *decodedResponse; // @synthesize decodedResponse=_decodedResponse;
- (void)dealloc;

@end
