//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUTableViewController.h"

#import "MPUMiniPlayerParticipant.h"
#import "MusicSearchViewControllerDelegate.h"
#import "MusicTableViewDelegate.h"

@class MusicSearchViewController, NSMapTable, NSString, UISearchBar, UISearchDisplayController, UITraitCollection;

@interface MusicTableViewController : MPUTableViewController <MPUMiniPlayerParticipant, MusicSearchViewControllerDelegate, MusicTableViewDelegate>
{
    NSMapTable *_calculatedHeightByTableViewRelatedClass;
    _Bool _isVisible;
    UITraitCollection *_previousTraitCollection;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    MusicSearchViewController *_searchViewController;
    id <MusicTableViewControllerDelegate> _delegate;
}

+ (_Bool)_supportsSearch;
+ (_Bool)_shouldPopWhenEmpty;
+ (Class)_tableViewClass;
@property(nonatomic) __weak id <MusicTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateVisibleCellsPlaybackState;
- (void)_updateTableViewMinimumHeightAdditions;
- (void)_updateNavigationPrompt;
- (id)_searchDisplayController;
- (id)_searchBar;
- (void)_invalidateCalculatedHeights;
- (double)_heightForCellConfigurationClass:(Class)arg1 inTableView:(id)arg2;
- (void)_tableViewController_itemDidChangeNotification:(id)arg1;
- (void)_tableViewController_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_tableViewController_cloudControllerCanShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_tableViewController_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_registerHeight:(id)arg1 forTableRelatedClass:(Class)arg2;
- (id)_heightForTableRelatedClass:(Class)arg1;
- (id)_createTableViewBackgroundView;
- (void)contentSizeCategoryDidChange;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)musicTableView:(id)arg1 traitCollectionDidChange:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)searchViewControllerWillEndSearch:(id)arg1;
- (void)searchViewControllerWillBeginSearch:(id)arg1;
- (id)_createTableView;
- (_Bool)MPU_beginPlaybackForVisibleContent;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)reloadData;
- (void)reloadActionRowsAnimated:(_Bool)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (_Bool)music_hasContent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)view;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

