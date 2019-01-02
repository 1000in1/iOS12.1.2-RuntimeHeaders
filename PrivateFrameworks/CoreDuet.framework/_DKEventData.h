/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventData : NSObject {
    NSData * _event;
    unsigned long long  _uncompressedLength;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSData *event;
@property (nonatomic, readonly) unsigned long long uncompressedLength;
@property (nonatomic, readonly) unsigned long long version;

+ (id)createFromData:(id)arg1;
+ (id)fromPBCodable:(id)arg1;

- (void).cxx_destruct;
- (id)asData;
- (id)event;
- (id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 version:(unsigned long long)arg2;
- (id)toPBCodable;
- (unsigned long long)uncompressedLength;
- (unsigned long long)version;

@end