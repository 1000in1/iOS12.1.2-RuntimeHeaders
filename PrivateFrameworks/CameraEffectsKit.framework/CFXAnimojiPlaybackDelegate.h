/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXAnimojiPlaybackDelegate : NSObject <PVCompositeDelegate> {
    CFXAnimojiEffectRenderer * _animojiRenderer;
    AVAssetReaderOutputMetadataAdaptor * _assetReaderOutputMetadataAdaptor;
    AVAsset * _assetWithDepthVideoTrack;
    PVCMSampleBuffer * _currentDepthSample;
    AVMetadataItem * _currentMetadataItem;
    AVAssetReader * _depthVideoAssetReader;
    AVAssetTrack * _depthVideoTrack;
    AVAssetReaderTrackOutput * _depthVideoTrackReaderOutput;
    AVAssetReader * _metadataAssetReader;
    AVAssetTrack * _metadataAssetTrack;
    AVAssetReaderTrackOutput * _metadataTrackReaderOutput;
    PVCMSampleBuffer * _nextDepthSample;
    AVMetadataItem * _nextMetadataItem;
    ARFrame * _stillImageARFrame;
}

@property (nonatomic, retain) CFXAnimojiEffectRenderer *animojiRenderer;
@property (nonatomic, retain) AVAssetReaderOutputMetadataAdaptor *assetReaderOutputMetadataAdaptor;
@property (nonatomic, retain) AVAsset *assetWithDepthVideoTrack;
@property (nonatomic, retain) PVCMSampleBuffer *currentDepthSample;
@property (nonatomic, retain) AVMetadataItem *currentMetadataItem;
@property (nonatomic, retain) AVAssetReader *depthVideoAssetReader;
@property (nonatomic, retain) AVAssetTrack *depthVideoTrack;
@property (nonatomic, retain) AVAssetReaderTrackOutput *depthVideoTrackReaderOutput;
@property (nonatomic, retain) AVAssetReader *metadataAssetReader;
@property (nonatomic, retain) AVAssetTrack *metadataAssetTrack;
@property (nonatomic, retain) AVAssetReaderTrackOutput *metadataTrackReaderOutput;
@property (nonatomic, retain) PVCMSampleBuffer *nextDepthSample;
@property (nonatomic, retain) AVMetadataItem *nextMetadataItem;
@property (nonatomic, retain) ARFrame *stillImageARFrame;

- (void).cxx_destruct;
- (id)CFX_ARFrameForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 depthTexture:(id*)arg2;
- (void)CFX_setUpDepthReaderForTrack:(id)arg1;
- (void)CFX_setUpMetadataReaderForTrack:(id)arg1;
- (void)CFX_updateCurrentDepthBufferForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)CFX_updateCurrentMetadataItemForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)animojiRenderer;
- (id)assetReaderOutputMetadataAdaptor;
- (id)assetWithDepthVideoTrack;
- (id)currentDepthSample;
- (id)currentMetadataItem;
- (id)depthVideoAssetReader;
- (id)depthVideoTrack;
- (id)depthVideoTrackReaderOutput;
- (id)initWithAssetURL:(id)arg1;
- (id)initWithImageARFrame:(id)arg1;
- (id)metadataAssetReader;
- (id)metadataAssetTrack;
- (id)metadataTrackReaderOutput;
- (id)nextDepthSample;
- (id)nextMetadataItem;
- (id)renderWithInputs:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3;
- (void)setAnimojiRenderer:(id)arg1;
- (void)setAssetReaderOutputMetadataAdaptor:(id)arg1;
- (void)setAssetWithDepthVideoTrack:(id)arg1;
- (void)setCurrentDepthSample:(id)arg1;
- (void)setCurrentMetadataItem:(id)arg1;
- (void)setDepthVideoAssetReader:(id)arg1;
- (void)setDepthVideoTrack:(id)arg1;
- (void)setDepthVideoTrackReaderOutput:(id)arg1;
- (void)setMetadataAssetReader:(id)arg1;
- (void)setMetadataAssetTrack:(id)arg1;
- (void)setMetadataTrackReaderOutput:(id)arg1;
- (void)setNextDepthSample:(id)arg1;
- (void)setNextMetadataItem:(id)arg1;
- (void)setStillImageARFrame:(id)arg1;
- (id)stillImageARFrame;

@end