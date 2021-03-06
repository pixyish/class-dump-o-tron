//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDSStyle, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDBGAbstractSlide : NSObject
{
    GQDSStylesheet *mStylesheet;
    GQDSStyle *mSlideStyle;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    _Bool mHidden;
    char *mID;
    _Bool mCallGenerator;
}

- (int)readAttributesForSlide:(struct _xmlTextReader *)arg1;
- (char *)ID;
- (_Bool)isHidden;
- (id)stylesheet;
- (id)slideStyle;
- (void)dealloc;

@end

