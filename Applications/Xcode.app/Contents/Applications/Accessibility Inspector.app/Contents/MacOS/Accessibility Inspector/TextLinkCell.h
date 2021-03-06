//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSActionCell.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface TextLinkCell : NSActionCell
{
    struct CGRect _trackingRect;
    NSTextStorage *_storage;
    NSLayoutManager *_layout;
    NSTextContainer *_container;
    unsigned long long _charIndex;
    id _link;
    id _textLinkDelegate;
}

- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (struct _NSRange)_characterRangeForPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 attrString:(id)arg4;
- (void)_createTextStorage:(id)arg1 cellFrame:(struct CGRect)arg2;
- (id)textLinkDelegate;
- (void)setTextLinkDelegate:(id)arg1;

@end

