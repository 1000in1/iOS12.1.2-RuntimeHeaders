/* Generated by EzioChiu.
 */

@protocol ACHEarnedInstanceAwarding <NSObject>

@required

- (NSSet *)earnedInstancesForHistoricalInterval:(NSDateInterval *)arg1 databaseContext:(HDDatabaseTransactionContext *)arg2;
- (NSString *)uniqueName;

@end