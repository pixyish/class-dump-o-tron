//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleListViewDataSource.h"

@class DVTBorderedView, DVTChoice, DVTFilePathFieldCell, DVTNotificationToken, DVTObservingToken, DVTStackView_ML, DVTTabChooserView, IDEArgumentsCapsuleSheetController, IDECapsuleListView, IDEEnvironmentVariablesCapsuleSheetController, IDEProfileSchemeAction, IDEScheme, IDEWorkspace, NSMutableArray, NSPopUpButton, NSString, NSTabView, NSTextField, NSView;

@interface IDEProfileActionSheetController : IDEViewController <IDECapsuleListViewDataSource>
{
    DVTTabChooserView *_tabChooser;
    NSTabView *_tabView;
    DVTBorderedView *_useRunActionOptionsBorderedView;
    IDECapsuleListView *_capsuleListView;
    DVTBorderedView *_optionsBorderedView;
    NSPopUpButton *_runnablePopUp;
    NSPopUpButton *_analysisToolsPopUp;
    DVTFilePathFieldCell *_workingDirectoryTextFieldCell;
    NSView *_infoTabViewContentView;
    NSPopUpButton *_macroExpansionRunnableBuildablesPopUp;
    NSTextField *_macroExpansionDescription;
    DVTStackView_ML *_optionsStackView;
    NSView *_resumeOptionView;
    NSView *_debugDocumentVersioningOptionView;
    NSView *_workingDirectoryOptionView;
    DVTChoice *_infoChoice;
    DVTChoice *_conditionsChoice;
    DVTChoice *_optionsChoice;
    IDEScheme *_runContext;
    IDEProfileSchemeAction *_runPhase;
    BOOL _optionsUpdatedInCurrentRunLoop;
    IDEArgumentsCapsuleSheetController *_argumentsViewController;
    IDEEnvironmentVariablesCapsuleSheetController *_environmentVariablesViewController;
    DVTObservingToken *_runnableBuildableProductsObservingToken;
    DVTObservingToken *_runContextRunnableObservingToken;
    DVTObservingToken *_launchActionArgsEnvLinkObservingToken;
    NSMutableArray *_observationTokens;
    DVTNotificationToken *_buildablesToken;
    unsigned long long _runnablePopUpRunnableBuildableProductsCount;
    BOOL _runnablePopUpHasCustomRunnable;
}

+ (id)defaultViewNibName;
+ (void)initialize;
@property(retain) IDEProfileSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
@property(readonly) IDEWorkspace *workspace;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)_resetOptionsUpdatedFlag;
- (void)_updateSupportedOptions;
- (void)_macroExpansionRunnableBuildableSelected:(id)arg1;
- (void)_updateMacroExpansionDescriptionForSelectedItem;
- (void)_updateMacroExpansionRunnablePopUpSelection;
- (void)_updateMacroExpansionRunnablePopUp;
- (unsigned long long)_indexOfDebuggerFromScheme;
- (void)clearHighlightsInCapsuleView;
- (void)_updateRunnablePopUp;
- (void)_runnableBuildableProductsDidChange;
- (void)runnablePopUpAction:(id)arg1;
- (void)_updateMacroExpansionRunnablePopUpEnablement;
- (void)_runnableDidUpdate;
- (void)_analysisToolSelected:(id)arg1;
- (void)_addMenuItemForAnalysisTool:(id)arg1;
- (void)_addMenuItemForAnalysisTools:(id)arg1;
- (void)_updateAnalysisToolsPopUp;
- (void)_selectedSchemeChanged:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

