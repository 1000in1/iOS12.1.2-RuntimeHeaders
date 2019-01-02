/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleEntity : HDDataEntity

+ (Class)_deletedEntityClass;
+ (id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)anySampleOfType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id*)arg5;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (id)columnNamesForTimeOffset;
+ (long long)countOfSamplesWithType:(id)arg1 profile:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4;
+ (id)databaseTable;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletionContext:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(bool)arg3 database:(id)arg4 profile:(id)arg5 recursiveDeleteAuthorizationBlock:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
+ (void)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 generateDeletedObjects:(bool)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
+ (void)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 profile:(id)arg3 recursiveDeleteAuthorizationBlock:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)entityEnumeratorWithType:(id)arg1 profile:(id)arg2;
+ (bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 associatedObjectHandler:(id /* block */)arg4;
+ (id)indices;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id)maxAnchorForSamplesWithType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)mostRecentSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 anchor:(id*)arg5 error:(id*)arg6;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (id)oldestSampleWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 error:(id*)arg5;
+ (id)populatedSampleTypes:(id)arg1 inDateInterval:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)preferredEntityType;
+ (bool)requiresSampleTypePredicate;
+ (id)sampleTypesForSamplesMatchingPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)samplesWithType:(id)arg1 profile:(id)arg2 encodingOptions:(id)arg3 predicate:(id)arg4 limit:(unsigned long long)arg5 anchor:(id*)arg6 error:(id*)arg7;
+ (id)sourceIDsForSamplesWithType:(id)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+ (id)timePeriodsForSampleTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (id)_sampleTypeInDatabase:(id)arg1;

@end