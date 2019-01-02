/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandMessageProtobuf * _protobuf;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

+ (id)messageWithCommand:(unsigned int)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned int)command;
- (id)initWithCommand:(unsigned int)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4;
- (id)initWithProtobufData:(id)arg1;
- (id)options;
- (id)originIdentifier;
- (id)protobufData;
- (id)serializationDate;

@end