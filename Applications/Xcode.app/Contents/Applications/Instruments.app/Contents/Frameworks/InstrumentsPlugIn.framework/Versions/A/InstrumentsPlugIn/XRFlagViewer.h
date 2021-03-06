//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/PFTNibView.h>

#import "NSWindowDelegate.h"

@class NSArray, NSMapTable, NSMenu, NSMutableArray, NSOutlineView, NSSearchField, NSString, NSWindow, PFTTraceDocument, XRASLObserver, XRFlagController;

@interface XRFlagViewer : PFTNibView <NSWindowDelegate>
{
    PFTTraceDocument *_currDocument;
    XRFlagController *_flagController;
    NSOutlineView *_flagOutline;
    NSWindow *_myWindow;
    NSMenu *_tableColumnMenu;
    NSMenu *_displayStateMenu;
    NSSearchField *_flagTableSearchField;
    NSMenu *_searchColumnMenu;
    NSArray *_searchMenuItemsArray;
    NSArray *_flagColumnArray;
    NSArray *_flagColumnMenuItemsArray;
    BOOL _flagTableDeferReload;
    BOOL _ignoreColumnMoves;
    NSMutableArray *_flagColumnsToSearch;
    NSMutableArray *_searchedFlags;
    XRASLObserver *_aslObserver;
    NSMapTable *_nextASLScanForTrace;
}

+ (union _flagTableFilter_u)defaultFlagFilter;
+ (union _flagTableFilter_u)flagFilterForDocument:(id)arg1 runNumber:(long long)arg2;
+ (void)setFlagFilter:(union _flagTableFilter_u)arg1 forDocument:(id)arg2 runNumber:(long long)arg3;
- (void)flagModifiedResponse:(id)arg1;
- (void)setSearchCategoryFrom:(id)arg1;
- (void)searchFlagTableAction:(id)arg1;
- (void)columnVisibleAction:(id)arg1;
- (void)displayFilterAction:(id)arg1;
- (void)flagMenuAction:(id)arg1;
- (void)flagRangeAction:(id)arg1;
- (void)reloadFlagTable;
- (id)title;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)hideWindow:(id)arg1;
- (void)showWindow:(id)arg1;
- (id)window;
- (id)flagView;
- (id)contentView;
- (void)setTitleFromDocument:(id)arg1;
- (void)updateRunNumber:(id)arg1;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)_traceDidStop:(id)arg1;
- (void)_traceDidStart:(id)arg1;
- (void)refreshDisplayStateFilterMenuWith:(union _flagTableFilter_u)arg1;
- (void)toggleDisplay;
- (void)scanRemainingASLForTrace:(id)arg1;
- (void)_setASLObservationToTrace:(id)arg1;
- (void)inspectFlagAction:(id)arg1;
- (void)setFlagController:(id)arg1;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)_processNewSignalFlags:(id)arg1;
- (id)init;
- (void)updateSearchCategoryMenu;
- (void)updateColumnHidingMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

