//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartColumnSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedColumnSceneObject : TSCH3DChartColumnSceneObject
{
}

+ (_Bool)isHorizontalChart;
+ (_Bool)isStacked;
+ (id)chartSeriesType;
+ (_Bool)growAnimationSequenceInOrderForChartDeliveryStyle:(unsigned long long)arg1;
- (void)sortElements:(vector_cd7372eb *)arg1 pipeline:(id)arg2;
- (_Bool)blendOpaqueForRotationAnimationElementBlendAnimationClip;
- (_Bool)shouldUpdateBlendOpaqueForRotationAnimationElementBlendAnimationClip;
- (_Bool)growNeedsPerElementAlphaBlendingForDeliveryStyle:(unsigned long long)arg1;
- (_Bool)growAnimationSequenceInOrderForChartDeliveryStyle:(unsigned long long)arg1;

@end

