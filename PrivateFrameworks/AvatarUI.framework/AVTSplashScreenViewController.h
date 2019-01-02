/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTSplashScreenViewController : UIViewController <AVTSplashScreenLayoutDelegate> {
    AVTSplashScreenConfiguration * _configuration;
    UIButton * _continueButton;
    AVTSplashScreenLayout * _currentLayout;
    <AVTSplashScreenViewControllerDelegate> * _delegate;
    AVPlayerLooper * _playerLooper;
    AVPlayerViewController * _playerViewController;
    AVQueuePlayer * _queuePlayer;
    AVPlayerLooper * _secondaryPlayerLooper;
    AVPlayerViewController * _secondaryPlayerViewController;
    AVQueuePlayer * _secondaryQueuePlayer;
    AVTUIStyle * _styleProvider;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) AVTSplashScreenConfiguration *configuration;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) AVTSplashScreenLayout *currentLayout;
@property (nonatomic) <AVTSplashScreenViewControllerDelegate> *delegate;
@property (nonatomic, retain) AVPlayerLooper *playerLooper;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic, retain) AVQueuePlayer *queuePlayer;
@property (nonatomic, retain) AVPlayerLooper *secondaryPlayerLooper;
@property (nonatomic, retain) AVPlayerViewController *secondaryPlayerViewController;
@property (nonatomic, retain) AVQueuePlayer *secondaryQueuePlayer;
@property (nonatomic, retain) AVTUIStyle *styleProvider;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)applyLayout:(id)arg1;
- (id)configuration;
- (id)continueButton;
- (id)currentLayout;
- (id)delegate;
- (void)didTapContinueButton:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2;
- (id)playerLooper;
- (id)playerViewController;
- (id)queuePlayer;
- (id)secondaryPlayerLooper;
- (id)secondaryPlayerViewController;
- (id)secondaryQueuePlayer;
- (void)setConfiguration:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayerLooper:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setQueuePlayer:(id)arg1;
- (void)setSecondaryPlayerLooper:(id)arg1;
- (void)setSecondaryPlayerViewController:(id)arg1;
- (void)setSecondaryQueuePlayer:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)splashScreenLayoutDidChange:(id)arg1;
- (id)styleProvider;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end