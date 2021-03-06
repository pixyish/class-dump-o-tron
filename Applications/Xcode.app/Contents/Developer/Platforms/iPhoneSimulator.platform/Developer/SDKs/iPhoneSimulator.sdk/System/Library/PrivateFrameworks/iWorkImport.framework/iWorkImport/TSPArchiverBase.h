//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, TSPObject;

__attribute__((visibility("hidden")))
@interface TSPArchiverBase : NSObject
{
    TSPObject *_object;
    auto_ptr_4370f086 _message;
    unsigned long long _messageVersion;
    struct hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>>> *_fieldRules;
    struct FieldPath *_currentFieldPath;
    NSHashTable *_strongReferences;
    NSHashTable *_weakReferences;
    NSHashTable *_commandToModelReferences;
    NSHashTable *_lazyReferences;
    NSHashTable *_dataReferences;
}

@property(readonly, nonatomic) NSHashTable *dataReferences; // @synthesize dataReferences=_dataReferences;
@property(readonly, nonatomic) NSHashTable *lazyReferences; // @synthesize lazyReferences=_lazyReferences;
@property(readonly, nonatomic) NSHashTable *commandToModelReferences; // @synthesize commandToModelReferences=_commandToModelReferences;
@property(readonly, nonatomic) NSHashTable *weakReferences; // @synthesize weakReferences=_weakReferences;
@property(readonly, nonatomic) NSHashTable *strongReferences; // @synthesize strongReferences=_strongReferences;
@property(nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
@property(readonly, nonatomic) TSPObject *object; // @synthesize object=_object;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateRulesUsingBlock:(CDUnknownBlockType)arg1;
- (void)scopedRulesForField:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setRule:(int)arg1 forFieldPath:(int *)arg2;
- (void)setIgnoreAndDropRuleForFieldPath:(int *)arg1;
- (void)setIgnoreAndDropRuleForField:(int)arg1;
- (void)setIgnoreAndPreserveRuleForFieldPath:(int *)arg1;
- (void)setIgnoreAndPreserveRuleForField:(int)arg1;
- (void)setMustUnderstandRuleForFieldPath:(int *)arg1;
- (void)setMustUnderstandRuleForField:(int)arg1;
- (void)cleanup;
- (void)setDataReferenceArray:(id)arg1 message:(RepeatedPtrField_5fb0b506 *)arg2;
- (void)setDataReference:(id)arg1 message:(struct DataReference *)arg2;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongLazyReferenceArray:(id)arg1 message:(RepeatedPtrField_a0d2dbe7 *)arg2;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setWeakReferenceArray:(id)arg1 message:(RepeatedPtrField_a0d2dbe7 *)arg2;
- (void)setStrongReferenceArray:(id)arg1 message:(RepeatedPtrField_a0d2dbe7 *)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference *)arg2;
@property(readonly, nonatomic) _Bool forPasteboard;
- (void)releaseMessage;
- (struct Message *)messageWithNewFunction:(CDUnknownFunctionPointerType)arg1;
- (struct Message *)message;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

