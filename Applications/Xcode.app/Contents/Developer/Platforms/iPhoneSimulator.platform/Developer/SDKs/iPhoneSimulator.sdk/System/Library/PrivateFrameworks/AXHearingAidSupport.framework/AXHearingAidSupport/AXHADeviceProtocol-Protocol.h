//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXHearingAidMode, NSArray, NSDate, NSDictionary, NSIndexSet, NSString;

@protocol AXHADeviceProtocol <NSObject>
@property(readonly, retain, nonatomic) NSString *deviceUUID;
@property(readonly, retain, nonatomic) AXHearingAidMode *rightSelectedProgram;
@property(readonly, retain, nonatomic) AXHearingAidMode *leftSelectedProgram;
@property(readonly, copy, nonatomic) NSArray *leftPrograms;
@property(readonly, copy, nonatomic) NSArray *rightPrograms;
@property(readonly, retain, nonatomic) NSDate *rightBatteryLowDate;
@property(readonly, retain, nonatomic) NSDate *leftBatteryLowDate;
@property(readonly, nonatomic) double leftBatteryLevel;
@property(readonly, nonatomic) double rightBatteryLevel;
@property(nonatomic) double leftStreamVolume;
@property(nonatomic) double rightStreamVolume;
@property(nonatomic) double leftMicrophoneVolume;
@property(nonatomic) double rightMicrophoneVolume;
@property(readonly, retain, nonatomic) NSString *rightPeripheralUUID;
@property(readonly, retain, nonatomic) NSString *leftPeripheralUUID;
@property(readonly, retain, nonatomic) NSString *leftUUID;
@property(readonly, retain, nonatomic) NSString *rightUUID;
@property(nonatomic) int availableEars;
@property(readonly, retain, nonatomic) NSString *rightHardwareVersion;
@property(readonly, retain, nonatomic) NSString *leftHardwareVersion;
@property(readonly, retain, nonatomic) NSString *rightFirmwareVersion;
@property(readonly, retain, nonatomic) NSString *leftFirmwareVersion;
@property(readonly, retain, nonatomic) NSString *model;
@property(readonly, retain, nonatomic) NSString *manufacturer;
@property(readonly, retain, nonatomic) NSString *name;
@property(nonatomic) _Bool keepInSync;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, nonatomic) _Bool isPaired;
- (id)valueForProperty:(long long)arg1;
- (void)setValue:(id)arg1 forProperty:(long long)arg2;
- (NSIndexSet *)selectedProgramIndexes;
- (NSArray *)selectedPrograms;
- (void)selectProgram:(AXHearingAidMode *)arg1;
- (NSArray *)programs;
- (void)loadRequiredProperties;
- (_Bool)didLoadRequiredProperties;
- (_Bool)didLoadBasicProperties;
- (_Bool)containsPeripheralWithUUID:(NSString *)arg1;
- (_Bool)hasConnection;
- (_Bool)isConnected;
- (_Bool)rightAvailable;
- (_Bool)leftAvailable;
- (void)disconnect;
- (void)connect;
- (id)initWithPersistentRepresentation:(NSDictionary *)arg1;
@end

