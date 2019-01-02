/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerController : UIResponder {
    long long  _actionAtItemEnd;
    long long  _allowsIdleSleepPreventionCount;
    AVAsset * _assetBeingPrepared;
    NSObject<OS_dispatch_queue> * _assetInspectionQueue;
    bool  _atMaxTime;
    bool  _atMinTime;
    NSArray * _audioMediaSelectionOptions;
    NSArray * _availableMetadataFormats;
    long long  _canUseNetworkResourcesForLiveStreamingWhilePausedCount;
    bool  _compatibleWithAirPlayVideo;
    bool  _composable;
    NSArray * _contentChapters;
    AVAsset * _currentAssetIfReady;
    bool  _deviceBatteryChargingOrFull;
    bool  _deviceBatteryMonitoringWasEnabled;
    id  _deviceBatteryStateDidChangeObserver;
    bool  _didPreventSleepWhenStartingExternalPlayback;
    bool  _disablingAutomaticTermination;
    bool  _forceScanning;
    bool  _handlesAudioSessionInterruptions;
    bool  _hasProtectedContent;
    bool  _ignoreRateKeyValueChange;
    bool  _inspectionSuspended;
    bool  _isResumed;
    bool  _isScanningBackward;
    bool  _isScanningForward;
    bool  _jKeyDown;
    bool  _kKeyDown;
    bool  _lKeyDown;
    NSArray * _legibleMediaSelectionOptions;
    bool  _liveStreamEventModePossible;
    AVValueTiming * _liveStreamMaxTiming;
    AVValueTiming * _liveStreamMinTiming;
    bool  _looping;
    AVValueTiming * _maxTiming;
    NSDictionary * _metadata;
    AVValueTiming * _minTiming;
    AVObservationController * _observationController;
    void * _observationInfo;
    bool  _pendingSeek;
    bool  _pictureInPictureInterrupted;
    bool  _pictureInPictureSupported;
    AVPlayer * _player;
    bool  _playingOnSecondScreen;
    double  _preScanningRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _presentationSize;
    bool  _preventingIdleDisplaySleep;
    bool  _preventingIdleSystemSleep;
    bool  _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;
    float  _rate;
    double  _rateBeforeForceScanning;
    double  _rateBeforeScrubBegan;
    NSNumber * _rateToRestoreAfterAudioSessionInterruptionEnds;
    id /* block */  _retryPlayingImmediatelyBlock;
    long long  _savedCaptionAppearanceDisplayType;
    unsigned long long  _scanningCount;
    bool  _scrubbing;
    NSObject<OS_dispatch_queue> * _seekQueue;
    NSObject<OS_dispatch_source> * _seekTimer;
    double  _seekToTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekToTimeInternal;
    bool  _seeking;
    bool  _seekingInternal;
    bool  _shouldPlayImmediately;
    bool  _shouldPlayWhenLikelyToKeepUp;
    double  _timeOfLastUpdate;
    AVValueTiming * _timing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _toleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _toleranceBefore;
    id  _updateAtMinMaxTimePeriodicObserverToken;
}

@property (nonatomic, retain) AVAsset *assetBeingPrepared;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetInspectionQueue;
@property (getter=isAtMaxTime, nonatomic) bool atMaxTime;
@property (getter=isAtMinTime, nonatomic) bool atMinTime;
@property (nonatomic, retain) NSArray *availableMetadataFormats;
@property (getter=isCompatibleWithAirPlayVideo, nonatomic) bool compatibleWithAirPlayVideo;
@property (getter=isComposable, nonatomic) bool composable;
@property (nonatomic, retain) NSArray *contentChapters;
@property (nonatomic, retain) AVAsset *currentAssetIfReady;
@property (nonatomic, readonly) NSDate *currentDate;
@property (getter=isDeviceBatteryChargingOrFull, nonatomic) bool deviceBatteryChargingOrFull;
@property (getter=isDisablingAutomaticTermination, nonatomic) bool disablingAutomaticTermination;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) bool handlesAudioSessionInterruptions;
@property (nonatomic) bool hasProtectedContent;
@property (nonatomic, retain) AVValueTiming *maxTiming;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumVideoResolution;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) AVValueTiming *minTiming;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (getter=isPictureInPictureSupported, nonatomic) bool pictureInPictureSupported;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic) struct CGSize { double x1; double x2; } presentationSize;
@property (getter=isPreventingIdleDisplaySleep, nonatomic) bool preventingIdleDisplaySleep;
@property (getter=isPreventingIdleSystemSleep, nonatomic) bool preventingIdleSystemSleep;
@property (nonatomic) double rateBeforeScrubBegan;
@property (getter=isReadyToPlay, nonatomic, readonly) bool readyToPlay;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *seekTimer;
@property (nonatomic) double seekToTime;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } seekToTimeInternal;
@property (getter=isSeeking, nonatomic) bool seeking;
@property (getter=isSeekingInternal) bool seekingInternal;
@property (nonatomic, readonly) bool shouldPreventIdleDisplaySleep;
@property (nonatomic, readonly) long long status;
@property (nonatomic, retain) AVValueTiming *timing;
@property (nonatomic, readonly) bool usesExternalPlaybackWhileExternalScreenIsActive;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingHasVideo;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMaximumVideoResolution;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingPreferredDisplayCriteria;
+ (id)keyPathsForValuesAffectingReadyToPlay;
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingStreaming;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;

- (void).cxx_destruct;
- (void)_cancelPendingSeeksIfNeeded;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (void)_enableAutoMediaSelection:(id)arg1;
- (void)_handleSeekTimerEvent;
- (bool)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (bool)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (id)_optionsForGroup:(id)arg1;
- (void)_prepareAssetForInspectionIfNeeded;
- (id)_queuePlayer;
- (void)_retryPlayImmediatelyIfNeeded;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)_setMinTiming:(id)arg1 maxTiming:(id)arg2;
- (void)_updateScanningBackwardRate;
- (void)_updateScanningForwardRate;
- (void)actuallySeekToTime;
- (bool)allowsExternalPlayback;
- (bool)allowsIdleSleepPrevention;
- (id)assetBeingPrepared;
- (id)assetInspectionQueue;
- (id)audioMediaSelectionOptions;
- (id)audioOptions;
- (void)autoplay:(id)arg1;
- (id)availableMetadataFormats;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing;
- (void)beginScrubbing:(id)arg1;
- (bool)canPause;
- (bool)canPlay;
- (bool)canPlayImmediately;
- (bool)canScanBackward;
- (bool)canScanForward;
- (bool)canSeek;
- (bool)canSeekChapterBackward;
- (bool)canSeekChapterForward;
- (bool)canSeekFrameBackward;
- (bool)canSeekFrameForward;
- (bool)canSeekToBeginning;
- (bool)canSeekToEnd;
- (bool)canTogglePlayback;
- (bool)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (id)contentChapters;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAssetIfReady;
- (id)currentAudioMediaSelectionOption;
- (id)currentDate;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)decreaseVolume:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing;
- (void)endScrubbing:(id)arg1;
- (id)error;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (bool)handlesAudioSessionInterruptions;
- (bool)hasAudioMediaSelectionOptions;
- (bool)hasContent;
- (bool)hasContentChapters;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasLegibleMediaSelectionOptions;
- (bool)hasLiveStreamingContent;
- (bool)hasMediaSelectionOptions;
- (bool)hasProtectedContent;
- (bool)hasSeekableLiveStreamingContent;
- (bool)hasShareableContent;
- (bool)hasTrimmableContent;
- (bool)hasVideo;
- (void)increaseVolume:(id)arg1;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (bool)isAtMaxTime;
- (bool)isAtMinTime;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompletelySeekable;
- (bool)isComposable;
- (bool)isDeviceBatteryChargingOrFull;
- (bool)isDisablingAutomaticTermination;
- (bool)isExternalPlaybackActive;
- (bool)isInspectionSuspended;
- (bool)isLooping;
- (bool)isMuted;
- (bool)isPictureInPictureInterrupted;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSupported;
- (bool)isPlaying;
- (bool)isPlayingOnExternalScreen;
- (bool)isPlayingOnSecondScreen;
- (bool)isPreventingIdleDisplaySleep;
- (bool)isPreventingIdleSystemSleep;
- (bool)isReadyToPlay;
- (bool)isScrubbing;
- (bool)isSeeking;
- (bool)isSeekingInternal;
- (bool)isStreaming;
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
- (id)legibleMediaSelectionOptions;
- (id)legibleOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)maxTiming;
- (struct CGSize { double x1; double x2; })maximumVideoResolution;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)metadata;
- (double)minTime;
- (id)minTiming;
- (float)nominalFrameRate;
- (id)observationController;
- (void*)observationInfo;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (id)preferredDisplayCriteria;
- (struct CGSize { double x1; double x2; })presentationSize;
- (double)rate;
- (double)rateBeforeScrubBegan;
- (void)reloadAudioOptions;
- (void)reloadLegibleOptions;
- (void)reloadOptions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (long long)savedCaptionAppearanceDisplayType;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (id)scanningDelays;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (void)seekFrameForward:(id)arg1;
- (void)seekOrStepByFrameCount:(long long)arg1;
- (id)seekTimer;
- (void)seekToBeginning:(id)arg1;
- (void)seekToCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToChapter:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (double)seekToTime;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekToTimeInternal;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAssetBeingPrepared:(id)arg1;
- (void)setAssetInspectionQueue:(id)arg1;
- (void)setAtMaxTime:(bool)arg1;
- (void)setAtMinTime:(bool)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setAvailableMetadataFormats:(id)arg1;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(bool)arg1;
- (void)setCompatibleWithAirPlayVideo:(bool)arg1;
- (void)setComposable:(bool)arg1;
- (void)setContentChapters:(id)arg1;
- (void)setCurrentAssetIfReady:(id)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setDeviceBatteryChargingOrFull:(bool)arg1;
- (void)setDisablingAutomaticTermination:(bool)arg1;
- (void)setForwardPlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHandlesAudioSessionInterruptions:(bool)arg1;
- (void)setHasProtectedContent:(bool)arg1;
- (void)setInspectionSuspended:(bool)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLooping:(bool)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMaxTiming:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinTime:(double)arg1;
- (void)setMinTiming:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setPictureInPictureInterrupted:(bool)arg1;
- (void)setPictureInPictureSupported:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreventingIdleDisplaySleep:(bool)arg1;
- (void)setPreventingIdleSystemSleep:(bool)arg1;
- (void)setRate:(double)arg1;
- (void)setRateBeforeScrubBegan:(double)arg1;
- (void)setRateWithForce:(double)arg1;
- (void)setReversePlaybackEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSavedCaptionAppearanceDisplayType:(long long)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setSeekToTime:(double)arg1;
- (void)setSeekToTimeInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeeking:(bool)arg1;
- (void)setSeekingInternal:(bool)arg1;
- (void)setTiming:(id)arg1;
- (void)setVolume:(double)arg1;
- (bool)shouldPreventIdleDisplaySleep;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)startAllowingIdleSleepPrevention;
- (void)startKVO;
- (void)startUsingNetworkResourcesForLiveStreamingWhilePaused;
- (long long)status;
- (void)stopAllowingIdleSleepPrevention;
- (void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;
- (void)throttledSeekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (long long)timeControlStatus;
- (id)timing;
- (void)toggleCaptions;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)updateAtMinMaxTime;
- (void)updateMinMaxTiming;
- (void)updateTiming;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (double)volume;

@end