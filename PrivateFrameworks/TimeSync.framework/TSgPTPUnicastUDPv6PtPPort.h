/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;

- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1 andIPv6Address:(char *)arg2;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (int)portType;

@end
