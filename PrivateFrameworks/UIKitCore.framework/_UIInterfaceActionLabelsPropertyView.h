/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInterfaceActionLabelsPropertyView : UIView <UIInterfaceActionDisplayPropertyObserver> {
    UIInterfaceAction * _action;
    UILabel * _classificationLabel;
    NSLayoutConstraint * _interLabelSpacingConstraint;
    NSArray * _labelConstraints;
    NSLayoutConstraint * _leadingLabelLeadingConstraint;
    NSLayoutConstraint * _leadingLabelVerticalPositionConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _trailingLabelTrailingConstraint;
    NSLayoutConstraint * _trailingLabelVerticalPositionConstraint;
}

@property (nonatomic, readonly) UIInterfaceAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToLabels;
- (id)_classificationLabelIfVisible;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_interfaceActionViewState;
- (id)_newLabel;
- (void)_reloadContentClassificationLabelDisplayProperties;
- (void)_reloadContentForTitleDisplayProperties;
- (id)_visualStyle;
- (id)action;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithAction:(id)arg1;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)tintColorDidChange;

@end