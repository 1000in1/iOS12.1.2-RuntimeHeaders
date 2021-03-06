/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAppDragLocalContext : NSObject {
    NSString * _applicationBundleIdentifier;
    bool  _cancelsViaScaleAndFade;
    NSSet * _launchActions;
    NSURL * _launchURL;
    UIView * _portaledPreview;
    long long  _startLocation;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic) bool cancelsViaScaleAndFade;
@property (nonatomic, readonly, copy) NSSet *launchActions;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, retain) UIView *portaledPreview;
@property (nonatomic, readonly) long long startLocation;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (bool)cancelsViaScaleAndFade;
- (id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3;
- (id)launchActions;
- (id)launchURL;
- (id)portaledPreview;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCancelsViaScaleAndFade:(bool)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setPortaledPreview:(id)arg1;
- (long long)startLocation;

@end
