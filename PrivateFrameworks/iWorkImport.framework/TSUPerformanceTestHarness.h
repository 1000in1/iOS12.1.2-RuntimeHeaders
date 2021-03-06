/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUPerformanceTestHarness : NSObject {
    bool  mPassed;
    long long  mPassingTests;
    bool  mQuiet;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  mSetupTime;
    NSMutableArray * mTestCases;
    long long  mTotalTests;
}

@property (nonatomic, readonly) bool passed;
@property (nonatomic, readonly) long long passingTestCount;
@property (nonatomic) bool quiet;
@property (nonatomic, readonly) long long testCount;

+ (id)harness;

- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)p_createResultDirectory;
- (void)p_writeConsoleMessagesToDirectory:(id)arg1;
- (void)p_writeCsvResultsToDirectory:(id)arg1;
- (void)p_writeSystemConfigurationToDirectory:(id)arg1;
- (bool)passed;
- (long long)passingTestCount;
- (bool)quiet;
- (void)report;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4;
- (bool)runTests;
- (void)setQuiet:(bool)arg1;
- (void)setup;
- (long long)testCount;
- (void)testSuite;
- (id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;

@end
