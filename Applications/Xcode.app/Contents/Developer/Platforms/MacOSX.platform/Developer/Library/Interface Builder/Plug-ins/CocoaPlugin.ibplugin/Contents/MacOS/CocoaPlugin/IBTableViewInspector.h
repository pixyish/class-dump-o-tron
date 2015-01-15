//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class IBColorPickerPopUpButton, NSButton, NSPopUpButton, NSStepper, NSTextField;

@interface IBTableViewInspector : IBBoundInspector
{
    NSPopUpButton *highlightStylePopUpButton;
    NSButton *allowsEmptySelection;
    NSButton *allowsMultipleSelection;
    NSButton *allowsReordering;
    NSButton *allowsResizing;
    NSButton *allowsColumnSelection;
    NSButton *allowsTypeSelect;
    NSButton *showHGrid;
    NSButton *showVGrid;
    NSButton *alternatingColors;
    NSButton *autohideScrollers;
    NSButton *displayColumnHeaders;
    NSButton *autosaveTableColumns;
    NSTextField *numberOfColumns;
    NSStepper *numberOfColumnsStepper;
    NSTextField *autosaveTableColumsName;
    IBColorPickerPopUpButton *gridColorPicker;
    IBColorPickerPopUpButton *backgroundColorPicker;
}

- (void)changeNumberOfTableColumns:(id)arg1;
- (void)awakeFromNib;

@end
