//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDisclosureHeaderView.h"

@class DVTNotificationToken;

@interface IDEToyboxToyHeaderView : DVTDisclosureHeaderView
{
    DVTNotificationToken *_fontAndColorThemeChangedNotificationToken;
    CDUnknownBlockType _mouseDownHandler;
}

@property(copy) CDUnknownBlockType mouseDownHandler; // @synthesize mouseDownHandler=_mouseDownHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mouseDown:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)commonInit;
- (id)defaultCloseButton;
- (id)defaultTitleField;

@end
