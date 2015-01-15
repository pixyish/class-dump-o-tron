//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RUTrackActioning.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIImage, UITableView, _RUTrackActionsHeaderView;

@interface RUTrackActionsView : UIView <UITableViewDataSource, UITableViewDelegate, RUTrackActioning>
{
    _RUTrackActionsHeaderView *_headerView;
    UITableView *_tableView;
    _Bool _presentedInPopover;
    long long _enabledActions;
    long long _onActions;
    id <RUTrackActionsDelegate> _trackActionsDelegate;
}

+ (struct CGSize)artworkSize;
@property(nonatomic, getter=isPresentedInPopover) _Bool presentedInPopover; // @synthesize presentedInPopover=_presentedInPopover;
@property(nonatomic) __weak id <RUTrackActionsDelegate> trackActionsDelegate; // @synthesize trackActionsDelegate=_trackActionsDelegate;
@property(nonatomic) long long onActions; // @synthesize onActions=_onActions;
@property(nonatomic) long long enabledActions; // @synthesize enabledActions=_enabledActions;
- (void).cxx_destruct;
- (void)_updateHeaderViewHeight;
- (id)_titleForAction:(long long)arg1;
- (void)_didChangeContentSize;
- (struct UIOffset)_accessoryImageOffsetForAction:(long long)arg1;
- (id)_accessoryImageForAction:(long long)arg1 highlighted:(_Bool)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)reloadData;
@property(copy, nonatomic) NSString *songText;
@property(retain, nonatomic) UIImage *artworkImage;
@property(copy, nonatomic) NSString *artistText;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) long long cancelIndex;
- (long long)actionForButtonIndex:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
