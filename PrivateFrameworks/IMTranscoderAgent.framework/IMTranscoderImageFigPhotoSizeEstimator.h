/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscoderImageFigPhotoSizeEstimator : IMTranscoderImageSizeEstimator {
    struct FigPhotoDecompressionContainer { } * _container;
}

- (void)dealloc;
- (unsigned long long)estimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;
- (id)initWithURL:(id)arg1 uti:(id)arg2 imageSource:(struct CGImageSource { }*)arg3;
- (unsigned long long)optimizedEstimatedSizeForOutputUTI:(id)arg1 maximumDimension:(long long)arg2 quality:(double)arg3;

@end
