/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving> {
    NSURL * _documentURL;
    bool  _executing;
    id /* block */  _fetchingVersionsDoneBlock;
    bool  _finished;
    bool  _includeCachedVersions;
    <BRNonLocalVersionSending> * _sender;
    BOOL  _state;
    NSMutableArray * _versions;
    NSMutableDictionary * _versionsByEtag;
    GSPermanentStorage * _versionsStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isExecuting, nonatomic) bool executing;
@property (nonatomic, copy) id /* block */ fetchingVersionsDoneBlock;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeCachedVersions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *versions;

- (void).cxx_destruct;
- (bool)__advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (bool)__finishIfCancelled;
- (void)_addVersion:(id)arg1;
- (bool)_advanceToState:(BOOL)arg1 result:(id)arg2 error:(id)arg3;
- (void)_senderInvalidate;
- (bool)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id*)arg2;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)error;
- (id /* block */)fetchingVersionsDoneBlock;
- (bool)includeCachedVersions;
- (id)initWithDocumentURL:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(bool)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorNameComponents:(id)arg7 modificationDate:(id)arg8;
- (oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(bool)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorNameComponents:(id)arg8 modificationDate:(id)arg9;
- (oneway void)newThumbnailForVersionWithEtag:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFetchingVersionsDoneBlock:(id /* block */)arg1;
- (void)setFinished:(bool)arg1;
- (void)setIncludeCachedVersions:(bool)arg1;
- (void)start;
- (id)versions;
- (oneway void)versionsDone;

@end