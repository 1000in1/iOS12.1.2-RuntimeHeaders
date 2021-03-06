/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig {
    unsigned int  _framerate;
    unsigned long long  _keyFrameInterval;
    NSMutableSet * _payloads;
    long long  _resolution;
    NSMutableArray * _subStreamConfigs;
}

@property (nonatomic) unsigned int framerate;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic, readonly) NSSet *payloads;
@property (nonatomic) long long resolution;
@property (nonatomic, readonly) NSArray *subStreamConfigs;

- (void)addPayload:(int)arg1;
- (void)addSubStreamConfig:(id)arg1;
- (void)dealloc;
- (unsigned int)framerate;
- (id)init;
- (unsigned long long)keyFrameInterval;
- (id)payloads;
- (long long)resolution;
- (void)setFramerate:(unsigned int)arg1;
- (void)setKeyFrameInterval:(unsigned long long)arg1;
- (void)setResolution:(long long)arg1;
- (id)streamIds;
- (id)subStreamConfigs;

@end
