//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MFIMAPDownloadCache : NSObject
{
    NSMutableArray *_downloads;
}

- (void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2;
- (void)cleanUpDownloadsForUid:(unsigned int)arg1;
- (void)processResultsForUid:(unsigned int)arg1;
- (void)handleFetchResponses:(id)arg1;
- (void)handleFetchResponse:(id)arg1 forUid:(unsigned int)arg2;
- (id)downloadForUid:(unsigned int)arg1 section:(id)arg2 range:(struct _NSRange)arg3 consumer:(id)arg4;
- (id)downloadForUid:(unsigned int)arg1 section:(id)arg2 expectedLength:(unsigned long long)arg3 consumer:(id)arg4;
- (id)downloadForUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4;
- (id)downloadForMessage:(id)arg1;
- (void)dealloc;

@end

