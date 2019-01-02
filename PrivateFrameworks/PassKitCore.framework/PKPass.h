/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {
    NSSet * _associatedPassTypeIdentifiers;
    NSString * _deviceName;
    NSSet * _embeddedBeacons;
    NSSet * _embeddedLocations;
    NSDate * _expirationDate;
    NSString * _groupingID;
    bool  _hasStoredValue;
    NSDate * _ingestedDate;
    bool  _isCloudKitArchived;
    bool  _liveRenderedBackground;
    PKLiveRenderedShaderSet * _liveRenderedShaderSet;
    NSURL * _localLocationsURL;
    NSDate * _modifiedDate;
    PKNFCPayload * _nfcPayload;
    NSString * _organizationName;
    PKImage * _partialFrontFaceImagePlaceholder;
    NSString * _passLibraryMachServiceName;
    unsigned long long  _passType;
    NSString * _passTypeIdentifier;
    NSURL * _passURL;
    NSDate * _relevantDate;
    bool  _remotePass;
    bool  _revoked;
    NSNumber * _sequenceCounter;
    NSString * _serialNumber;
    long long  _sharingMethod;
    NSString * _sharingText;
    NSURL * _sharingURL;
    NSString * _teamID;
    NSDictionary * _userInfo;
    bool  _voided;
    NSURL * _webLocationsURL;
}

@property (nonatomic, readonly) NSString *airlineCode;
@property (nonatomic, readonly) NSURL *appLaunchURL;
@property (nonatomic, copy) NSSet *associatedPassTypeIdentifiers;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, readonly) NSArray *backFieldBuckets;
@property (nonatomic, readonly) PKBarcode *barcode;
@property (nonatomic, readonly) PKImage *cardHolderPicture;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) PKPassDisplayProfile *displayProfile;
@property (nonatomic, copy) NSSet *embeddedBeacons;
@property (nonatomic, copy) NSSet *embeddedLocations;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *flightCode;
@property (nonatomic, readonly) unsigned long long flightNumber;
@property (nonatomic, readonly) PKImage *footerImage;
@property (nonatomic, readonly) PKImage *frontFaceImage;
@property (nonatomic, readonly) PKImage *frontFaceShadowImage;
@property (nonatomic, readonly) NSArray *frontFieldBuckets;
@property (nonatomic, copy) NSString *groupingID;
@property (nonatomic, readonly) bool hasFlightDetails;
@property (readonly) bool hasLogoImageSet;
@property (nonatomic) bool hasStoredValue;
@property (nonatomic, readonly, copy) UIImage *icon;
@property (nonatomic, readonly) PKImage *iconImage;
@property (nonatomic, retain) NSDate *ingestedDate;
@property (nonatomic) bool isCloudKitArchived;
@property (nonatomic, readonly) bool isPersonalizable;
@property (nonatomic) bool liveRenderedBackground;
@property (nonatomic, readonly) PKPassLiveRenderedImageSet *liveRenderedImageSet;
@property (nonatomic, readonly) PKLiveRenderedShaderSet *liveRenderedShaderSet;
@property (nonatomic, copy) NSURL *localLocationsURL;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } logoRect;
@property (nonatomic, readonly) NSString *logoText;
@property (nonatomic, readonly) NSString *lowercaseLocalizedName;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (setter=setNFCPayload:, nonatomic, copy) PKNFCPayload *nfcPayload;
@property (readonly) NSString *notificationCenterTitle;
@property (nonatomic, readonly) PKImage *notificationIconImage;
@property (readonly) NSData *npkCompleteHash;
@property (readonly) bool npkExpired;
@property (readonly) bool npkHasValidNFCPayload;
@property (readonly) bool npkSupportsHidingAccessory;
@property (readonly) PKBarcode *npkWatchBarcode;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, readonly) PKImage *partialFrontFaceImage;
@property (nonatomic, readonly) PKImage *partialFrontFaceImagePlaceholder;
@property (nonatomic, copy) NSString *passLibraryMachServiceName;
@property (nonatomic) unsigned long long passType;
@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) PKPassPersonalization *personalization;
@property (nonatomic, readonly) PKImage *personalizationLogoImage;
@property (nonatomic, readonly) NSString *pluralLocalizedName;
@property (nonatomic, copy) NSDate *relevantDate;
@property (getter=isRemotePass, nonatomic) bool remotePass;
@property (getter=isRevoked, nonatomic) bool revoked;
@property (nonatomic, copy) NSNumber *sequenceCounter;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) long long sharingMethod;
@property (nonatomic, copy) NSString *sharingText;
@property (nonatomic, copy) NSURL *sharingURL;
@property (nonatomic, readonly) bool silenceRequested;
@property (nonatomic, readonly) NSArray *storeIdentifiers;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stripRect;
@property (nonatomic, readonly) long long style;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailRect;
@property (nonatomic, readonly) long long transitType;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (getter=isVoided, nonatomic) bool voided;
@property (nonatomic, copy) NSURL *webLocationsURL;
@property (nonatomic, copy) NSURL *webServiceURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (Class)classForPassType:(unsigned long long)arg1;
+ (id)cloudStorePassRecordNamePrefix;
+ (unsigned long long)defaultSettings;
+ (bool)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (id)airlineCode;
- (id)allSemantics;
- (id)appLaunchURL;
- (id)associatedPassTypeIdentifiers;
- (bool)availableForAutomaticPresentationUsingBeaconContext;
- (bool)availableForAutomaticPresentationUsingVASContext;
- (id)backFieldBuckets;
- (id)backgroundImage;
- (id)barcode;
- (id)cardHolderPicture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmountForSemanticKey:(id)arg1;
- (id)dateForSemanticKey:(id)arg1;
- (id)deviceName;
- (id)dictionariesForSemanticKey:(id)arg1;
- (id)diff:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (id)embeddedBeacons;
- (id)embeddedLocations;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)eventType;
- (id)expirationDate;
- (id)fieldForKey:(id)arg1;
- (id)flightCode;
- (unsigned long long)flightNumber;
- (id)footerImage;
- (id)frontFaceImage;
- (id)frontFaceShadowImage;
- (id)frontFieldBuckets;
- (id)groupingID;
- (bool)hasFlightDetails;
- (bool)hasLocationRelevancyInfo;
- (bool)hasStoredValue;
- (bool)hasTimeOrLocationRelevancyInfo;
- (bool)hasValidNFCPayload;
- (id)iconImage;
- (id)ingestedDate;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isCloudKitArchived;
- (bool)isEqualToPassIncludingMetadata:(id)arg1;
- (bool)isExpired;
- (bool)isPersonalizable;
- (bool)isRelevantDateOld;
- (bool)isRemotePass;
- (bool)isRevoked;
- (bool)isUpdatable;
- (bool)isVoided;
- (unsigned long long)itemType;
- (bool)liveRenderedBackground;
- (id)liveRenderedImageSet;
- (id)liveRenderedShaderSet;
- (void)loadFlightsWithCompletionHandler:(id /* block */)arg1;
- (id)localLocationsURL;
- (id)localizedDescription;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)localizedName;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)locationForSemanticKey:(id)arg1;
- (id)logoImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logoRect;
- (id)logoText;
- (id)lowercaseLocalizedName;
- (id)modifiedDate;
- (id)nfcPayload;
- (id)notificationCenterTitle;
- (id)notificationIconImage;
- (id)numberForSemanticKey:(id)arg1;
- (id)organizationName;
- (id)partialFrontFaceImage;
- (id)partialFrontFaceImagePlaceholder;
- (id)passLibraryMachServiceName;
- (unsigned long long)passType;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)paymentPass;
- (id)personNameComponentsForSemanticKey:(id)arg1;
- (id)personalization;
- (id)personalizationLogoImage;
- (id)pluralLocalizedName;
- (id)primaryFields;
- (id)recordTypesAndNames;
- (id)relevantDate;
- (id)semantics;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setAssociatedPassTypeIdentifiers:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEmbeddedBeacons:(id)arg1;
- (void)setEmbeddedLocations:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupingID:(id)arg1;
- (void)setHasStoredValue:(bool)arg1;
- (void)setIngestedDate:(id)arg1;
- (void)setIsCloudKitArchived:(bool)arg1;
- (void)setLiveRenderedBackground:(bool)arg1;
- (void)setLocalLocationsURL:(id)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setNFCPayload:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPassLibraryMachServiceName:(id)arg1;
- (void)setPassType:(unsigned long long)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setRemotePass:(bool)arg1;
- (void)setRevoked:(bool)arg1;
- (void)setSequenceCounter:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSharingMethod:(long long)arg1;
- (void)setSharingText:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVoided:(bool)arg1;
- (void)setWebLocationsURL:(id)arg1;
- (long long)sharingMethod;
- (id)sharingText;
- (id)sharingURL;
- (bool)silenceRequested;
- (id)storeIdentifiers;
- (id)stringForSemanticKey:(id)arg1;
- (id)stringsForSemanticKey:(id)arg1;
- (id)stripImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stripRect;
- (long long)style;
- (bool)supportsSharing;
- (id)teamID;
- (id)thumbnailImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailRect;
- (long long)transitType;
- (id)userInfo;
- (id)webLocationsURL;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (void)npkClearTransitValuePendingStateIfNecessaryForPassWithID:(id)arg1 withBalance:(id)arg2;
+ (void)npkHandleTransitValuePendingAmount:(id)arg1 withBalance:(id)arg2 forPassWithID:(id)arg3;

- (bool)hasLogoImageSet;
- (long long)npkAccessoryType;
- (id)npkArchiveData;
- (id)npkCompleteHash;
- (id)npkCompleteHashForWatchOSVersion:(unsigned long long)arg1;
- (bool)npkExpired;
- (bool)npkHasValidNFCPayload;
- (bool)npkIsAddValuePending;
- (id)npkLastAddValueAmount;
- (bool)npkSupportsHidingAccessory;
- (id)npkWatchBarcode;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)_generateIcon:(id)arg1 withVariant:(int)arg2;
- (id)_icon;
- (id)icon;
- (id)mailAttachmentIcon;

@end