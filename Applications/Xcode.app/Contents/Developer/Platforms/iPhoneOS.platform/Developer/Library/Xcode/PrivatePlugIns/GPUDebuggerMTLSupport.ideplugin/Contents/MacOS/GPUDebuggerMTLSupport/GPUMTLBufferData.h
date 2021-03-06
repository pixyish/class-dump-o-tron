//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLBufferData : NSObject
{
    unsigned int _fractionDigits;
    BOOL _showAsHex;
    int _dataOffset;
    int _subcomponentOffset;
    unsigned int _format;
    int _stride;
    NSData *_data;
    NSString *_name;
}

+ (id)maxLengthStringForFormat:(unsigned int)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int stride; // @synthesize stride=_stride;
@property(nonatomic) BOOL showAsHex; // @synthesize showAsHex=_showAsHex;
@property(nonatomic) unsigned int format; // @synthesize format=_format;
@property(nonatomic) int subcomponentOffset; // @synthesize subcomponentOffset=_subcomponentOffset;
@property(nonatomic) int dataOffset; // @synthesize dataOffset=_dataOffset;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)formattedDataAtIndex:(int)arg1;
- (id)dataAtIndex:(int)arg1;
@property(readonly, nonatomic) int bufferLength;
- (id)initWithData:(id)arg1;
- (id)init;

@end

