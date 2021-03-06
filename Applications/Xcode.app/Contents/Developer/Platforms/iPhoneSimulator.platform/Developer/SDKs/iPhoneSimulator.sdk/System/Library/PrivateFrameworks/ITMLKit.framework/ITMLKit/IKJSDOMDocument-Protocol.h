//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class IKDOMComment, IKDOMDocument, IKDOMDocumentFragment, IKDOMElement, IKDOMImplementation, IKDOMNode, IKDOMNodeList, IKDOMText, IKJSNavigationDocument, NSArray, NSDictionary, NSString;

@protocol IKJSDOMDocument <JSExport>
@property(readonly, nonatomic) __weak IKJSNavigationDocument *navigationDocument;
@property(retain, nonatomic) NSString *documentURI;
@property(nonatomic) _Bool strictErrorChecking;
@property(retain, nonatomic) NSString *xmlVersion;
@property(nonatomic) _Bool xmlStandalone;
@property(readonly, retain, nonatomic) NSString *xmlEncoding;
@property(readonly, retain, nonatomic) NSString *inputEncoding;
@property(readonly, retain, nonatomic) IKDOMElement *documentElement;
@property(readonly, nonatomic) __weak IKDOMImplementation *implementation;
- (NSArray *)recordedImpressions;
- (NSArray *)snapshotImpressions;
- (void)scrollToTop;
- (void)runTest:(NSString *)arg1:(NSDictionary *)arg2;
- (void)replace:(IKDOMDocument *)arg1;
- (void)setNeedsUpdate;
- (IKDOMNode *)adoptNode:(IKDOMNode *)arg1;
- (IKDOMElement *)getElementById:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (IKDOMComment *)createComment:(NSString *)arg1;
- (IKDOMText *)createTextNode:(NSString *)arg1;
- (IKDOMDocumentFragment *)createDocumentFragment;
- (IKDOMElement *)createElement:(NSString *)arg1;
@end

