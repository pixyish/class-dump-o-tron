//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBHIView.h"

@class NSString;

@interface IBHIDisclosureTriangle : IBHIView
{
    unsigned short orientation;
    NSString *title;
    BOOL collapsed;
    BOOL autoToggle;
    BOOL showTitle;
}

+ (id)classNameForHICoder;
- (void)setOrientation:(unsigned short)arg1;
- (unsigned short)orientation;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setShowTitle:(BOOL)arg1;
- (BOOL)showTitle;
- (void)setAutoToggle:(BOOL)arg1;
- (BOOL)autoToggle;
- (void)setCollapsed:(BOOL)arg1;
- (BOOL)collapsed;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)mouseDown:(id)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;

@end

