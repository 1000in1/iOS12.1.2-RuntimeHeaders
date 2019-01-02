/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAPortraitRequest_StageLight : NSObject <CVAPortraitRequest> {
    NSData * _cubeData;
    struct __CVBuffer { } * _destinationColorPixelBuffer;
    CVAMattingRequest * _mattingRequest;
    <CVAPortraitGenericRequest> * _parentGenericRequestFrom;
    <CVAPortraitGenericRequest> * _parentGenericRequestTo;
    NSData * _proxyCubeData;
    float  _stageLightIntensity;
    float  _vignetteIntensity;
}

@property (readonly) NSData *cubeData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) struct __CVBuffer { }*destinationColorPixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) CVAMattingRequest *mattingRequest;
@property (retain) <CVAPortraitGenericRequest> *parentGenericRequestFrom;
@property (retain) <CVAPortraitGenericRequest> *parentGenericRequestTo;
@property (readonly) NSData *proxyCubeData;
@property (readonly) float stageLightIntensity;
@property (readonly) Class superclass;
@property (readonly) float vignetteIntensity;

- (void).cxx_destruct;
- (id)cubeData;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationColorPixelBuffer;
- (id)initWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4 vignetteIntensity:(float)arg5 stageLightIntensity:(float)arg6;
- (id)mattingRequest;
- (id)parentGenericRequestFrom;
- (id)parentGenericRequestTo;
- (id)proxyCubeData;
- (void)setParentGenericRequestFrom:(id)arg1;
- (void)setParentGenericRequestTo:(id)arg1;
- (float)stageLightIntensity;
- (float)vignetteIntensity;

@end