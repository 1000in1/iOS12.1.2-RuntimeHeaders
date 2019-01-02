/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar> {
    struct RetainPtr<id<UIItemProviderWriting> > { 
        void *m_ptr; 
    }  _representingObject;
}

@property (nonatomic, readonly) NSData *dataForClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <UIItemProviderWriting> *representingObject;
@property (nonatomic, readonly) <NSItemProviderWriting> *representingObjectForClient;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *typeIdentifierForClient;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithObject:(id)arg1;
- (void)registerItemProvider:(id)arg1;
- (id)representingObject;
- (id)representingObjectForClient;

@end