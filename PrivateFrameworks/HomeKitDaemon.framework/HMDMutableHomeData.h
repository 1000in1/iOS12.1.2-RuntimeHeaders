/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>

@property (nonatomic, copy) NSArray *UUIDsOfRemovedHomes;
@property (nonatomic) bool accessAllowedWhenLocked;
@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic, retain) HMDAccount *account;
@property (nonatomic, copy) HMDApplicationData *applicationData;
@property (nonatomic) unsigned long long assistantGenerationCounter;
@property (nonatomic, copy) NSArray *cloudZones;
@property (nonatomic, copy) NSString *currentDevice;
@property (nonatomic, copy) NSUUID *dataTag;
@property (nonatomic) long long dataVersion;
@property (nonatomic, copy) NSDictionary *demoAccessories;
@property (nonatomic) bool demoFinalized;
@property (nonatomic, copy) NSArray *homes;
@property (nonatomic, copy) NSArray *incomingInvitations;
@property (nonatomic, copy) NSUUID *lastCurrentHomeUUID;
@property (nonatomic, copy) NSArray *pendingReasonSaved;
@property (nonatomic, copy) NSArray *pendingUserManagementOperations;
@property (nonatomic, copy) NSUUID *primaryHomeUUID;
@property (nonatomic, copy) NSArray *remoteAccounts;
@property (nonatomic) long long residentEnabledState;
@property (nonatomic) long long schemaVersion;
@property (nonatomic, copy) NSArray *unprocessedOperationIdentifiers;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccessAllowedWhenLocked:(bool)arg1;
- (void)setAccessories:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setAssistantGenerationCounter:(unsigned long long)arg1;
- (void)setCloudZones:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setDataTag:(id)arg1;
- (void)setDataVersion:(long long)arg1;
- (void)setDemoAccessories:(id)arg1;
- (void)setDemoFinalized:(bool)arg1;
- (void)setHomes:(id)arg1;
- (void)setIncomingInvitations:(id)arg1;
- (void)setLastCurrentHomeUUID:(id)arg1;
- (void)setPendingReasonSaved:(id)arg1;
- (void)setPendingUserManagementOperations:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setRemoteAccounts:(id)arg1;
- (void)setResidentEnabledState:(long long)arg1;
- (void)setSchemaVersion:(long long)arg1;
- (void)setUUIDsOfRemovedHomes:(id)arg1;
- (void)setUnprocessedOperationIdentifiers:(id)arg1;

@end