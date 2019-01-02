/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKServerConfiguration : NSObject <NSSecureCoding> {
    unsigned int  _applicationSDKVersion;
    NSString * _debugIdentifier;
    HKProfileIdentifier * _profileIdentifier;
}

@property (nonatomic) unsigned int applicationSDKVersion;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, copy) HKProfileIdentifier *profileIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)applicationSDKVersion;
- (id)debugIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)profileIdentifier;
- (void)setApplicationSDKVersion:(unsigned int)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;

@end