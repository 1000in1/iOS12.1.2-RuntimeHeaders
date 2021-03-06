/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormSelectControl : NSObject <WKFormPeripheral> {
    struct RetainPtr<NSObject<WKFormControl> > { 
        void *m_ptr; 
    }  _control;
}

@property (nonatomic, readonly) NSString *selectFormPopoverTitle;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (id)initWithView:(id)arg1;
- (id)selectFormPopoverTitle;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;

@end
