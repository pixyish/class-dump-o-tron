//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSDictionary, NSString;

@interface SoftwareLibraryUpdateOperation : ISOperation
{
    NSString *_bundleID;
    NSDictionary *_changeset;
}

- (void)run;
@property(readonly) NSDictionary *changeset;
@property(readonly) NSString *bundleIdentifier;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 changeset:(id)arg2;

@end

