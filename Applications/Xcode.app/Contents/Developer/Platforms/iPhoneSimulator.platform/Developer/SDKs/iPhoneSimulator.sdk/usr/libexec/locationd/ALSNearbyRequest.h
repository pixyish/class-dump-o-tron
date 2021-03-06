//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

@interface ALSNearbyRequest : PBRequest
{
    long long _latitude;
    long long _longitude;
    int _numberOfSurroundingWifis;
    int _radius;
    int _technology;
    int _wifiGranularity;
    _Bool _needCellsTowers;
    struct {
        unsigned int numberOfSurroundingWifis:1;
        unsigned int radius:1;
        unsigned int technology:1;
        unsigned int wifiGranularity:1;
        unsigned int needCellsTowers:1;
    } _has;
}

@property(nonatomic) int radius; // @synthesize radius=_radius;
@property(nonatomic) int wifiGranularity; // @synthesize wifiGranularity=_wifiGranularity;
@property(nonatomic) int technology; // @synthesize technology=_technology;
@property(nonatomic) int numberOfSurroundingWifis; // @synthesize numberOfSurroundingWifis=_numberOfSurroundingWifis;
@property(nonatomic) _Bool needCellsTowers; // @synthesize needCellsTowers=_needCellsTowers;
@property(nonatomic) long long longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long latitude; // @synthesize latitude=_latitude;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) _Bool hasWifiGranularity;
@property(nonatomic) _Bool hasTechnology;
@property(nonatomic) _Bool hasNumberOfSurroundingWifis;
@property(nonatomic) _Bool hasNeedCellsTowers;
- (void)dealloc;

@end

