/* Generated by EzioChiu.
 */

@protocol TSFeedModuleType

@required

- (UIViewController<TSTabBarSplitViewPresentable> *)createViewControllerForFeedDescriptor:(FCFeedDescriptor *)arg1 withFeedViewContext:(TSFeedViewContext *)arg2;
- (UIViewController<TSTabBarSplitViewPresentable> *)createViewControllerForFeedDescriptor:(FCFeedDescriptor *)arg1 withTableOfContentsRank:(long long)arg2 tableOfContentsSection:(long long)arg3 presentationReason:(long long)arg4;

@end
