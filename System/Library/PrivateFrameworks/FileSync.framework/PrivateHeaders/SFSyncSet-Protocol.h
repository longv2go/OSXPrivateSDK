//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSDictionary, NSException, NSNumber, NSSet, NSString, SFPeer;

@protocol SFSyncSet
@property SEL statusCallbackSelector;
@property(retain) id statusCallbackDelegate;
@property(readonly) NSSet *remotePeers;
@property(readonly) NSSet *localPeers;
@property(readonly) NSSet *allPeers;
@property(readonly) unsigned int unresolvedErrorCount;
@property(readonly) unsigned int unresolvedConflictCount;
@property(readonly) NSNumber *totalPasses;
@property(readonly) NSNumber *totalItems;
@property(readonly) NSNumber *totalBytes;
@property(readonly) NSString *syncSetRef;
@property BOOL suppressErrorDialogs;
@property BOOL suppressConflictDialogs;
@property(readonly) int state;
@property(readonly) unsigned int resolvedConflictCount;
@property(copy) SFPeer *resolveConflictsInFavorOfPeer;
@property BOOL resolveAllConflictsWithMostRecent;
@property BOOL resetSyncHistoryAtNextSync;
@property(readonly) NSNumber *progress;
@property(copy) NSDate *nextSyncTime;
@property(copy) NSString *name;
@property(readonly) NSArray *legacyExceptions;
@property(readonly) NSArray *legacyConflicts;
@property(readonly) int lastSyncResult;
@property(readonly) NSDate *lastSuccessfulSyncTime;
@property(readonly) BOOL isPHDSyncSet;
@property BOOL isAutomaticallySyncing;
@property(copy) NSDictionary *info;
@property(readonly) BOOL hasUnsyncedChanges;
@property(readonly) BOOL hasActiveUI;
@property(readonly) NSString *hoardPath;
@property(readonly) NSException *firstSyncException;
@property(readonly) NSString *descriptionDebug;
@property(copy) NSArray *defaultSyncOptions;
@property(readonly) NSNumber *currentPass;
@property(readonly) NSString *currentItemPath;
@property(readonly) NSString *currentItemName;
@property(readonly) NSNumber *completedItems;
@property(readonly) NSNumber *completedBytes;
@property(readonly) BOOL canSyncNow;
@property BOOL autoSyncOnFileSystemModification;
@property double automaticSyncInterval;
@property BOOL abortOnUnresolvedConflict;

@optional
- (oneway void)resolvedLegacyConflicts:(in NSArray *)arg1;
- (oneway void)reportedLegacyExceptions:(in NSArray *)arg1;
- (void)forget;
- (void)displayConflictsAndErrors;
- (void)startSyncWithOptions:(NSArray *)arg1;
- (void)startSync;
- (oneway void)abortSync;
- (void)removePeer:(in SFPeer *)arg1;
- (SFPeer *)findPeerByName:(in NSString *)arg1;
- (SFPeer *)createPeerHFSWithName:(in NSString *)arg1 syncPointPath:(in NSString *)arg2 storeID:(in NSString *)arg3;
@end
