/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageTablePreheater : NSObject <PLPreheatItemSource> {
    PLImageTable * _imageTable;
    NSObject<OS_dispatch_queue> * _indexIsolationQueue;
    NSMutableIndexSet * _indexesForPreheating;
    NSObject<OS_dispatch_queue> * _preheatQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLImageTable *imageTable;
@property (readonly) Class superclass;

- (id)_flushAndReturnIndexesForPreheating;
- (void)_preheatEntriesAtIndexes:(id)arg1 completion:(id /* block */)arg2;
- (void)_preheatEntryAtIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)imageTable;
- (id)initWithImageTable:(id)arg1;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3;
- (void)preheatImageDataAtIndexes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4;
- (void)setImageTable:(id)arg1;

@end