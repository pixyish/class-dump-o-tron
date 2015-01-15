//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HistoryItem.h"

@class AddressBookAddress, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface DirectionsHomeHistoryItem : NSObject <HistoryItem>
{
    SearchResult *_currentLocation;
    AddressBookAddress *_homeAddress;
}

@property(retain, nonatomic) AddressBookAddress *homeAddress; // @synthesize homeAddress=_homeAddress;
@property(retain, nonatomic) SearchResult *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (double)timestamp;
- (int)type;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
