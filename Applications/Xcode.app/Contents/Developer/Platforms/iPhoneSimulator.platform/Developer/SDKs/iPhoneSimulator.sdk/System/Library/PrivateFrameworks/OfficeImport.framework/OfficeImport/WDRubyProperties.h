//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WDRubyProperties : NSObject
{
    unsigned int mOriginal:1;
    CDStruct_1cdbed2b *mOriginalProperties;
}

- (void)clearPhoneticGuideLanguage;
- (_Bool)isPhoneticGuideLanguageOverridden;
@property(nonatomic) int phoneticGuideLanguage;
- (void)clearDistanceBetween;
- (_Bool)isDistanceBetweenOverridden;
@property(nonatomic) unsigned short distanceBetween;
- (void)clearBaseFontSize;
- (_Bool)isBaseFontSizeOverridden;
@property(nonatomic) unsigned short baseFontSize;
- (void)clearPhoneticGuideFontSize;
- (_Bool)isPhoneticGuideFontSizeOverridden;
@property(nonatomic) unsigned short phoneticGuideFontSize;
- (void)clearAlignment;
- (_Bool)isAlignmentOverridden;
@property(nonatomic) int alignment;
- (_Bool)isAnythingOverridden;
- (void)dealloc;
- (id)init;
- (_Bool)isAnythingOverriddenIn:(CDStruct_1cdbed2b *)arg1;

@end
