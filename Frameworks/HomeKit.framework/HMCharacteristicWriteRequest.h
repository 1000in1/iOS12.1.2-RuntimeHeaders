/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest {
    id  _value;
}

@property (nonatomic, readonly) id value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
