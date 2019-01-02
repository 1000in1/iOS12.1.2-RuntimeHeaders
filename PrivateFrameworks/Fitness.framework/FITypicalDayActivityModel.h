/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
 */

@interface FITypicalDayActivityModel : NSObject {
    NSObject<OS_dispatch_group> * _activitySummaryBarrierGroup;
    bool  _activitySummaryLoaded;
    <FITypicalDayActivityModelDelegate> * _delegate;
    NSDateInterval * _interval;
    NSDate * _projectedOffWristDateToday;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_bucketDates;
    HKActivitySummary * _queue_currentActivitySummary;
    FISimpleHistogram * _queue_energyHistogram;
    FISimpleHistogram * _queue_exerciseHistogram;
    long long  _totalActiveDays;
}

@property (nonatomic) <FITypicalDayActivityModelDelegate> *delegate;
@property (nonatomic, readonly) long long totalActiveDays;

- (void).cxx_destruct;
- (id)_bucketDateForIndex:(unsigned long long)arg1 startOfDay:(id)arg2;
- (long long)_bucketIndexForDate:(id)arg1 startOfDay:(id)arg2 bucketDates:(id)arg3;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)arg1;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)arg1 biologicalSex:(long long)arg2 height:(id)arg3 weight:(id)arg4 wheelchairUse:(long long)arg5;
- (id)_queue_calculateProjectedOffWristDateFromActivitySummaries:(id)arg1;
- (id)_queue_createHistogramForGoalType:(long long)arg1 activitySummaries:(id)arg2;
- (double)_queue_currentValueForHistogram:(id)arg1;
- (id)_queue_fetchActivitySummariesOrderedByCacheIndexWithCalendar:(id)arg1;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
- (void)_waitUntilActivitySummaryLoaded;
- (bool)_willCompleteGoalWithType:(long long)arg1 bufferPercentage:(double)arg2;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)arg1;
- (double)currentExerciseGoalPercentage;
- (double)currentMoveGoalPercentage;
- (double)currentStandGoalPercentage;
- (id)debugDescription;
- (id)delegate;
- (id)endOfToday;
- (id)firstOnWristDateToday;
- (void)handleUpdatedCurrentActivitySummary:(id)arg1;
- (id)initForDateInterval:(id)arg1 delegate:(id)arg2;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (double)projectedDayDuration;
- (id)projectedOffWristDateToday;
- (bool)projectedToBeatMoveRecordByEndOfDay;
- (void)rebuildWithInterval:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldSuggestWalkWithActivitySettingsController:(id)arg1;
- (id)startOfToday;
- (long long)totalActiveDays;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (bool)willCompleteEnergyBurnedGoalWithBufferPercentage:(double)arg1;
- (bool)willCompleteExerciseGoalWithBufferPercentage:(double)arg1;
- (bool)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)arg1;
- (bool)willCompletingMoveRingEarnStreakAchievement;

@end