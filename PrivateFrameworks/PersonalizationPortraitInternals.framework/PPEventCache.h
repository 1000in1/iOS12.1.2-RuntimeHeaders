/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPEventCache : NSObject {
    id /* block */  _backfiller;
    _PASLock * _data;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_handleMemoryPressureStatus;
- (id)cachedEventHighlightForEKEvent:(id)arg1 rankingOptions:(int)arg2;
- (void)evictAllEventsNotInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)evictAllEventsNotInRanges:(id)arg1;
- (id)evictEventWithIdentifier:(id)arg1;
- (id)initWithBackfiller:(id /* block */)arg1;
- (id)objectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)refreshCachedEvent:(id)arg1;
- (void)removeAllObjects;
- (void)setEventHighlight:(id)arg1;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;

@end