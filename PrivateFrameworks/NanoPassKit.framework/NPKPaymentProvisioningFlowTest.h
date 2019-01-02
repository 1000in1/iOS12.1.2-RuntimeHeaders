/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowTest : NSObject <NPKPaymentProvisioningFlowControllerDelegate> {
    NPKPaymentProvisioningFlowController * _flowController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NPKPaymentProvisioningFlowController *flowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleManualEntryStepWithContext:(id)arg1;
- (void)_handlePreconditionsStep;
- (void)_handleProvisioningProgressStepWithContext:(id)arg1;
- (void)_handleProvisioningResultStepWithContext:(id)arg1;
- (void)_handleRemoteCredentialsStepWithContext:(id)arg1;
- (void)_handleTermsAndConditionsStepWithContext:(id)arg1;
- (void)_handleWelcomeStepWithContext:(id)arg1;
- (id)flowController;
- (id)init;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(unsigned long long)arg2 toStep:(unsigned long long)arg3 withContext:(id)arg4;
- (void)setFlowController:(id)arg1;
- (void)startTest;

@end