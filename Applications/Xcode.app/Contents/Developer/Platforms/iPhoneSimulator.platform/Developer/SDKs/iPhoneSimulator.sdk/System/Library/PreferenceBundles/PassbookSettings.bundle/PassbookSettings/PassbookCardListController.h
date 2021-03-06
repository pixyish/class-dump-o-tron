//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "PKPaymentServiceDelegate.h"

@class NSArray, NSMutableArray, NSString, PKPassLibrary, PKPaymentOptionsDefaults, PKPaymentService, PKPaymentSetupAboutViewController, PSSpecifier;

@interface PassbookCardListController : PSListController <PKPaymentServiceDelegate>
{
    PKPaymentService *_paymentService;
    NSString *_secureElementIdentifier;
    PKPassLibrary *_passLibrary;
    NSMutableArray *_passes;
    unsigned long long _passLibraryState;
    PKPaymentOptionsDefaults *_paymentDefaults;
    PKPaymentSetupAboutViewController *_privacyController;
    PSSpecifier *_cardGroupSpecifier;
    PSSpecifier *_spinnerSpecifier;
    PSSpecifier *_errorSpecifier;
    PSSpecifier *_addNewCardSpecifier;
    PSSpecifier *_defaultPaymentSpecifier;
    PSSpecifier *_defaultBillingAddressSpecifier;
    PSSpecifier *_defaultShippingAddressSpecifier;
    PSSpecifier *_defaultContactEmailSpecifier;
    PSSpecifier *_defaultContactPhoneSpecifier;
    NSArray *_cardCellSpecifiers;
}

+ (id)_getDisplayableStringForLabeledValue:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)_openPrivacyLink;
- (id)_getDefaultContactPhone;
- (id)_getDefaultContactEmail;
- (id)_getDefaultShippingAddress;
- (id)_getDefaultBillingAddress;
- (id)_getDefaultPaymentCard;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (void)_showDefaultBillingAddressOptions:(id)arg1;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
@property(readonly, nonatomic) PSSpecifier *defaultContactPhoneSpecifier;
@property(readonly, nonatomic) PSSpecifier *defaultContactEmailSpecifier;
@property(readonly, nonatomic) PSSpecifier *defaultShippingAddressSpecifier;
- (id)defaultBillingAddressSpecifier;
@property(readonly, nonatomic) PSSpecifier *defaultPaymentSpecifier;
- (id)_transactionDefaultsSpecifiers;
- (void)_addPaymentCard;
- (void)_showCardDetails:(id)arg1;
- (id)_cardSpecifiers;
- (id)_cardCellSpecifiers;
- (id)specifiers;
- (void)_reloadCardCellsAnimated:(_Bool)arg1;
- (void)_refreshPassLibrary;
- (void)_reloadPassesIfNecessaryAnimated:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

