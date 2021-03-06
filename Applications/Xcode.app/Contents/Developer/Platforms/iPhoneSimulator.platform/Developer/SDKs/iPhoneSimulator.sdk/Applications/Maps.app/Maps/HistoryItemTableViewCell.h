//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchCompletionTableViewCell.h"

@class NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface HistoryItemTableViewCell : SearchCompletionTableViewCell
{
    UIImageView *_glyphImageView;
    id <HistoryItem> _historyItem;
    NSString *_searchText;
}

+ (id)cellForValue:(id)arg1 table:(id)arg2 idiom:(long long)arg3 searchText:(id)arg4;
+ (id)cellForValue:(id)arg1 table:(id)arg2 searchText:(id)arg3;
+ (id)cellForValue:(id)arg1 table:(id)arg2;
+ (id)_searchRequestFromString:(id)arg1;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) id <HistoryItem> historyItem; // @synthesize historyItem=_historyItem;
- (void).cxx_destruct;

@end

