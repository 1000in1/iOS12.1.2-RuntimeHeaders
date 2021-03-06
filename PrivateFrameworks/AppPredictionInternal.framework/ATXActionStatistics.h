/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionStatistics : NSObject {
    NSMutableDictionary * _statisticsForParameters;
    double  _totalCoarseTimeOfDayCount;
    double  _totalConfirms;
    double  _totalDayAndLocationCount;
    double  _totalDayAndPrevLocationCount;
    double  _totalDayOfWeekCount;
    double  _totalLaunches;
    double  _totalLocationCount;
    double  _totalMotionTypeCount;
    double  _totalPrevLocationAndLocationCount;
    double  _totalPrevLocationAndMotionTypeCount;
    double  _totalPrevLocationCount;
    double  _totalRejects;
    double  _totalTimeAndDayAndLocationCount;
    double  _totalTimeAndDayCount;
    double  _totalTimeAndLocationCount;
    double  _totalTimeAndPrevLocationCount;
    double  _totalTimeOfDayCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateActionStatisticsForSlotResolutionStatistics:(id)arg1 candidateActionPredictions:(id)arg2;

@end
