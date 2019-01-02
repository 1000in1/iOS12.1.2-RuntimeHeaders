/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneManagerObserver : BSZeroingWeakReference <BSDescriptionProviding, FBSceneManagerDelegate, FBSceneManagerInternalObserver> {
    bool  _amendSettings;
    bool  _createDefaultTransitionContext;
    bool  _delegate;
    bool  _didCommitDEPRECATED;
    bool  _didCommitDEPRECATED2;
    bool  _didCreate;
    bool  _didCreateSceneDEPRECATED;
    bool  _didDestroy;
    bool  _didReceiveActions;
    bool  _didSynchronize;
    bool  _didUpdateClientSettings;
    bool  _hostingPolicyForDisplay;
    bool  _hostingPolicyForScene;
    bool  _internalObserver;
    bool  _updateApplied;
    bool  _updateCompleted;
    bool  _updatePrepared;
    bool  _willCommitDEPRECATED;
    bool  _willDestroy;
    bool  _willSynchronize;
    bool  _willUpdateSceneDEPRECATED;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDelegate, nonatomic, readonly) bool delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInternalObserver, nonatomic, readonly) bool internalObserver;
@property (nonatomic, readonly) id observer;
@property (readonly) Class superclass;

+ (id)observerWithObserver:(id)arg1;

- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (bool)isDelegate;
- (bool)isInternalObserver;
- (id)observer;
- (void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
- (id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForDisplay:(id)arg2;
- (long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;
- (void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 completedWithContext:(id)arg3 error:(id)arg4;
- (void)sceneManager:(id)arg1 updateForScene:(id)arg2 preparedWithContext:(id)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end