//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;
+ (id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (SEL)_getSelectorForType:(unsigned long long)arg1;
+ (id)_getSymbolForType:(unsigned long long)arg1;
- (void)_setModifier:(unsigned long long)arg1;
- (unsigned long long)options;
- (void)_setOptions:(unsigned long long)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)modifier;
- (id)symbol;
- (unsigned long long)operatorType;
- (SEL)selector;
- (id)description;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2;
- (id)initWithOperatorType:(unsigned long long)arg1;

@end
