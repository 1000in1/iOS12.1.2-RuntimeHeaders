/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXGuardedActionPredictionContainerData : NSObject {
    float  _score;
    struct ATXScoredPrediction { Class x1; } * _scoredAction;
    ATXSlotSet * _slotSet;
}

- (void).cxx_destruct;
- (id)initWithScoredAction:(struct ATXScoredPrediction { Class x1; }*)arg1 slotSet:(id)arg2 score:(float)arg3;

@end