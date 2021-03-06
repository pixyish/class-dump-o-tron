//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNAnimationPluginFrameRendering.h"

@class CALayer, TSDGLLayer;

@protocol KNCustomFrameBuildAnimator <KNAnimationPluginFrameRendering>
- (TSDGLLayer *)GLLayer;
- (CALayer *)layerWithFrame:(struct CGRect)arg1 context:(id <KNAnimationPluginContext>)arg2;

@optional
+ (unsigned long long)maxChunkCountToAnimate;
- (double)animationFPS;
@end

