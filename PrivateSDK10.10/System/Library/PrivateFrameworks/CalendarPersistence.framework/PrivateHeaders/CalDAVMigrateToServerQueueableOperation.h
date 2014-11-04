/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalDAVQueueableOperation.h>

@class CalDAVBulkUploadTaskGroup, CalManagedCalDAVCalendar, CalManagedGroup, CalManagedObjectContext, LocalCalendarDetails, NSArray, NSMutableArray, NSString;

@interface CalDAVMigrateToServerQueueableOperation : CalDAVQueueableOperation
{
    BOOL _inProgress;
    int _state;
    long long _previousDelay;
    CalManagedObjectContext *_context;
    NSMutableArray *_unprocessedCalendars;
    NSMutableArray *_calendarsToCreate;
    LocalCalendarDetails *_currentCalendarDetails;
    CalManagedCalDAVCalendar *_currentRemoteCalendar;
    NSString *_currentStagedRemoteCTag;
    BOOL _gotEtagsForAllItemsInCurrentRemoteCalendar;
    NSMutableArray *_unprocessedNewPlans;
    NSMutableArray *_unprocessedUpdatePlans;
    NSMutableArray *_unprocessedUpdateDeleteUIDPlans;
    NSArray *_inProgressPlans;
    NSMutableArray *_plansToPostProcess;
    NSMutableArray *_plansToMoveLocal;
    unsigned long long _indexNotFaultedOut;
    CalManagedGroup *_failGroup;
    CalDAVBulkUploadTaskGroup *_bulkUploadTaskGroup;
    long long _bulkSimpleMaxResources;
    long long _bulkSimpleMaxSize;
    long long _bulkCrudMaxResources;
    long long _bulkCrudMaxSize;
}

+ (id)plansForEventsInCalendar:(id)arg1 toCalendar:(id)arg2;
+ (id)plansForTasksInCalendar:(id)arg1 toCalendar:(id)arg2;
+ (id)plansForEventsOrTasksInCalendar:(id)arg1 toCalendar:(id)arg2 tasksOnly:(BOOL)arg3;
@property(retain) CalDAVBulkUploadTaskGroup *bulkUploadTaskGroup; // @synthesize bulkUploadTaskGroup=_bulkUploadTaskGroup;
@property(retain) NSMutableArray *plansToMoveLocal; // @synthesize plansToMoveLocal=_plansToMoveLocal;
@property(retain) NSMutableArray *plansToPostProcess; // @synthesize plansToPostProcess=_plansToPostProcess;
@property(retain) NSArray *inProgressPlans; // @synthesize inProgressPlans=_inProgressPlans;
@property(retain) NSMutableArray *unprocessedUpdateDeleteUIDPlans; // @synthesize unprocessedUpdateDeleteUIDPlans=_unprocessedUpdateDeleteUIDPlans;
@property(retain) NSMutableArray *unprocessedUpdatePlans; // @synthesize unprocessedUpdatePlans=_unprocessedUpdatePlans;
@property(retain) NSMutableArray *unprocessedNewPlans; // @synthesize unprocessedNewPlans=_unprocessedNewPlans;
@property(retain) NSString *currentStagedRemoteCTag; // @synthesize currentStagedRemoteCTag=_currentStagedRemoteCTag;
@property(retain) CalManagedCalDAVCalendar *currentRemoteCalendar; // @synthesize currentRemoteCalendar=_currentRemoteCalendar;
@property(retain) LocalCalendarDetails *currentCalendarDetails; // @synthesize currentCalendarDetails=_currentCalendarDetails;
@property(retain) NSMutableArray *calendarsToCreate; // @synthesize calendarsToCreate=_calendarsToCreate;
@property(retain) NSMutableArray *unprocessedCalendars; // @synthesize unprocessedCalendars=_unprocessedCalendars;
@property(retain) CalManagedObjectContext *context; // @synthesize context=_context;
@property int state; // @synthesize state=_state;
- (void)deleteComplete:(id)arg1;
- (void)_postProcessDeletionAndContinue;
- (void)postComplete:(id)arg1;
- (void)putComplete:(id)arg1;
- (void)calendarPropertiesComplete:(id)arg1;
- (void)mkcalendarComplete:(id)arg1;
- (void)_processNewCalendar;
- (void)_makeRemoteCalendars;
- (BOOL)_populatePlansForLocalCalendar;
- (void)_handleLocalCalendar;
- (void)_modifyExistingItems;
- (void)_deleteObsoleteItems;
- (void)_uploadNewItems;
- (void)_postCRUD;
- (void)_postData:(id)arg1 extraHeaders:(id)arg2;
- (void)_putOneItem:(id)arg1 path:(id)arg2 extraHeaders:(id)arg3;
- (void)_fetchCalendarProperties;
- (void)_createNewRemoteSubscribedCalendar;
- (void)_createNewRemoteCalendar;
- (BOOL)_populateEtags:(id)arg1 filenames:(id)arg2;
- (id)_documentFromPlans:(id)arg1;
- (id)_expandedItemsFromItems:(id)arg1;
- (BOOL)_bulkCrudSupported;
- (BOOL)_bulkSimpleSupported;
- (void)_setBulkUnknownToUnsupported;
- (BOOL)_isBulkStateUnknown;
- (void)_updateStagedCtag:(id)arg1;
- (id)_makeCommonHeaders;
- (BOOL)_cleanupMarkedCalendarsAfterSuccessfulMigrationWithError:(id *)arg1;
- (id)_getFailGroupWithError:(id *)arg1;
- (void)_storeAndUpdatePlansWithETags:(id)arg1 filenames:(id)arg2;
- (void)_storeAndUpdateFailedPlansWithFilenames:(id)arg1;
- (void)_storeAndUpdateFailedPlansWithUIDs:(id)arg1;
- (void)_markPlanAsFailed:(id)arg1;
- (void)_faultOutPostProcessedToIndex:(unsigned long long)arg1;
- (void)_determineAndSetCurrentRemoteSubscribedCalendar;
- (void)_determineAndSetCurrentRemoteCalendar;
- (id)_determineRemoteCalendarsForLocalCalendars:(id)arg1 includeSubscribed:(BOOL)arg2 tasks:(BOOL)arg3;
- (BOOL)_localSubscribedCalendar:(id)arg1 matchesRemoteCalendar:(id)arg2;
- (id)accountID;
- (id)managedPrincipal;
- (void)_checkThread;
- (void)bumpPreviousDelay;
- (void)_resetBulkMax;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)migrate;
- (void)_setupBackgroundThread;
- (void)dealloc;
- (BOOL)suppressErrorDialog;
- (void)retryTimerFired:(id)arg1;
- (void)migrateOperationDone:(id)arg1;
- (void)_finalize;
- (void)performOperation;
- (long long)_preconditionErrorBackoffTime:(id)arg1;
- (id)initWithSession:(id)arg1 previousMigrateDelay:(long long)arg2;

@end
