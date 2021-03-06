//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKShareID, NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyShareCommentsOperation : CKOperation
{
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
    CKShareID *_shareID;
    CDUnknownBlockType _modifyShareCommentCompletionBlock;
    NSMutableArray *_savedComments;
    NSMutableDictionary *_commentsToSaveByLocalID;
    NSMutableArray *_deletedCommentIDs;
    NSMutableDictionary *_errorsByCommentID;
}

@property(retain, nonatomic) NSMutableDictionary *errorsByCommentID; // @synthesize errorsByCommentID=_errorsByCommentID;
@property(retain, nonatomic) NSMutableArray *deletedCommentIDs; // @synthesize deletedCommentIDs=_deletedCommentIDs;
@property(retain, nonatomic) NSMutableDictionary *commentsToSaveByLocalID; // @synthesize commentsToSaveByLocalID=_commentsToSaveByLocalID;
@property(retain, nonatomic) NSMutableArray *savedComments; // @synthesize savedComments=_savedComments;
@property(copy, nonatomic) CDUnknownBlockType modifyShareCommentCompletionBlock; // @synthesize modifyShareCommentCompletionBlock=_modifyShareCommentCompletionBlock;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(copy, nonatomic) NSArray *commentIDsToDelete; // @synthesize commentIDsToDelete=_commentIDsToDelete;
@property(copy, nonatomic) NSArray *commentsToSave; // @synthesize commentsToSave=_commentsToSave;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithCommentsToSave:(id)arg1 commentIDsToDelete:(id)arg2 inShareWithID:(id)arg3;

@end

