/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {
    float * _inputData;
    int  _maxNumRegions;
    VCPCNNModelEspresso * _modelEspresso;
    void * _plan;
    NSString * _resConfig;
}

- (void).cxx_destruct;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (void)dealloc;
- (int)generatePetsBoxes:(id)arg1 cancel:(id /* block */)arg2;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)initWithMaxNumRegions:(int)arg1;

@end