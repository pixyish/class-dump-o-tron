//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileSafariSettings/SafariSettingsListController.h>

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "DevicePINControllerDelegate.h"

@class ABPeoplePickerNavigationController, NSIndexPath, NSString, UIPopoverController;

__attribute__((visibility("hidden")))
@interface SafariAutoFillSettingsController : SafariSettingsListController <DevicePINControllerDelegate, ABPeoplePickerNavigationControllerDelegate>
{
    UIPopoverController *_autoFillContactController;
    NSIndexPath *_autoFillContactIndex;
    _Bool _isMeCardSet;
    void *_addressBook;
    ABPeoplePickerNavigationController *_meCardPicker;
    CDUnknownBlockType _passcodeEntryCompletionHandler;
    CDUnknownBlockType _promptCompletionHandler;
    CDUnknownBlockType _passcodeSetupCompletionHandler;
}

+ (_Bool)addressBookHasMeCard:(void *)arg1;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (void)didAcceptSetPIN;
- (void)didAcceptEnteredPIN;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_promptForPasscodeIfNeededWithTitle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setUseContactInfo:(id)arg1 forSpecifier:(id)arg2;
- (void)presentPopoverContactListInTable:(id)arg1 index:(id)arg2 specifier:(id)arg3;
- (id)specifiers;
- (void)_dismissMeCardPicker;
- (void)showMeCardPicker;
- (void)setShouldAutoFillCreditCards:(id)arg1 specifier:(id)arg2;
- (id)shouldAutoFillCreditCards:(id)arg1;
- (void)setShouldAutoFillPasswords:(id)arg1 specifier:(id)arg2;
- (id)shouldAutoFillPasswords:(id)arg1;
- (void)_setShouldAutoFill:(_Bool)arg1 specifier:(id)arg2 message:(id)arg3 setter:(CDUnknownBlockType)arg4;
- (void)_showPasscodeSetupSheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_enablingAutoFillWithoutPasscodePromptEndedWithResult:(long long)arg1;
- (void)_promptForEnablingAutoFillWithoutPasscodeWithTitle:(id)arg1 message:(id)arg2 allowAnyway:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)myInfo:(id)arg1;
- (id)useContactInfo:(id)arg1;
- (id)meCardName;
- (id)_formDataController;
- (void)updateUseContactInfoSpecifiers;
- (void)_setupMeCardPicker;
- (void)willResignActive;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

