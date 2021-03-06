//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _EnvironmentsAlertTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_environments;
    NSString *_selectedEnvironmentName;
    _Bool _customEnvironmentSelected;
}

@property(readonly, nonatomic, getter=isCustomEnvironmentSelected) _Bool customEnvironmentSelected; // @synthesize customEnvironmentSelected=_customEnvironmentSelected;
@property(readonly, nonatomic) NSString *selectedEnvironmentName; // @synthesize selectedEnvironmentName=_selectedEnvironmentName;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithStyle:(long long)arg1 environments:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

