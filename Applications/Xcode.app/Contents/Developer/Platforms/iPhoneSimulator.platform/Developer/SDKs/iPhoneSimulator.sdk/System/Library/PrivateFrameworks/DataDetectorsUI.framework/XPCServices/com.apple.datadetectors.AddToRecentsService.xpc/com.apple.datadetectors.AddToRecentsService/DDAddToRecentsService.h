//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDAddToRecentsInterface.h"

@class NSString;

@interface DDAddToRecentsService : NSObject <DDAddToRecentsInterface>
{
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
- (void)addResultToRecents:(id)arg1 eventDate:(id)arg2 subject:(id)arg3 weight:(id)arg4 metadata:(id)arg5 userInitiated:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithClientProcessIdentifier:(int)arg1;

@end
