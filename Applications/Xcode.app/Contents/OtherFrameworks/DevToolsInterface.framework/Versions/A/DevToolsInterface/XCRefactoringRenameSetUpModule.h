//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCRefactoringTransformationSetUpModule.h>

@class NSNumber, NSString, NSTextField;

@interface XCRefactoringRenameSetUpModule : XCRefactoringTransformationSetUpModule
{
    NSString *_name;
    NSNumber *_nameSymbolType;
    NSTextField *newNameTextField;
}

- (void)dealloc;
- (id)snapshotTextFieldsForKeys;
- (void)addToUserInput:(id)arg1;
- (void)setNameSymbolType:(id)arg1;
- (void)setName:(id)arg1;
- (void)_createValidator;

@end

