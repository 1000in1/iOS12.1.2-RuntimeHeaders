/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateReportAnIssue : PBCodable <NSCopying> {
    struct { 
        unsigned int personalizedAddressIndex : 1; 
    }  _has;
    unsigned int  _personalizedAddressIndex;
}

@property (nonatomic) bool hasPersonalizedAddressIndex;
@property (nonatomic) unsigned int personalizedAddressIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPersonalizedAddressIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)personalizedAddressIndex;
- (bool)readFrom:(id)arg1;
- (void)setHasPersonalizedAddressIndex:(bool)arg1;
- (void)setPersonalizedAddressIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
