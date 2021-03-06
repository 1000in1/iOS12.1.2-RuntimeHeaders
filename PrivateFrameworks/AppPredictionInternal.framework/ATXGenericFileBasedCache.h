/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXGenericFileBasedCache : NSObject {
    NSString * _cacheFilePath;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCacheFilePath:(id)arg1;
- (void)readWithMaxValidAge:(double)arg1 unlink:(bool)arg2 cacheDataOut:(id*)arg3 cacheAgeOut:(double*)arg4;
- (bool)storeData:(id)arg1;

@end
