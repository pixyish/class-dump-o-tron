//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUTools/DYPluginDirectoryProvider.h>

@class NSBundle;

@interface DYStandardPluginDirectoryProvider : DYPluginDirectoryProvider
{
    NSBundle *_bundle;
    BOOL _includeDeveloperDirectory;
}

+ (id)_developerDirectory;
- (void)enumerateDirectories:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 includeDeveloperDirectory:(BOOL)arg2;
- (id)init;

@end
