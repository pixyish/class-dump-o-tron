//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject
{
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}

+ (id)sharedFormatter;
- (void).cxx_destruct;
- (id)stringFromHeightInCentimeters:(id)arg1;
- (double)_centimetersFromFeet:(double)arg1 inches:(double)arg2;
- (void)_getFeet:(double *)arg1 inches:(double *)arg2 fromCentimeters:(double)arg3;
- (id)_formattedValueForInches:(double)arg1;
- (id)_formattedValueForFeet:(double)arg1;
- (id)_formattedValueForCentimeters:(double)arg1;
- (_Bool)_usesImperialUnits;
- (void)_localeChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end
