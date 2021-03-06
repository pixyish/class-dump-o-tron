//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SearchCompletionGlyphViewLayout.h"

__attribute__((visibility("hidden")))
@interface StarkSearchCompletionGlyphViewLayout : SearchCompletionGlyphViewLayout
{
    _Bool _collapsesLeftMarginWithoutGlyph;
    _Bool highlighted;
    double _leftInsetWithoutGlyph;
    double _availableLabelWidth;
    long long _labelPositions;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted;
@property(nonatomic) long long labelPositions; // @synthesize labelPositions=_labelPositions;
@property(readonly, nonatomic) double availableLabelWidth; // @synthesize availableLabelWidth=_availableLabelWidth;
@property(nonatomic) double leftInsetWithoutGlyph; // @synthesize leftInsetWithoutGlyph=_leftInsetWithoutGlyph;
@property(nonatomic) _Bool collapsesLeftMarginWithoutGlyph; // @synthesize collapsesLeftMarginWithoutGlyph=_collapsesLeftMarginWithoutGlyph;
- (id)boldSubtitleLabelTextAttributes;
- (id)boldTitleLabelTextAttributes;
- (id)subtitleLabelTextAttributes;
- (id)titleLabelTextAttributes;
- (id)titleLabel;
- (void)layout;
- (id)init;

@end

