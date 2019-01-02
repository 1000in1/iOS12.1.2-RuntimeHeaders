/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSendBackBannerView : UIView {
    PXCapsuleButton * _actionButton;
    id /* block */  _actionButtonAction;
    NSString * _actionButtonTitle;
    UILabel * _captionLabel;
    UILabel * _headlineLabel;
    PXCMMImageView * _imageView;
    PXUpdater * _updater;
}

+ (id)_headlineLabelFont;
+ (id)captionLabelFont;
+ (double)captionLabelTopInset;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(bool)arg3;
- (id)_attributedStringWithString:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_headlineStringAttributes;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateActionButton;
- (void)_updateLabels;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMessage:(id)arg1;
- (void)layoutSubviews;
- (id)new;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)setAsset:(id)arg1 mediaProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToWindow:(id)arg1;

@end