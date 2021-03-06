//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTabView.h"

#import "XCDockViewHeader.h"

@class NSArray, NSImage, XCDockableTabModule;

@interface XCExtendedTabView : NSTabView <XCDockViewHeader>
{
    struct CGPoint _lastUpdateLocation;
    BOOL _preppedForDrop;
    XCDockableTabModule *_delegateNotRetained;
    NSImage *_headerImage;
    struct CGRect _lastHeaderFrame;
    BOOL _updatesHeaderImage;
    BOOL _didEnter;
    NSArray *_undoTabItemsList;
    BOOL _clipEdges;
    BOOL _autoTabSwitchEnabled;
}

+ (void)initialize;
- (void)mouseDraggedOnHeader:(id)arg1;
- (void)selectedTabAtLocation:(struct CGPoint)arg1;
- (void)mouseDownOnHeader:(id)arg1;
- (id)headerImageWithSelectedTabOnly:(BOOL)arg1;
- (id)headerImage;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (id)imageForIndex:(long long)arg1 adjustPoint:(struct CGPoint *)arg2;
- (void)_beginDrag:(id)arg1 fromTabAtIndex:(long long)arg2;
- (void)_updateTabs;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)prepDropAreaForEntry:(id)arg1 spaceNeeded:(BOOL)arg2;
- (id)tabViewDelegate;
- (void)setTabViewDelegate:(id)arg1;
- (void)setAutoTabSwitchEnabled:(BOOL)arg1;
- (BOOL)autoTabSwitchEnabled;
- (struct CGRect)contentRect;
- (BOOL)clipEdges;
- (void)setClipEdges:(BOOL)arg1;
- (void)dealloc;
- (void)_drawBorder:(id)arg1 inRect:(struct CGRect)arg2;

@end

