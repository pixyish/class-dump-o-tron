//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEVariablesViewContentProvider.h"
#import "IDEVariablesViewContextMenuDelegate.h"

@class DBGDataValue, DVTStackBacktrace, IDEVariablesView, NSButtonCell, NSImage, NSString;

@interface DBGDataTipVariablesViewContentProvider : NSObject <IDEVariablesViewContextMenuDelegate, IDEVariablesViewContentProvider>
{
    DBGDataValue *_dataValue;
    NSImage *_imageToUseInDefaultQuickLook;
    IDEVariablesView *_variablesView;
    NSButtonCell *_quickLookCell;
    NSButtonCell *_printObjectCell;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)watchVariable:(id)arg1;
- (void)_addWatchVariableMenuItemToMenu:(id)arg1 selectedVariable:(id)arg2;
- (void)provideHelpMenuItem:(id)arg1;
- (void)providePrimaryMenuItems:(id)arg1;
- (int)formatterSizeStyle;
- (BOOL)showCellExpansion;
- (int)compoundNodeFormatterModeForItem:(id)arg1 atRow:(long long)arg2;
- (void)quickLookProviderForDataValue:(id)arg1 quickLookProviderHandler:(CDUnknownBlockType)arg2;
- (id)statusCellsDictionary;
- (void)printDescriptionOfClickedRow:(id)arg1;
- (void)toggleQuickLookForClickedRow:(id)arg1;
- (id)outlineView;
- (id)contextNameForNode:(id)arg1;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (BOOL)deleteNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (void)providerWasInstalledForVariablesView:(id)arg1;
@property(readonly) BOOL supportsShowingRawValues;
@property(readonly) CDUnknownBlockType nodeSortComparator;
@property(readonly) id <IDEVariablesViewContextMenuDelegate> contextMenuDelegate;
- (id)initWithDataValue:(id)arg1 imageToUseInDefaultQuickLook:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) BOOL loadingNewVariablesInBackground;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

