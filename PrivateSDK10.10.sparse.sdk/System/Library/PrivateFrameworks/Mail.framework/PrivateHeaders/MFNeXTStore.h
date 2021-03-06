/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFMessageStore.h>

@class MFTableOfContents, NSData;

@interface MFNeXTStore : MFMessageStore
{
    NSData *_mboxData;
    MFTableOfContents *_toc;
    BOOL _mboxIsOnSMB;
    BOOL _haveUpdatedMetadata;
    BOOL _importMode;
    NSData *_incomingMboxData;
    BOOL _rebuildingTOC;
}

+ (BOOL)cheapStoreAtPathIsEmpty:(id)arg1;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
@property BOOL rebuildingTOC; // @synthesize rebuildingTOC=_rebuildingTOC;
- (void).cxx_destruct;
- (BOOL)_shouldCallCompactWhenClosing;
- (BOOL)isSortedAscending;
- (id)sortOrder;
- (void)suggestSortOrder:(id)arg1 ascending:(BOOL)arg2;
- (long long)_writeMessagesToIncomingMail:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (void)_incorporateMailFromIncoming;
- (long long)undoAppendOfMessageIDs:(id)arg1;
- (long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 forMove:(BOOL)arg6 error:(id *)arg7;
- (BOOL)allowsAppend;
- (long long)_appendMessages:(id)arg1 successes:(id *)arg2 failures:(id *)arg3 mboxName:(id)arg4 tableOfContents:(id)arg5;
- (void)_addIDsForAppendedMessages:(id)arg1 toArray:(id)arg2;
- (id)_appendMessage:(id)arg1 toFile:(id)arg2;
- (void)_deleteAttachments:(id)arg1;
- (void)doCompact;
- (BOOL)canCompact;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)messageForMessageID:(id)arg1;
- (void)_resetAllMessages;
- (BOOL)tableOfContents:(id)arg1 loadedMessages:(id)arg2;
- (void)_flushAllMessageData;
- (void)_rebuildTableOfContentsSynchronously;
- (BOOL)canRebuild;
- (void)writeUpdatedMessageDataToDisk;
- (void)_invalidate;
- (id)_lockFilePath;
- (void)updateMetadata;
- (id)messagesForImporter;
- (id)incomingMessages;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (void)_releaseMboxData;
- (void)dealloc;
- (id)init;

@end

