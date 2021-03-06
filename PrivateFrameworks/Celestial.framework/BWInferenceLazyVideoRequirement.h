/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {
    NSString * _preparedByAttachedMediaKey;
    id /* block */  _videoFormatProvider;
}

@property (nonatomic, readonly, copy) NSString *preparedByAttachedMediaKey;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAttachedMediaKey:(id)arg1;
- (id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(id /* block */)arg3;
- (id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2;
- (id)initWithLazyVideoRequirement:(id)arg1;
- (int)prepareForInputVideoFormat:(id)arg1;
- (id)preparedByAttachedMediaKey;

@end
