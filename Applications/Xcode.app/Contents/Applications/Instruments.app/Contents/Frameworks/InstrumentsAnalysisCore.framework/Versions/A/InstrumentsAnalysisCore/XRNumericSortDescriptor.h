//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSortDescriptor.h"

@interface XRNumericSortDescriptor : NSSortDescriptor
{
    int _sortType;
    SEL _valueSelector;
    CDUnknownBlockType _sortBlock;
}

+ (id)descriptorWithKey:(id)arg1 ascending:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (id)descriptorWithKey:(id)arg1 ascending:(BOOL)arg2 type:(int)arg3;
- (void).cxx_destruct;
- (double)numericValueForObject:(id)arg1;
- (id)reversedSortDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setSortType:(int)arg1;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 type:(int)arg3;

@end

