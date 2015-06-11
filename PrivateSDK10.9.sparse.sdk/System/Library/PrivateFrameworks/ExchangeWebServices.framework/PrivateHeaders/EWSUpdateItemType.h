//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSUpdateItemType : EWSBaseRequestType
{
    EWSTargetFolderIdType *SavedItemFolderId;
    NSArray *ItemChanges;
    int ConflictResolution;
    long long MessageDisposition;
    int SendMeetingInvitationsOrCancellations;
}

+ (id)definition;
@property(nonatomic) int SendMeetingInvitationsOrCancellations; // @synthesize SendMeetingInvitationsOrCancellations;
@property(nonatomic) long long MessageDisposition; // @synthesize MessageDisposition;
@property(nonatomic) int ConflictResolution; // @synthesize ConflictResolution;
@property(retain, nonatomic) NSArray *ItemChanges; // @synthesize ItemChanges;
@property(retain, nonatomic) EWSTargetFolderIdType *SavedItemFolderId; // @synthesize SavedItemFolderId;
- (void)dealloc;

@end
