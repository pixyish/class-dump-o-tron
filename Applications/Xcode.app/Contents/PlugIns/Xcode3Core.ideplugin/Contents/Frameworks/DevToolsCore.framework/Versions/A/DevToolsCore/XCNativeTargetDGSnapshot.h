//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCTargetDGSnapshot.h>

@interface XCNativeTargetDGSnapshot : XCTargetDGSnapshot
{
}

- (BOOL)isJambased;
- (BOOL)isNative;
- (id)initWithInformationFromTarget:(id)arg1 withBuildParameters:(id)arg2;
- (void)computeDependenciesWithMacroExpansionScope:(id)arg1;
- (id)macroExpansionScopeByAddingSDKSettingsToMacroExpansionScope:(id)arg1;
- (BOOL)checkConsistencyOfMacrosInMacroExpansionScope:(id)arg1;

@end

