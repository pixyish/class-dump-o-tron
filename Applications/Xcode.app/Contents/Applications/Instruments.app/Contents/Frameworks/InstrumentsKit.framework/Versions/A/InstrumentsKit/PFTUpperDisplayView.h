//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface PFTUpperDisplayView : NSView
{
    NSView *_instrumentsListScrollView;
    NSView *_trackScrollView;
}

- (void)setFrameSize:(struct CGSize)arg1;
- (void)setList:(id)arg1 trackView:(id)arg2;
- (double)splitPosition;
- (void)setSplitPosition:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

