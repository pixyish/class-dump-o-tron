//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

__attribute__((visibility("hidden")))
@interface VoiceOverTypingFeedbackController : PSListController
{
    long long _optionSoftware;
    long long _optionHardware;
    long long _swSelectedRow;
    long long _hwSelectedRow;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifierForIndexPath:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updateSelectedRows;
- (long long)rowForTypingFeedbackOption:(long long)arg1 isSoftware:(_Bool)arg2;
- (long long)feedbackTypeForString:(id)arg1;
- (id)specifiers;

@end
