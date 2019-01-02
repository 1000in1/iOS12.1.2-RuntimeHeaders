/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPUsageSinceLookback : PBCodable <NSSecureCoding, _CPUsageSinceLookback> {
    int  _client;
    long long  _collectionEndTimestamp;
    long long  _collectionStartTimestamp;
    int  _configuredLookbackTimeInDays;
    _CPDeviceContext * _context;
    int  _totalUsagesInCollectionPeriod;
}

@property (nonatomic) int client;
@property (nonatomic) long long collectionEndTimestamp;
@property (nonatomic) long long collectionStartTimestamp;
@property (nonatomic) int configuredLookbackTimeInDays;
@property (nonatomic, retain) _CPDeviceContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) int totalUsagesInCollectionPeriod;

- (void).cxx_destruct;
- (int)client;
- (long long)collectionEndTimestamp;
- (long long)collectionStartTimestamp;
- (int)configuredLookbackTimeInDays;
- (id)context;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setClient:(int)arg1;
- (void)setCollectionEndTimestamp:(long long)arg1;
- (void)setCollectionStartTimestamp:(long long)arg1;
- (void)setConfiguredLookbackTimeInDays:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setTotalUsagesInCollectionPeriod:(int)arg1;
- (int)totalUsagesInCollectionPeriod;
- (void)writeTo:(id)arg1;

@end