//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, PLPhotoEditMutableModel;

@protocol PLPhotoEditDataImporter <NSObject>
+ (NSDictionary *)debugDescriptionForPhotoEditData:(NSData *)arg1 formatIdentifier:(NSString *)arg2 formatVersion:(NSString *)arg3;
+ (_Bool)loadPhotoEditData:(NSData *)arg1 formatIdentifier:(NSString *)arg2 formatVersion:(NSString *)arg3 intoModel:(PLPhotoEditMutableModel *)arg4 baseOrientation:(long long)arg5;
+ (_Bool)canInterpretDataWithFormatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2;
@end
