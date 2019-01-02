/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface _NCActionButtonDescription : NSObject {
    bool  _defaultActionButton;
    NSString * _selectorString;
    NSString * _title;
}

@property (getter=isDefaultActionButton, nonatomic, readonly) bool defaultActionButton;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 selector:(SEL)arg2 defaultActionButton:(bool)arg3;
- (bool)isDefaultActionButton;
- (SEL)selector;
- (id)title;

@end