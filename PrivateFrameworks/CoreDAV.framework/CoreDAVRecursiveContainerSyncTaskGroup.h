/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL, <CoreDAVLocalDBTreeInfoProvider>, NSDictionary, NSMutableArray, CoreDAVRecursiveContainerSyncTaskGroup, NSString, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetTaskDelegate, CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    NSArray *_actions;
    NSURL *_addMemberURL;
    Class _appSpecificContainerItemClass;
    Class _appSpecificDataItemClass;
    NSMutableArray *_childCollectionURL;
    void *_context;
    NSURL *_folderURL;
    NSMutableDictionary *_folderURLToChildrenURLOrder;
    NSMutableDictionary *_leafURLToETag;
    unsigned int _maxIndependentTasks;
    unsigned int _multiGetBatchSize;
    NSString *_nextCTag;
    NSString *_nextPTag;
    NSString *_nextSyncToken;
    NSMutableSet *_outstandingTaskGroups;
    CoreDAVRecursiveContainerSyncTaskGroup *_parentFolderTaskGroup;
    int _phase;
    NSString *_previousCTag;
    NSString *_previousPTag;
    NSString *_previousSyncToken;
    BOOL _syncItemOrder;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableArray *_unsubmittedTasks;
    BOOL _useMultiGet;
    BOOL _useSyncCollection;
}

@property(readonly) void* context;
@property <CoreDAVLocalDBTreeInfoProvider> * delegate;
@property(readonly) NSURL * folderURL;
@property(readonly) NSDictionary * folderURLToChildrenURLOrder;
@property unsigned int maxIndependentTasks;
@property unsigned int multiGetBatchSize;
@property CoreDAVRecursiveContainerSyncTaskGroup * parentTaskGroup;
@property(readonly) NSString * previousCTag;
@property(retain) NSString * previousSyncToken;
@property BOOL useSyncCollection;

- (void)_childTaskGroup:(id)arg1 finishedWithError:(id)arg2;
- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (void)_getDataPayloads;
- (void)_getETags;
- (void)_getFolderInfo;
- (void)_getFolderTags;
- (void)_getOrder;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 error:(id)arg3;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_pushActions;
- (unsigned int)_submitTasks;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1;
- (void)_tearDownAllUnsubmittedTasks;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)cancelTasks;
- (void)containerMultiGetTask:(id)arg1 parsedContents:(id)arg2 error:(id)arg3;
- (void*)context;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (void)dealloc;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (id)description;
- (id)folderURL;
- (id)folderURLToChildrenURLOrder;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 parentTaskGroup:(id)arg10;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (unsigned int)maxIndependentTasks;
- (void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (unsigned int)multiGetBatchSize;
- (id)parentTaskGroup;
- (id)previousCTag;
- (id)previousSyncToken;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)setMaxIndependentTasks:(unsigned int)arg1;
- (void)setMultiGetBatchSize:(unsigned int)arg1;
- (void)setParentTaskGroup:(id)arg1;
- (void)setPreviousSyncToken:(id)arg1;
- (void)setUseSyncCollection:(BOOL)arg1;
- (BOOL)shouldSyncChildWithResourceType:(id)arg1;
- (void)startTaskGroup;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (BOOL)useSyncCollection;

@end