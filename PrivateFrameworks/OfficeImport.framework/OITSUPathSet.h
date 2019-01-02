/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPathSet : NSObject <NSCopying> {
    NSMutableDictionary * mBasePathToNumberMap;
    NSMutableSet * mPaths;
    OITSUPathSet * mUnderlyingSet;
}

+ (id)parseNumberOutOfBasename:(id)arg1 hasNumber:(bool*)arg2 number:(unsigned int*)arg3;
+ (void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(bool*)arg3 baseNumber:(unsigned int*)arg4 extension:(id*)arg5;

- (id)addPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2;
- (bool)isPathUsed:(id)arg1;
- (void)pathIsNoLongerUsed:(id)arg1;
- (void)pathIsUsed:(id)arg1;
- (void)setUnderlyingPathSet:(id)arg1;
- (void)unionPathSet:(id)arg1;

@end