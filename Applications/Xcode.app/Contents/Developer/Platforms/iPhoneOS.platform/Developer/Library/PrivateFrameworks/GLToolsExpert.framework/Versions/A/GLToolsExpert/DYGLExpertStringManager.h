//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface DYGLExpertStringManager : NSObject
{
    NSBundle *_localizationBundle;
    NSString *_tableName;
}

- (void).cxx_destruct;
- (id)getLocalizedString:(id)arg1 table:(id)arg2;
- (id)getLocalizedString:(id)arg1;
- (id)initWithClass:(Class)arg1 tableName:(id)arg2;
- (id)init;

@end

