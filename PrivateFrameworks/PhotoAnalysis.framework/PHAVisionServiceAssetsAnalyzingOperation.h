/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation {
    <PHAVisionServiceAssetsAnalyzingOperationDelegate> * _delegate;
    NSObject<OS_dispatch_semaphore> * _executionCompletionSemaphore;
    PHAAnalysisWorkerJob * _job;
    int  _state;
    PHAVisionServiceWorker * _visionServiceWorker;
}

+ (id)operationForVisionServiceWorker:(id)arg1 job:(id)arg2;

- (void).cxx_destruct;
- (void)cancelAndWaitForCompletion;
- (id)delegate;
- (id)initWithVisionServiceWorker:(id)arg1 job:(id)arg2;
- (id)job;
- (void)main;
- (void)setDelegate:(id)arg1;
- (id)visionServiceWorker;

@end