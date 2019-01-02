/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoLayoutClip : NSObject {
    unsigned long long  _altAssignedKBStyle;
    NSDictionary * _altAssignedTreatmentDict;
    int  _altAssignedTreatmentStyle;
    int  _altRequiredTreatmentStyle;
    bool  _altTransitionAssigned;
    bool  _altTreatmentApplied;
    unsigned long long  _assignedKBStyle;
    NSDictionary * _assignedTreatmentDict;
    int  _assignedTreatmentStyle;
    bool  _canSupportMultiUp;
    bool  _canSupportPrecedingTransition;
    int  _clipType;
    bool  _couldSupportNUpBase;
    int  _directionOfMovement;
    bool  _durationIsFlexible;
    int  _faceLocation;
    bool  _facesAreClose;
    bool  _isPortrait;
    bool  _isSquare;
    bool  _itemShouldHeroFeaturedPerson;
    MiroAutoEditKenBurnsController * _kbController;
    bool  _missedRollToBeats;
    MultiUpClip * _multiUpClip;
    NSArray * _multiUpPeers;
    int  _numberOfFaces;
    int  _preferredDirection;
    KonaClip * _projectClip;
    int  _requiredTreatmentStyle;
    MiroAutoLayoutClip * _selectedPeer;
    bool  _supportsHalf;
    bool  _supportsOneThird;
    bool  _supportsTwoThirds;
    bool  _transitionAssigned;
    bool  _treatmentApplied;
    bool  _zoomToPersonCandidate;
}

@property (nonatomic) unsigned long long altAssignedKBStyle;
@property (nonatomic, retain) NSDictionary *altAssignedTreatmentDict;
@property (nonatomic) int altAssignedTreatmentStyle;
@property (nonatomic) int altRequiredTreatmentStyle;
@property (nonatomic) bool altTransitionAssigned;
@property (nonatomic) bool altTreatmentApplied;
@property (nonatomic) unsigned long long assignedKBStyle;
@property (nonatomic, retain) NSDictionary *assignedTreatmentDict;
@property (nonatomic) int assignedTreatmentStyle;
@property (nonatomic) bool canSupportMultiUp;
@property (nonatomic) bool canSupportPrecedingTransition;
@property (nonatomic) int clipType;
@property (nonatomic) bool couldSupportNUpBase;
@property (nonatomic) int directionOfMovement;
@property (nonatomic) bool durationIsFlexible;
@property (nonatomic) int faceLocation;
@property (nonatomic, readonly) bool facesAreClose;
@property (nonatomic, readonly) bool isPortrait;
@property (nonatomic, readonly) bool isSquare;
@property (nonatomic) bool itemShouldHeroFeaturedPerson;
@property (nonatomic, retain) MiroAutoEditKenBurnsController *kbController;
@property (nonatomic) bool missedRollToBeats;
@property (nonatomic, retain) MultiUpClip *multiUpClip;
@property (nonatomic, retain) NSArray *multiUpPeers;
@property (nonatomic, readonly) int numberOfFaces;
@property (nonatomic) int preferredDirection;
@property (nonatomic, retain) KonaClip *projectClip;
@property (nonatomic) int requiredTreatmentStyle;
@property (nonatomic, retain) MiroAutoLayoutClip *selectedPeer;
@property (nonatomic) bool supportsHalf;
@property (nonatomic) bool supportsOneThird;
@property (nonatomic) bool supportsTwoThirds;
@property (nonatomic) bool transitionAssigned;
@property (nonatomic) bool treatmentApplied;
@property (nonatomic) bool zoomToPersonCandidate;

+ (bool)assetCanFillProjectFrame:(id)arg1;
+ (double)clipAspectRatio:(id)arg1;
+ (bool)clipIsPano:(id)arg1;
+ (bool)clipIsPortrait:(id)arg1;
+ (bool)clipIsPortraitOrSquare:(id)arg1;
+ (bool)clipIsSquare:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)altAssignedKBStyle;
- (id)altAssignedTreatmentDict;
- (int)altAssignedTreatmentStyle;
- (int)altRequiredTreatmentStyle;
- (bool)altTransitionAssigned;
- (bool)altTreatmentApplied;
- (void)applyAssignedTreatmentsFromRequired;
- (unsigned long long)assignedKBStyle;
- (id)assignedTreatmentDict;
- (int)assignedTreatmentStyle;
- (bool)canSupportMultiUp;
- (bool)canSupportPrecedingTransition;
- (bool)clipCanZoomCropforAlt:(bool)arg1;
- (int)clipType;
- (bool)couldSupportNUpBase;
- (id)description;
- (int)directionOfMovement;
- (double)distanceToLayoutClip:(id)arg1;
- (bool)durationIsFlexible;
- (void)establishCanSupportInEditMultiUp:(id)arg1;
- (void)establishCanSupportMultiUp:(id)arg1;
- (void)establishCanSupportPrecedingTransition;
- (void)establishDurationFlexibility;
- (void)establishFaceInfo:(id)arg1;
- (void)establishFacesAreClose;
- (void)establishIsPortrait;
- (void)establishIsSquare;
- (void)establishPreferredDirection;
- (void)establishProjectClipType;
- (int)establishRequiredTreatmentForAspect:(int)arg1 multiDelegate:(id)arg2 polishDelegate:(id)arg3;
- (void)establishShotType:(id)arg1;
- (int)faceLocation;
- (bool)facesAreClose;
- (bool)hasMultipleFaces;
- (bool)hasSingleFace;
- (id)initWithKonaClip:(id)arg1 multiUpDelegate:(id)arg2 polishDelegate:(id)arg3 zoomToPersonCandidate:(bool)arg4;
- (bool)isEdited;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isPano;
- (bool)isPortrait;
- (bool)isSquare;
- (bool)isTransition;
- (bool)isVideo;
- (bool)itemMatchesProjectOrientation:(int)arg1;
- (bool)itemShouldHeroFeaturedPerson;
- (id)kbController;
- (id)locationForClip;
- (bool)missedRollToBeats;
- (id)multiUpClip;
- (id)multiUpPeers;
- (int)numberOfFaces;
- (int)preferredDirection;
- (id)projectClip;
- (int)requiredTreatmentStyle;
- (id)selectedPeer;
- (void)setAltAssignedKBStyle:(unsigned long long)arg1;
- (void)setAltAssignedTreatmentDict:(id)arg1;
- (void)setAltAssignedTreatmentStyle:(int)arg1;
- (void)setAltRequiredTreatmentStyle:(int)arg1;
- (void)setAltTransitionAssigned:(bool)arg1;
- (void)setAltTreatmentApplied:(bool)arg1;
- (void)setAssignedKBStyle:(unsigned long long)arg1;
- (void)setAssignedTreatmentDict:(id)arg1;
- (void)setAssignedTreatmentStyle:(int)arg1;
- (void)setCanSupportMultiUp:(bool)arg1;
- (void)setCanSupportPrecedingTransition:(bool)arg1;
- (void)setClipType:(int)arg1;
- (void)setCouldSupportNUpBase:(bool)arg1;
- (void)setDirectionOfMovement:(int)arg1;
- (void)setDurationIsFlexible:(bool)arg1;
- (void)setFaceLocation:(int)arg1;
- (void)setItemShouldHeroFeaturedPerson:(bool)arg1;
- (void)setKbController:(id)arg1;
- (void)setMissedRollToBeats:(bool)arg1;
- (void)setMultiUpClip:(id)arg1;
- (void)setMultiUpPeers:(id)arg1;
- (void)setPreferredDirection:(int)arg1;
- (void)setProjectClip:(id)arg1;
- (void)setRequiredTreatmentStyle:(int)arg1;
- (void)setSelectedPeer:(id)arg1;
- (void)setSupportsHalf:(bool)arg1;
- (void)setSupportsOneThird:(bool)arg1;
- (void)setSupportsTwoThirds:(bool)arg1;
- (void)setTransitionAssigned:(bool)arg1;
- (void)setTreatmentApplied:(bool)arg1;
- (void)setZoomToPersonCandidate:(bool)arg1;
- (bool)supportsHalf;
- (bool)supportsOneThird;
- (bool)supportsTwoThirds;
- (bool)transitionAssigned;
- (bool)treatmentApplied;
- (bool)zoomToPersonCandidate;

@end