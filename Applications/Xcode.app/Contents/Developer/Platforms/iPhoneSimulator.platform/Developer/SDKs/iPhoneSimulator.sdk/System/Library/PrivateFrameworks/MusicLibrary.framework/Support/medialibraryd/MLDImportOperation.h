//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MLDDatabaseImport, NSData, NSError;

@interface MLDImportOperation : NSOperation
{
    CDUnknownBlockType _clientCompletionHandler;
    _Bool _suspended;
    _Bool _success;
    float _progress;
    MLDDatabaseImport *_import;
    NSError *_error;
    NSData *_returnData;
}

+ (id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2;
@property(readonly, nonatomic) NSData *returnData; // @synthesize returnData=_returnData;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) MLDDatabaseImport *import; // @synthesize import=_import;
- (void).cxx_destruct;
- (void)_setClientCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_clientCompletionHandler;
- (void)_writerTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)setReturnData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSuccess:(_Bool)arg1;
- (void)setProgress:(float)arg1;
- (void)main;
- (id)longDescription;
@property(readonly, nonatomic) unsigned long long importSource;
- (id)init;
- (id)initWithDatabaseImport:(id)arg1;

@end
