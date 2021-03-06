//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITunesSoftwareBundleDescription.h"

@class NSString;

@interface ITunesSoftwareBundleDescription : NSObject <ITunesSoftwareBundleDescription>
{
    int _applicationType;
    NSString *_displayableDescription;
    NSString *_existingBundleIdentifier;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (int)applicationTypeWithString:(id)arg1;
+ (id)stringWithApplicationType:(int)arg1;
@property(nonatomic) int applicationType; // @synthesize applicationType=_applicationType;
@property(retain, nonatomic) NSString *existingBundleIdentifier; // @synthesize existingBundleIdentifier=_existingBundleIdentifier;
@property(retain, nonatomic) NSString *displayableDescription; // @synthesize displayableDescription=_displayableDescription;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

