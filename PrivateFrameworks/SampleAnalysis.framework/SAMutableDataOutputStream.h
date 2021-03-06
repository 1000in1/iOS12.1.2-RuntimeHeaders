/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAMutableDataOutputStream : SAOutputStream {
    NSMutableData * _outputData;
}

@property (nonatomic, readonly) NSMutableData *outputData;

- (void).cxx_destruct;
- (int)appendData:(id)arg1;
- (bool)hasSpaceAvailable;
- (id)initWithMutableData:(id)arg1;
- (id)outputData;
- (int)printWithFormat:(const char *)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
