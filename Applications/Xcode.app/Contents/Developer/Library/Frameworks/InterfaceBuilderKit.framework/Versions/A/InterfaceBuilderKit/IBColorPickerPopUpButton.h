//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSCoding.h"
#import "NSMenuDelegate.h"

@class IBMutableOrderedDictionary, NSColor, NSDictionary, NSMenu, NSString;

@interface IBColorPickerPopUpButton : NSView <NSCoding, NSMenuDelegate>
{
    id target;
    SEL action;
    NSMenu *colorsMenu;
    struct CGRect popUpButtonArrowsRect;
    struct CGRect colorWellViewRect;
    struct CGRect colorLabelRect;
    struct CGRect swatchRect;
    struct CGRect colorLabelTitleRect;
    unsigned long long controlSize;
    int defaultColorMode;
    BOOL contentViewHighlighted;
    BOOL contentViewSelected;
    BOOL drawFocusRing;
    NSColor *color;
    NSDictionary *imageStateDictionary;
    IBMutableOrderedDictionary *suggestedColors;
    NSColor *defaultColor;
    id mouseEventMonitor;
}

+ (id)imageStateDictionaryForControlSize:(unsigned long long)arg1;
@property(retain) IBMutableOrderedDictionary *suggestedColors; // @synthesize suggestedColors;
@property SEL action; // @synthesize action;
@property(retain) id target; // @synthesize target;
- (void)displayColorPanel:(id)arg1;
- (void)takeDrawnColorFrom:(id)arg1;
- (void)takeDrawnColorFromPopUpMenu:(id)arg1;
- (void)beginColorDragForEvent:(id)arg1;
- (id)imageForDraggedColor:(id)arg1;
- (id)colorForDragging;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)colorPanelColorChanged:(id)arg1;
- (void)colorPanelWillClose:(id)arg1;
- (void)windowBecameKeyOrMain:(id)arg1;
- (void)windowResignKeyOrMain:(id)arg1;
- (void)colorPickerDidBecomeActive:(id)arg1;
- (void)colorChosenFromColorChooser:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)displayColorPanel;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)showColorsMenu;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawColorLabel;
- (void)drawColorWell;
- (void)drawPopUpButtonArrows;
- (void)drawDebuggingRects;
- (void)drawFocusRing;
- (id)effectiveAttributedTitle;
- (id)attributedTitleForTitle:(id)arg1;
- (id)titleAttributes;
- (id)effectiveImageForControlPart:(int)arg1;
- (id)effectivePopUpButtonArrowsRightCapImage;
- (id)effectiveSwatchFillColor;
- (void)putControlInMixedState;
- (id)multipleValueColor;
- (void)populateColorsMenu;
- (id)menuItemImageForColor:(id)arg1 withSize:(struct CGSize)arg2;
- (double)horizontalMenuOffset;
- (double)verticalMenuOffset;
- (void)sizeRectsForDrawing;
- (double)verticalTitleOffset;
- (double)baseline;
- (double)heightThatFits;
- (double)widthForPopUpButton;
- (struct IBInsetTag)shadowInset;
- (BOOL)isShowingTitle;
- (BOOL)isShowingDefaultColor;
- (BOOL)isShowingMixedColor;
- (BOOL)isShowingNamedColor;
- (BOOL)supportsDefaultColor;
- (struct CGRect)insetRectForSwatchRect:(struct CGRect)arg1;
- (struct CGRect)swatchRectForColorWellRect:(struct CGRect)arg1;
- (double)noColorStrokeWidth;
- (BOOL)isActive;
- (id)titleFont;
- (void)setSuggestedColorsUsingColorList:(id)arg1;
@property(retain) NSColor *color; // @dynamic color;
- (BOOL)onActiveWindow;
@property(retain) NSColor *defaultColor; // @synthesize defaultColor;
@property int defaultColorMode; // @dynamic defaultColorMode;
@property unsigned long long controlSize; // @synthesize controlSize;
- (void)setContentViewHighlighted:(BOOL)arg1;
- (void)setContentViewSelected:(BOOL)arg1;
- (id)imageStateDictionary;
- (void)invalidateImageStateDictionary;
- (id)nameForColor:(id)arg1;
- (BOOL)containsColor:(id)arg1;
- (void)removeColorWithName:(id)arg1;
- (id)allColorNames;
- (id)colorWithName:(id)arg1;
- (void)addColor:(id)arg1 withName:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 colorList:(id)arg2 defaultColor:(id)arg3 defaultColorMode:(int)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
