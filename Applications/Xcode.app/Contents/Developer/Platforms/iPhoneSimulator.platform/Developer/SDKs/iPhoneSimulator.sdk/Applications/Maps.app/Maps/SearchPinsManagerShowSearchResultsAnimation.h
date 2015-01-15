//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKMapView, SearchInfo, SearchResult;

__attribute__((visibility("hidden")))
@interface SearchPinsManagerShowSearchResultsAnimation : NSObject
{
    SearchInfo *_searchInfo;
    MKMapView *_mapView;
    _Bool _started;
    _Bool _canProceedToDropPins;
    _Bool _viewportAllowsDroppingPins;
    _Bool _hasDroppedPins;
    _Bool _cancelled;
    SearchResult *_searchResultToSelect;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)proceedWithDroppingPins:(_Bool)arg1;
- (void)_proceedWithDroppingPins;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithSearchInfo:(id)arg1 mapView:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
