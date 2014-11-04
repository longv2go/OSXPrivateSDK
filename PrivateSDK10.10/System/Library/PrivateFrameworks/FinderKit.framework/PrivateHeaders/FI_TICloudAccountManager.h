/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface FI_TICloudAccountManager : NSObject
{
    struct TriStateBool fUserSharingDocuments;
    struct TriStateBool fUserHasDeclinedUpgrade;
    struct TriStateBool fFirstSyncComplete;
    struct TriStateBool fAppSynchingDocuments;
    struct TNotificationCenterObserver _identityDidChangeObserver;
}

+ (_Bool)appSyncingDocuments;
+ (_Bool)showICloudDriveContent;
+ (_Bool)firstSyncCompleted;
+ (_Bool)userHasDeclinedUpgrade;
+ (_Bool)userIsSynchingDocuments;
+ (id)singleton;
+ (void)postStatusChange;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)appIsSyncingDocuments;
- (_Bool)firstSyncHasCompleted;
- (_Bool)hasDeclinedUpgrade;
- (_Bool)isSynchingDocuments;
- (_Bool)computeLoginState;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
