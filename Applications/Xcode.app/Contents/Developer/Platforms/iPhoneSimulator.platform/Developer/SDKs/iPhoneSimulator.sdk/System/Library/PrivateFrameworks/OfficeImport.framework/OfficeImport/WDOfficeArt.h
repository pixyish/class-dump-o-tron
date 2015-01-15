//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class OADDrawable, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDOfficeArt : WDRun
{
    WDCharacterProperties *mProperties;
    OADDrawable *mDrawable;
    _Bool mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;
- (void)propagateTextTypeToDrawables;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (id)imageName;
- (id)imageData;
- (void)setImageBlipRef:(id)arg1;
- (id)imageBlipRef;
- (void)setFloating:(_Bool)arg1;
- (_Bool)isFloating;
- (void)clearDrawable;
- (_Bool)isDrawableOverridden;
- (id)overrideDrawable;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)clearProperties;
- (void)setProperties:(id)arg1;
- (id)properties;
- (int)runType;
- (void)dealloc;
- (id)initWithParagraph:(id)arg1;
- (void)checkForFloating:(id)arg1;

@end
