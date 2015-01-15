//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSView;

@interface CDragSource : NSObject
{
    NSView *fView;
    struct _jobject *fComponent;
    struct _jobject *fComponentPeer;
    struct _jobject *fDragSourceContextPeer;
    struct _jobject *fTransferable;
    struct _jobject *fTriggerEvent;
    long long fTriggerEventTimeStamp;
    struct CGPoint fDragPos;
    int fClickCount;
    int fModifiers;
    struct _jobject *fCursor;
    NSImage *fDragImage;
    struct CGPoint fDragImageOffset;
    int fSourceActions;
    struct _jobject *fFormats;
    struct _jobject *fFormatMap;
    int fDragKeyModifiers;
    int fDragMouseModifiers;
}

+ (id)currentDragSource;
- (id)init:(struct _jobject *)arg1 component:(struct _jobject *)arg2 peer:(struct _jobject *)arg3 control:(id)arg4 transferable:(struct _jobject *)arg5 triggerEvent:(struct _jobject *)arg6 dragPosX:(int)arg7 dragPosY:(int)arg8 modifiers:(int)arg9 clickCount:(int)arg10 timeStamp:(long long)arg11 cursor:(struct _jobject *)arg12 dragImage:(struct _jobject *)arg13 dragImageOffsetX:(int)arg14 dragImageOffsetY:(int)arg15 sourceActions:(int)arg16 formats:(struct _jobject *)arg17 formatMap:(struct _jobject *)arg18;
- (void)removeFromView:(const struct JNINativeInterface_ **)arg1;
- (void)dealloc;
- (struct _jobject *)dataTransferer:(const struct JNINativeInterface_ **)arg1;
- (struct _jobject *)convertData:(long long)arg1;
- (id)getFileList:(char *)arg1 dataLength:(int)arg2;
- (BOOL)declareTypesToPasteboard:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (void)validateDragImage;
- (id)nsDragEvent:(BOOL)arg1;
- (void)doDrag;
- (void)drag;
- (void)draggingOperationChanged:(unsigned long long)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)postDragEnter;
- (void)postDragExit;
- (struct CGPoint)mapNSScreenPointToJavaWithOffset:(struct CGPoint)arg1;

@end
