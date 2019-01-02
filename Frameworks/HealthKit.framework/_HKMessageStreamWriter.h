/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKMessageStreamWriter : NSObject <NSStreamDelegate> {
    unsigned long long  _bufferSize;
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _currentCompletion;
    NSData * _currentStreamData;
    unsigned long long  _currentStreamDataOffset;
    bool  _finished;
    bool  _hasWrittenStreamVersion;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
    NSMutableArray * _pendingStreamOperationBlocks;
    NSError * _streamError;
    NSObject<OS_dispatch_queue> * _streamQueue;
    bool  _willFinish;
}

@property (readonly) unsigned long long bufferSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSInputStream *inputStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_streamQueue_closeStream;
- (void)_streamQueue_finishCurrentMessageWithError:(id)arg1;
- (void)_streamQueue_handlePendingOperations;
- (void)_streamQueue_setCurrentMessageData:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (void)finish;
- (id)init;
- (id)initWithBufferSize:(unsigned long long)arg1;
- (id)initWithOutputStream:(id)arg1;
- (id)inputStream;
- (void)invalidate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeMessageData:(id)arg1 completion:(id /* block */)arg2;

@end