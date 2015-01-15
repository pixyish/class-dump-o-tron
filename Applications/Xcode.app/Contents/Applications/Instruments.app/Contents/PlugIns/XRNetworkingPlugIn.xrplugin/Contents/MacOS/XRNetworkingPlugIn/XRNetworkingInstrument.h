//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRInstrument.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "XRDeviceLogImporter.h"
#import "XRDeviceLogSupport.h"

@class DTHistogramGraph, DTXChannel, NSBox, NSDictionary, NSMutableArray, NSString, XRContext, XRNetworkActivityBrushDataSource, XRNetworkAddressFormatter;

@interface XRNetworkingInstrument : XRInstrument <XRDeviceLogImporter, XRDeviceLogSupport, NSTableViewDataSource, NSTableViewDelegate>
{
    DTXChannel *_channel;
    NSMutableArray *_tableScrollViews;
    NSMutableArray *_tableTableViews;
    XRNetworkActivityBrushDataSource *_activityBrushSource;
    XRNetworkAddressFormatter *_remoteAddrFmtr;
    XRNetworkAddressFormatter *_localAddrFmtr;
    id *_controllersByTable;
    id *_topLevelContexts;
    int _currentTable;
    BOOL _needDisplayError;
    NSString *_errorString;
    XRContext *_histogramContext;
    NSBox *_histogramContainerView;
    DTHistogramGraph *_histogramView;
    NSString *_histogramQuery;
    NSString *_histogramForID;
    NSDictionary *_sessionIfPlayingBack;
}

- (void).cxx_destruct;
- (void)importSession:(id)arg1 fromDevice:(id)arg2 intoTrace:(id)arg3;
- (id)deviceLogImporter;
- (id)stateDisplayDescription;
- (void)setErrorString:(id)arg1;
- (void)_setErrorString:(id)arg1;
- (BOOL)hasCustomStateDisplayDescription;
- (void)_receivedMessage:(id)arg1;
- (void)histogramDrillDown:(id)arg1;
- (void)generateHistogram;
- (id)selectedRunMostActiveProcesses;
- (id)selectedRunMostActiveConnections;
- (void)observeDNSCacheUpdate:(id)arg1;
- (void)reloadDetail;
- (void)updateContext:(id)arg1;
- (void)tick:(id)arg1;
- (BOOL)requiresTickNotification;
- (void)_didIngestDataAndShouldDisplay;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)selectedRunQueryResult;
- (void)selectedRunRecomputeSummaries;
- (id)dataSourceForBrushWithName:(id)arg1;
- (int)currentDetailKind;
- (int)currentTableKind;
- (void)displayContext:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)iconForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (id)contextRepresentation;
- (void)stopRecording;
- (void)startRecording;
- (void)prepareToRecord;
- (void)_commonImportOrInteractivePrepare;
- (void)dealloc;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
