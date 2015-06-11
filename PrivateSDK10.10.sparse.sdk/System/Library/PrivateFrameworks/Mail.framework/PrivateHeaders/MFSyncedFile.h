/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFilePresenter-Protocol.h"

@class NSOperationQueue, NSString, NSURL;

@interface MFSyncedFile : NSObject <NSFilePresenter>
{
    NSURL *_cloudURL;
    id _cloudURLLock;
    NSURL *_url;
    id _conflictResolver;
    unsigned long long _syncState;
}

+ (id)_metadataURL;
+ (id)_metadata;
+ (id)_currentiCloudAccount;
+ (void)stopPersistingSyncedFileForURL:(id)arg1;
+ (id)syncedFileForURL:(id)arg1 withConflictResolver:(id)arg2;
+ (void)initialize;
@property unsigned long long syncState; // @synthesize syncState=_syncState;
@property(copy) id conflictResolver; // @synthesize conflictResolver=_conflictResolver;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void).cxx_destruct;
- (void)_handleIdentityChange:(id)arg1;
- (void)_resolveConflicts;
- (void)_setCloudURL;
@property(readonly) NSURL *cloudURL;
- (id)_ubiquitousFileName;
- (id)_ubiquitousFileURL;
- (BOOL)_fileExistsInCloud;
- (BOOL)_writeDataToCloud:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_syncWithCloudPostNotification:(BOOL)arg1 error:(id *)arg2;
- (BOOL)synchronouslyWritePlist:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)synchronouslyReadPlistWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)_deleteFileLocallyPostingNotification:(BOOL)arg1 error:(id *)arg2;
- (void)deleteFile;
- (id)_readPlistWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (id)readPlistWithOptions:(unsigned long long)arg1;
- (void)writePlist:(id)arg1 options:(unsigned long long)arg2;
- (id)readDataWithOptions:(unsigned long long)arg1;
- (BOOL)_writeDataLocally:(id)arg1 options:(unsigned long long)arg2 setMetadata:(BOOL)arg3 postNotification:(BOOL)arg4 error:(id *)arg5;
- (BOOL)_writeDataAfterResolvingConflict:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_writeData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)writeData:(id)arg1 options:(unsigned long long)arg2;
- (void)_clearMetadata;
- (BOOL)_signedInState;
- (void)_setiCloudAccount;
- (id)_iCloudAccount;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidChange;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 withConflictResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
