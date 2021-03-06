/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIEpisodeDetailViewController : VUILibraryFetchControllerViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate, VUIMediaEntitiesFetchControllerDelegate> {
    <VUIEpisodeDetailViewControllerDelegate> * _delegate;
    VUIEpisodeDetailView * _detailView;
    VUIMediaItem * _mediaItem;
    VUIMetricsController * _metricsController;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIEpisodeDetailViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIEpisodeDetailView *detailView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIMediaItem *mediaItem;
@property (nonatomic, retain) VUIMetricsController *metricsController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_configureNavigationBar;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)delegate;
- (id)detailView;
- (void)didTapPlay;
- (void)dismissPopover;
- (void)dismissTapped:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (id)mediaItem;
- (id)metricsController;
- (void)setDelegate:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
