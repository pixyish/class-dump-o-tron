//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MZXMLMarshalling/MZXMLMapping.h>

@class NSMutableArray, NSString;

@interface MZXMLClassMapping : MZXMLMapping
{
    NSString *_className;
    NSString *_extends;
    NSString *_type;
    NSString *_mapTo;
    NSString *_nsURI;
    NSString *_nsPrefix;
    NSMutableArray *_fields;
    BOOL _autocomplete;
    BOOL _selfFirst;
}

- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)classNameToInstantiate;
- (id)fields;
- (id)type;
- (id)nsPrefix;
- (id)nsURI;
- (id)mapTo;
- (id)extends;
- (BOOL)isSelfFirst;
- (BOOL)isAutocomplete;
- (id)className;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithXML:(id)arg1 error:(id *)arg2;
- (BOOL)processFields:(id)arg1 error:(id *)arg2;

@end

