/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REValueRuleCondition : RECondition {
    bool  _allowsEmptyValueForFeature;
    REFeature * _feature;
    long long  _relation;
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) float floatValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1;
- (id)_dependentFeatures;
- (id)_featureValue;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)feature;
- (float)floatValue;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(id)arg3 type:(unsigned long long)arg4;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (long long)relation;
- (id)stringValue;
- (unsigned long long)type;
- (id)value;

@end