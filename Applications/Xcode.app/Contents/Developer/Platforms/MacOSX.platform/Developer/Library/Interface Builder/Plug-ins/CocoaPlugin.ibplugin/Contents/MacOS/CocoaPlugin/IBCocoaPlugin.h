//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBPlugin.h"

@class IBMenuItemView, IBWindowView, NSArray, NSBox, NSDrawer, NSScrollView, NSTabView, NSView, NSViewController, NSWindow;

@interface IBCocoaPlugin : IBPlugin
{
    NSView *entityTemplate;
    IBWindowView *texturedWindowTemplate;
    IBWindowView *windowTemplate;
    IBWindowView *panelTemplate;
    IBWindowView *HUDTemplate;
    NSView *drawerTemplate;
    NSTabView *tabViewTemplate;
    NSBox *boxTemplate;
    NSScrollView *scrollViewTemplate;
    NSView *collectionViewTemplate;
    NSView *openGLViewTemplate;
    NSView *standardConfigureToolbarItemTemplate;
    NSView *standardFontToolbarItemTemplate;
    NSView *standardColorToolbarItemTemplate;
    NSView *standardSeparatorToolbarItemTemplate;
    NSView *standardSpaceToolbarItemTemplate;
    NSView *standardPrintToolbarItemTemplate;
    NSView *standardFlexibleSpaceToolbarItemTemplate;
    NSArray *entityWizardTopLevelObjects;
    NSDrawer *realDrawer;
    NSWindow *defaultWindow;
    NSWindow *defaultTexturedWindow;
    NSWindow *defaultHUDWindow;
    NSWindow *defaultPanelWindow;
    IBMenuItemView *draggedTextMenuItemView;
    IBMenuItemView *draggedFontMenuItemView;
    IBMenuItemView *draggedFormatMenuItemView;
    IBMenuItemView *draggedApplicationMenuItemView;
    IBMenuItemView *draggedWindowsMenuItemView;
    IBMenuItemView *draggedFileMenuItemView;
    IBMenuItemView *draggedHelpMenuItemView;
    IBMenuItemView *draggedEditMenuItemView;
    IBMenuItemView *draggedFindMenuItemView;
    NSView *draggedTextFieldWithNumberFormatterView;
    NSView *draggedNumberFormatterView;
    NSView *draggedDateFormatterView;
    NSViewController *viewController;
}

+ (id)localizedStringForKey:(id)arg1;
- (void)document:(id)arg1 willSynchronizeWithXcodeProject:(id)arg2;
- (void)document:(id)arg1 takeDefaultDeploymentTargetFromSDKPath:(id)arg2;
- (id)primaryDeclaredDependencyIdentifierForCategory:(long long)arg1;
- (id)declaredDependencyDefinitionsForCategory:(long long)arg1;
- (id)docSetBundleIdentifiersForTargetRuntime:(id)arg1;
- (Class)documentClassForArchivingObjects:(id)arg1;
- (Class)documentClassForObjectsOnPasteboard:(id)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (id)lazyPasteboardTypesForDraggedLibraryView:(id)arg1;
- (BOOL)lazilyProvidesDataForDraggedLibraryView:(id)arg1;
- (void)generateCoreDataEntityInterface;
- (id)acceptDragInfo:(id)arg1;
- (id)dropTargetForDragInfo:(id)arg1 inWindowController:(id)arg2 allowedDraggingOperations:(unsigned long long *)arg3;
- (id)entityDropTargetAtPoint:(struct CGPoint)arg1 inWindowController:(id)arg2;
- (void)registerDragTypesForWindow:(id)arg1;
- (double)documentTemplateDisplayGroupSortOrderForTemplateGroupWithIdentifier:(id)arg1;
- (id)documentTemplateDisplayGroup;
- (BOOL)isBuiltIn;
- (id)requiredFrameworks;
- (id)libraryNibNames;
- (id)label;
- (id)supportedTargetRuntimes;
- (id)integratedTargetRuntimeClasses;
- (id)typeSummaryForLibraryDisplayOfPasteboardObject:(id)arg1;
- (id)pasteboardObjectsForDraggedLibraryView:(id)arg1;
- (void)awakeFromNib;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedLibraryView:(id)arg3;
- (BOOL)isMenuItemView:(id)arg1;
- (void)didLoadLibraryNibNamed:(id)arg1 forTargetRuntime:(id)arg2 topLevelObjects:(id)arg3;
- (void)didLoad;
- (void)ensureCoreDataUIGeneratorUIIsLoaded;

@end

