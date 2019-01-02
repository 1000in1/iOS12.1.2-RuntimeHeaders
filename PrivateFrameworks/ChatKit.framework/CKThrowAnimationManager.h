/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager> {
    CKChatControllerDummyAnimator * _animator;
    CKSendAnimationContext * _currentContext;
    CKTranscriptTypingIndicatorCell * _fakeTypingIndicatorCell;
    <CKSendAnimationBalloonProvider> * _sendAnimationBalloonProvider;
    <CKSendAnimationManagerDelegate> * _sendAnimationManagerDelegate;
    CKSendAnimationWindow * _sendAnimationWindow;
    <CKThrowAnimationManagerDelegate> * _throwManagerDelegate;
}

@property (nonatomic, retain) CKChatControllerDummyAnimator *animator;
@property (nonatomic, retain) CKSendAnimationContext *currentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CKSendAnimationBalloonProvider> *sendAnimationBalloonProvider;
@property (nonatomic) <CKSendAnimationManagerDelegate> *sendAnimationManagerDelegate;
@property (nonatomic, retain) CKSendAnimationWindow *sendAnimationWindow;
@property (readonly) Class superclass;
@property (nonatomic) <CKThrowAnimationManagerDelegate> *throwManagerDelegate;

- (void).cxx_destruct;
- (double)_changeInEntryViewHeight;
- (id)_collectionViewController;
- (id)_entryView;
- (void)_hideAddedChatItems;
- (void)_removeAllAnimations;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_setupFakeTypingIndicatorIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_snapshotLiveBubbleIfNecessary;
- (bool)_transcriptWillShiftDueToThrowAnimation;
- (void)animateMessages:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animator;
- (struct CGPoint { double x1; double x2; })bestVisibleOffsetForBubbleAtIndex:(long long)arg1;
- (id)currentContext;
- (id)fakeTypingIndicatorCell;
- (id)init;
- (id)sendAnimationBalloonProvider;
- (id)sendAnimationManagerDelegate;
- (id)sendAnimationWindow;
- (void)setAnimator:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setFakeTypingIndicatorCell:(id)arg1;
- (void)setSendAnimationBalloonProvider:(id)arg1;
- (void)setSendAnimationManagerDelegate:(id)arg1;
- (void)setSendAnimationWindow:(id)arg1;
- (void)setThrowManagerDelegate:(id)arg1;
- (id)throwManagerDelegate;

@end