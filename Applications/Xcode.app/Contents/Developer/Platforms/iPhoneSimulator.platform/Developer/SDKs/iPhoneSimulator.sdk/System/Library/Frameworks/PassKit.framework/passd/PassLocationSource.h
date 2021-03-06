//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PassLocationSource : SQLiteEntity
{
}

+ (id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 locationSourcePID:(unsigned long long)arg3;
+ (id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2;
+ (id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2;
+ (id)locationSourcePIDPredicate:(id)arg1;
+ (id)passPIDPredicate:(unsigned long long)arg1;
+ (id)insertPassLocationSourceWithPass:(id)arg1 locationSource:(id)arg2 inDatabase:(id)arg3;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databaseTable;
- (_Bool)deleteFromDatabase;
- (id)initWithPassPID:(unsigned long long)arg1 locationSourcePID:(unsigned long long)arg2 inDatabase:(id)arg3;

@end

