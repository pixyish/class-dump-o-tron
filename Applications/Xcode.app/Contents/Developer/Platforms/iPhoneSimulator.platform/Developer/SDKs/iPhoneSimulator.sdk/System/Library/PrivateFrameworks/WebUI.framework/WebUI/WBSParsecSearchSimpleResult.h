//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebUI/WBSParsecSearchResult.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecSearchSimpleResult : WBSParsecSearchResult
{
    WBSParsecImageRepresentation *_titleGlyph;
    NSArray *_moreIconRepresentations;
    _Bool _descriptionTextCanWrap;
    _Bool _hasSingleLineDescriptionAndTitle;
    NSNumber *_titleMaximumNumberOfLines;
    NSString *_descriptionLeadInText;
    NSNumber *_descriptionMaximumNumberOfLines;
    NSString *_footnote;
}

@property(readonly, nonatomic) _Bool hasSingleLineDescriptionAndTitle; // @synthesize hasSingleLineDescriptionAndTitle=_hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(readonly, nonatomic) _Bool descriptionTextCanWrap; // @synthesize descriptionTextCanWrap=_descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines; // @synthesize descriptionMaximumNumberOfLines=_descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines; // @synthesize titleMaximumNumberOfLines=_titleMaximumNumberOfLines;
- (void).cxx_destruct;
- (id)moreIconsWithSession:(id)arg1;
@property(readonly, nonatomic) _Bool hasMoreIcons;
- (id)titleGlyphWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

