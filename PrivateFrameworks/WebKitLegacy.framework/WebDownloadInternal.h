/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {
    id  realDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)download:(id)arg1 didCreateDestination:(id)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)download:(id)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(id)arg1 didReceiveResponse:(id)arg2;
- (bool)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)downloadDidBegin:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setRealDelegate:(id)arg1;

@end