/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    NSMutableArray * _autocompleteSearchResults;
    NSMutableArray * _corecipientSearchResults;
    NSNumber * _corecipientSearchTaskID;
    <MFMailComposeContactsSearchControllerDelegate> * _delegate;
    bool  _foundAnySearchResults;
    MFContactsSearchManager * _manager;
    MFContactsSearchResultsModel * _model;
    NSNumber * _taskID;
    unsigned long long  _waitingOnSearchResultsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMailComposeContactsSearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *taskID;

- (void)_cancelSearchAndNotify:(bool)arg1;
- (void)_finishSearch;
- (void)_reset;
- (void)beganNetworkActivity;
- (void)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)endedNetworkActivity;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (void)removeRecipient:(id)arg1;
- (void)searchWithString:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setTaskID:(id)arg1;
- (id)taskID;

@end