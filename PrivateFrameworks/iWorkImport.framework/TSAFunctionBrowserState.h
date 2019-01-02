/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAFunctionBrowserState : TSPObject {
    NSMutableArray * mBackFunctions;
    int  mCurrentFunction;
    NSMutableArray * mForwardFunctions;
    NSMutableArray * mRecentFunctions;
}

- (id)allBackFunctions;
- (id)allForwardFunctions;
- (int)back;
- (int)backByAmount:(unsigned long long)arg1;
- (bool)canGoBack;
- (bool)canGoForward;
- (int)currentFunction;
- (void)dealloc;
- (int)forward;
- (int)forwardByAmount:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_filterOutUnknownFunctions:(id)arg1;
- (id)recentFunctions;
- (void)recordNavigationTo:(int)arg1;
- (void)recordRecentFunction:(int)arg1;
- (void)saveToArchiver:(id)arg1;

@end