/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewQuickActionView : UIView {
    UIImageView * _backgroundViewImage;
    UIImageView * _imageView;
    UILabel * _label;
    UIPreviewAction * _quickAction;
    bool  _selected;
}

@property (nonatomic) UIImageView *backgroundViewImage;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) UILabel *label;
@property (nonatomic, retain) UIPreviewAction *quickAction;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_updateCircleBackgroundImage;
- (id)backgroundViewImage;
- (id)centerYAnchor;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (id)quickAction;
- (bool)selected;
- (void)setBackgroundViewImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setQuickAction:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateFromQuickAction;

@end