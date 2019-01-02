/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterSource : NSObject {
    unsigned int  _controlUnit;
    NSURLRequest * _currentRequest;
    NSURLResponse * _currentResponse;
    long long  _direction;
    NWPathEvaluator * _evaluator;
    bool  _expectRemediation;
    NSUUID * _flowUUID;
    unsigned long long  _lastPendingDataStartIndex;
    unsigned long long  _lastSendDataLength;
    NSString * _organization;
    NSURL * _parentURL;
    unsigned long long  _passLength;
    unsigned long long  _peekIndex;
    NSMutableData * _pendingData;
    unsigned long long  _pendingDataStartIndex;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registered;
    NSString * _remediationButtonText;
    NSString * _remediationURL;
    unsigned long long  _socketIdentifier;
    NSString * _sourceAppIdentifier;
    int  _sourceAppPid;
    long long  _status;
    NSURL * _url;
    NSString * _urlAppendString;
}

@property unsigned int controlUnit;
@property (retain) NSURLRequest *currentRequest;
@property (retain) NSURLResponse *currentResponse;
@property (readonly) long long direction;
@property (retain) NWPathEvaluator *evaluator;
@property bool expectRemediation;
@property (retain) NSUUID *flowUUID;
@property unsigned long long lastPendingDataStartIndex;
@property unsigned long long lastSendDataLength;
@property (retain) NSString *organization;
@property (retain) NSURL *parentURL;
@property unsigned long long passLength;
@property unsigned long long peekIndex;
@property (retain) NSMutableData *pendingData;
@property unsigned long long pendingDataStartIndex;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property bool registered;
@property (retain) NSString *remediationButtonText;
@property (retain) NSString *remediationURL;
@property (readonly) unsigned long long socketIdentifier;
@property (copy) NSString *sourceAppIdentifier;
@property int sourceAppPid;
@property (readonly) long long status;
@property (retain) NSURL *url;
@property (retain) NSString *urlAppendString;

+ (void)connectToFilterUnit:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)filterRequired;

- (void).cxx_destruct;
- (void)addData:(id)arg1 withCompletionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned int)controlUnit;
- (id)currentRequest;
- (id)currentResponse;
- (void)dataCompleteWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)direction;
- (id)evaluator;
- (bool)expectRemediation;
- (id)filterOptions;
- (void)finishedLoadingWithDecisionHandler:(id /* block */)arg1;
- (id)flowUUID;
- (id)initWithDecisionQueue:(id)arg1;
- (id)initWithParentURL:(id)arg1 decisionQueue:(id)arg2;
- (id)initWithURL:(id)arg1 direction:(long long)arg2 socketIdentifier:(unsigned long long)arg3;
- (unsigned long long)lastPendingDataStartIndex;
- (unsigned long long)lastSendDataLength;
- (id)mergeURLString:(id)arg1 withAppendString:(id)arg2;
- (id)organization;
- (id)parentURL;
- (unsigned long long)passLength;
- (unsigned long long)peekIndex;
- (id)pendingData;
- (unsigned long long)pendingDataStartIndex;
- (void)prepareAgentForRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)prepareAgentForResponse:(id)arg1 handler:(id /* block */)arg2;
- (void)prepareAgentForURL:(id)arg1 urlRequest:(id)arg2 urlResponse:(id)arg3 parentURL:(id)arg4 direction:(long long)arg5 flowUUID:(id)arg6 handler:(id /* block */)arg7;
- (void)prepareAgentWithHandler:(id /* block */)arg1;
- (id)queue;
- (void)receivedData:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)receivedResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
- (bool)registered;
- (void)remediateWithDecisionHandler:(id /* block */)arg1;
- (id)remediationButtonText;
- (id)remediationURL;
- (id)replacementData;
- (bool)sendDataToPluginWithConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setControlUnit:(unsigned int)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setCurrentResponse:(id)arg1;
- (void)setEvaluator:(id)arg1;
- (void)setExpectRemediation:(bool)arg1;
- (void)setFlowUUID:(id)arg1;
- (void)setLastPendingDataStartIndex:(unsigned long long)arg1;
- (void)setLastSendDataLength:(unsigned long long)arg1;
- (void)setOrganization:(id)arg1;
- (void)setParentURL:(id)arg1;
- (void)setPassLength:(unsigned long long)arg1;
- (void)setPeekIndex:(unsigned long long)arg1;
- (void)setPendingData:(id)arg1;
- (void)setPendingDataStartIndex:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setRemediationButtonText:(id)arg1;
- (void)setRemediationURL:(id)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setSourceAppPid:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlAppendString:(id)arg1;
- (unsigned long long)socketIdentifier;
- (id)sourceAppIdentifier;
- (int)sourceAppPid;
- (long long)status;
- (id)url;
- (id)urlAppendString;
- (void)willSendRequest:(id)arg1 decisionHandler:(id /* block */)arg2;

@end