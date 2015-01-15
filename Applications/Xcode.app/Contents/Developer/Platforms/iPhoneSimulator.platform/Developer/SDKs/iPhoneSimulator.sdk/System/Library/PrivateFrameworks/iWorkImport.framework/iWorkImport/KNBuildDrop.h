//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNChunkableBuildAnimator.h"
#import "KNFrameBuildAnimator.h"

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper, NSString;

__attribute__((visibility("hidden")))
@interface KNBuildDrop : KNAnimationEffect <KNChunkableBuildAnimator, KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    KNMotionBlurAnimationPluginWrapper *mMotionBlurWrapper;
    KNAnimParameterGroup *mParameterGroup;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)animationName;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)animationsWithContext:(id)arg1;
- (id)p_bounceAnimationWithBeginTime:(double)arg1 duration:(double)arg2 bounceHeight:(double)arg3;
- (id)p_bouncePointArrayForDuration:(double)arg1;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
