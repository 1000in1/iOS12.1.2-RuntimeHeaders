/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXMotionManagerWrapper : NSObject {
    _PASLock * _currentMotion;
    CMMotionActivityManager * _motionActivityManager;
    NSOperationQueue * _motionActivityQueue;
}

+ (bool)hasMotionActivity;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchMotionActivities;
- (id)getCurrentActivity;
- (id)init;
- (void)updateCurrentActivity:(id)arg1;

@end