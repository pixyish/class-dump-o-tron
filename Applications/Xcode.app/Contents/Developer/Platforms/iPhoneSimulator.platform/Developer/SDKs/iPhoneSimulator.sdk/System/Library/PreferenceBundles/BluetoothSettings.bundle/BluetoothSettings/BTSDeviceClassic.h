//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BluetoothSettings/BTSDevice.h>

@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice
{
    BluetoothDevice *_device;
}

+ (id)deviceWithDevice:(id)arg1;
@property(readonly, nonatomic) BluetoothDevice *device; // @synthesize device=_device;
- (void)unpair;
- (void)disconnect;
- (_Bool)connect;
- (_Bool)isMyDevice;
- (_Bool)isHealthDevice;
- (id)classicDevice;
- (_Bool)cloudPaired;
- (_Bool)paired;
- (_Bool)connected;
- (id)name;
- (id)identifier;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end
