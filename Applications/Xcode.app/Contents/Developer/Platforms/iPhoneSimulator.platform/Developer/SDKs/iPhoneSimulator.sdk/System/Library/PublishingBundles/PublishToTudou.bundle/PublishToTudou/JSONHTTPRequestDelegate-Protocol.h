//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSONHTTPRequest, NSError;

@protocol JSONHTTPRequestDelegate <NSObject>
- (void)request:(JSONHTTPRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(JSONHTTPRequest *)arg1 didReceiveObject:(id)arg2;

@optional
- (void)request:(JSONHTTPRequest *)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3;
@end

