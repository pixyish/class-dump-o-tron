//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocumentController.h"

#import "NSApplicationDelegate.h"
#import "NSUserNotificationCenterDelegate.h"

@class ITunesActivity, ITunesPackage, ITunesStartupWizard, MZSpinnerWindowController, NSBox, NSDictionary, NSDocument, NSMenu, NSMenuItem, NSMutableArray, NSScrollView, NSTimer, NSWindow, WorkSeriesManagerDisplayController;

@interface InterfaceController : NSDocumentController <NSApplicationDelegate, NSUserNotificationCenterDelegate>
{
    NSWindow *window;
    NSWindow *backgrounActivityWindow;
    MZSpinnerWindowController *_spinnerWindowController;
    NSBox *prototypeStatusBox;
    NSScrollView *workScrollView;
    ITunesStartupWizard *startupWizard;
    NSMenuItem *debugMenu;
    WorkSeriesManagerDisplayController *_controller;
    NSMutableArray *_delayedOpenFiles;
    BOOL _didFinishLaunching;
    NSTimer *_updateXMLTimer;
    BOOL _isSubmitFeedbackMenuItemHidden;
    NSMutableArray *_activeUpdaters;
    struct {
        ITunesActivity *activity;
        ITunesPackage *package;
        NSDictionary *userInfo;
    } _documentCreationContext;
    struct {
        NSDocument *document;
    } _windowControllerCreationContext;
    NSMenu *_helpMenu;
}

+ (void)initialize;
+ (void)setupTransporterLocationIfAvailable;
@property NSMenu *helpMenu; // @synthesize helpMenu=_helpMenu;
- (id)windowControllerCreationDocument;
- (void)endWindowControllerCreationContext;
- (void)beginWindowControllerCreationContextWithDocument:(id)arg1;
- (BOOL)isCreatingDocument;
- (id)documentCreationUserInfo;
- (id)documentCreationPackage;
- (id)documentCreationActivity;
- (void)endDocumentCreationContext;
- (void)beginDocumentCreationContextWithActivity:(id)arg1 package:(id)arg2 userInfo:(id)arg3;
- (void)territoryGroups:(id)arg1;
- (void)launchFeedbackMailWithSubject:(id)arg1 to:(id)arg2 andBody:(id)arg3;
- (BOOL)isSubmitFeedbackMenuItemHidden;
- (void)sendFeedback:(id)arg1;
- (void)showBackgroundActivity:(id)arg1;
- (void)lookupStatus:(id)arg1;
- (void)runStartupWizard:(id)arg1;
- (void)credentialsUpdated:(id)arg1;
- (void)enqueueAnalyzeNotification:(id)arg1;
- (void)activateActivityChooserIfNeeded:(id)arg1;
- (void)saveAndDeliverPackages:(id)arg1;
- (BOOL)canWindowsSaveAndDeliver;
- (BOOL)canWindowSaveAndDeliver:(id)arg1;
- (void)showActivitySelector:(id)arg1;
- (void)runTests;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)sendProviderDeviceToken:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)configureDataTransformers;
- (void)runLicensePanel:(id)arg1;
- (void)removeSubmitFeedbackMenuItem;
- (void)removeDebugMenu;
- (void)removeDebugMenuFromMenu:(id)arg1;
- (void)registerXMLDefaults;
- (void)registerXMLDefaultsWithName:(id)arg1;
- (void)updateXML;
- (void)updater:(id)arg1 didWriteFiles:(unsigned long long)arg2;
- (void)processMessageOfTheDay:(id)arg1;
- (void)scheduleUpdateXMLTimer;
- (void)clearBackgroundActivity:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)shutdownUpdateXMLTimer;
- (void)shutdownRunningJobs:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)openPackageViaActivitySelector:(id)arg1;
- (id)buildAndTestPackage:(id)arg1 identifier:(id)arg2 packageType:(int *)arg3;
- (void)metadataLookupSeriesCompleted:(id)arg1;
- (void)closeSpinner;
- (int)allowedPackageType;
- (void)configureSecurityKeychain;
- (void)runStartupWizard;
- (void)navigateUserIntefaceToURL:(id)arg1;
- (void)selectItemsAndUI:(id)arg1;
- (void)openUILocation:(id)arg1 withIndex:(id)arg2;
- (id)selectItemsInPath:(id)arg1;
- (void)handleGetURLEventViaMetadataLookup:(id)arg1;
- (void)handleGetURLEventViaLocalFile:(id)arg1;
- (void)displayHelp:(id)arg1;
- (void)dispatchURL:(id)arg1;
- (void)handleGetURLEvent:(id)arg1 replyEvent:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)addDocument:(id)arg1;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)makeUntitledDocumentOfType:(id)arg1 error:(id *)arg2;
- (void)newDocument:(id)arg1;
- (void)newDocumentForActivity:(id)arg1 package:(id)arg2 andUserInfo:(id)arg3 error:(id *)arg4;
- (void)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginOpenPanelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)additionalITunesProducerResources:(id)arg1;
- (void)displayUserGuide:(id)arg1;
- (void)openMusicFileImportTemplate:(id)arg1;
- (void)openSoftwareFileImportTemplate:(id)arg1;
- (void)openBookFileImportTemplate:(id)arg1;
- (void)copyTemplatesFromLocation:(id)arg1 toFolderNamed:(id)arg2;
- (void)updateApplicationXML:(id)arg1;
- (void)toggleDebugLogging:(id)arg1;
- (void)toggleShouldValidateSKU:(id)arg1;
- (void)redirectToLocalMachine:(id)arg1;
- (void)dumpUserDefaultsToConsole:(id)arg1;
- (void)redirectToProduction:(id)arg1;

@end

