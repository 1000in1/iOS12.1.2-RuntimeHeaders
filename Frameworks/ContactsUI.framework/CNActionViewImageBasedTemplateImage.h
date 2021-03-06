/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNActionViewImageBasedTemplateImage : NSObject <CNActionViewTemplateImage> {
    UIImage * _baseImage;
    CNCache * _imageCache;
}

@property (nonatomic, readonly) UIImage *baseImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNCache *imageCache;
@property (readonly) Class superclass;

+ (id)cacheKeyForImage:(id)arg1 color:(id)arg2;

- (void).cxx_destruct;
- (id)baseImage;
- (id)imageCache;
- (id)imageWithColor:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 cache:(id)arg2;
- (id)templateImage;
- (id)uncachedImageWithColor:(id)arg1;

@end
