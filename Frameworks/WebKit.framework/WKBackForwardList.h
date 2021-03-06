/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBackForwardList : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardList> { 
        struct type { 
            unsigned char __lx[64]; 
        } data; 
    }  _list;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, readonly) WKBackForwardListItem *backItem;
@property (nonatomic, readonly, copy) NSArray *backList;
@property (nonatomic, readonly) WKBackForwardListItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WKBackForwardListItem *forwardItem;
@property (nonatomic, readonly, copy) NSArray *forwardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_clear;
- (void)_removeAllItems;
- (id)backItem;
- (id)backList;
- (id)currentItem;
- (void)dealloc;
- (id)forwardItem;
- (id)forwardList;
- (id)itemAtIndex:(long long)arg1;

@end
