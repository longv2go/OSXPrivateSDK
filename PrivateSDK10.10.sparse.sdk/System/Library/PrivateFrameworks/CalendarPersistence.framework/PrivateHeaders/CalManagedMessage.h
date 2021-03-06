/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedObject.h>

#import "EKProtocolNotificationBoxMessage-Protocol.h"
#import "ETagObject-Protocol.h"

@class CalManagedDiff, CalManagedEvent, CalManagedMessageContents, CalManagedPrincipal, NSData, NSDate, NSDictionary, NSManagedObjectID, NSMutableSet, NSNumber, NSString;

@interface CalManagedMessage : CalManagedObject <EKProtocolNotificationBoxMessage, ETagObject>
{
    NSString *_path;
    NSString *_cachedClosestOccurrenceID;
    CalManagedMessage *_cachedBestMessageForDisplayAsInvitation;
    NSString *_eventServerFilename;
    BOOL _isIntentionallyDetached;
    BOOL _isIntentionallyReplyToAll;
    BOOL _notify;
}

+ (void)createMessagesForEventsInTheFutureMissingMessagesForPrincipal:(id)arg1;
+ (void)_createMessagesForFutureEvents:(id)arg1 forPrincipal:(id)arg2;
+ (id)_futureEventsNeedingNOBOsNeedingRepliesForPrincipal:(id)arg1;
+ (BOOL)_calendarShouldNotShowNOBOsNeedingReplies:(id)arg1;
+ (void)coalesceAndSetVisibiltyForMessageOnEvent:(id)arg1;
+ (unsigned long long)countMessagesForClass:(Class)arg1 WithManagedObjectContext:(id)arg2;
+ (id)messagesArrayForCalendarMainWindowWithManagedObjectContext:(id)arg1;
+ (id)newMessagesArrayForCalendars:(id)arg1 andPrincipals:(id)arg2 forClass:(Class)arg3 fromManagedObjectContext:(id)arg4;
+ (id)_messagesForCalendars:(id)arg1 forClass:(Class)arg2 context:(id)arg3;
+ (id)_messagesForPrincipals:(id)arg1 forClass:(Class)arg2 context:(id)arg3;
+ (id)nonEventNotificationTypes;
+ (BOOL)shouldDisplayNotificationForPrincipal:(id)arg1;
+ (BOOL)shouldDisplayNotificationForCalendar:(id)arg1;
+ (void)_filterMessages:(id)arg1;
+ (id)fetchRequestInboxMessagesInPrincipal:(id)arg1;
+ (id)fetchRequestNotificationMessagesInPrincipal:(id)arg1;
+ (id)notificationTypes;
+ (id)fetchRequestWithCalendars:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithCalendar:(id)arg1 forClass:(Class)arg2 inManagedObjectContext:(id)arg3;
+ (id)_formatString:(id)arg1 forClass:(Class)arg2;
+ (id)_stringForClass:(Class)arg1;
+ (Class)classForTask;
+ (Class)classForEvent;
+ (id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)sharedCalendarInvitesForClass:(Class)arg1 principals:(id)arg2 context:(id)arg3;
@property(retain) NSString *cachedClosestOccurrenceID; // @synthesize cachedClosestOccurrenceID=_cachedClosestOccurrenceID;
@property BOOL notify; // @synthesize notify=_notify;
@property BOOL isIntentionallyReplyToAll; // @synthesize isIntentionallyReplyToAll=_isIntentionallyReplyToAll;
@property BOOL isIntentionallyDetached; // @synthesize isIntentionallyDetached=_isIntentionallyDetached;
@property(retain) NSString *eventServerFilename; // @synthesize eventServerFilename=_eventServerFilename;
@property(readonly, nonatomic) NSNumber *messageTypeNumber;
- (void)fetchSenderImageWithDiameter:(double)arg1 andCompletionBlock:(id)arg2;
- (id)senderThatIsNotMe;
- (BOOL)hasOneSender;
- (BOOL)isSharedCalendarType;
- (BOOL)isInvitationType;
- (BOOL)_didRecurrenceChange;
- (BOOL)_didTimeChange;
- (id)descriptionStringForNotificationCenter:(BOOL)arg1 withToFieldIfNeeded:(BOOL)arg2;
- (id)descriptionStringForNotificationCenter:(BOOL)arg1;
- (id)descriptionString;
- (id)_commentString;
- (id)_dateString;
- (id)_nextOoccuranceDate;
- (id)_toDelegateNameString;
- (id)_fromSenderNameString;
- (id)senderNameFromAddressBook;
- (id)_senderNameString;
- (id)_senderNameStringForceAB:(BOOL)arg1;
- (id)titleString;
- (BOOL)isSharedCalendarNotification;
- (id)serverFilename;
@property(retain) NSString *eTag; // @dynamic eTag;
- (void)dealloc;
- (unsigned long long)numberAttendeesNotMe;
- (long long)compare:(id)arg1;
- (BOOL)respondsToActionType:(int)arg1;
- (unsigned long long)actionTypes;
- (BOOL)_representsCancelledEvent;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (void)awakeFromFetch;
- (void)_resetCachedValues;
@property(readonly) NSString *path;
- (BOOL)respondsToOK;
- (BOOL)isInvitation;
- (BOOL)_hasInvitationChildButNotInvitation;
- (id)bestChildMessageForDisplayAsInvitation;
- (void)_updateCachedBestMessageWithMessage:(id)arg1;
- (id)invitationChildren;
- (BOOL)isInvitationIgnoringChildren;
- (BOOL)hasError;
- (id)pathForMessageWithFilename:(id)arg1 principal:(id)arg2;
- (id)closestOccurrenceDate;
- (id)closestOccurrenceID;
- (BOOL)isOccurrenceIDInMessage:(id)arg1;
- (BOOL)shouldDisplayNotification;
- (BOOL)associatedWithNotificationCollection;
- (void)updateContentsWithData:(id)arg1;
@property(readonly, retain) NSData *contents;
- (BOOL)acceptSharingInvite;
- (id)calendarForSharedInvite;
@property(readonly) BOOL isVTODOOnlySharedCalendar;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain) NSString *attendeeComment; // @dynamic attendeeComment;
@property(retain) NSString *calendarName; // @dynamic calendarName;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(retain) NSMutableSet *childMessages; // @dynamic childMessages;
@property(retain) NSNumber *count; // @dynamic count;
@property(retain) NSNumber *createdCount; // @dynamic createdCount;
@property(retain) NSDate *dateStamp; // @dynamic dateStamp;
@property(readonly, copy) NSString *debugDescription;
@property(retain) NSNumber *deletedCount; // @dynamic deletedCount;
@property(readonly, copy) NSString *description;
@property(retain) CalManagedDiff *diff; // @dynamic diff;
@property(retain) NSString *error; // @dynamic error;
@property(retain) CalManagedEvent *event; // @dynamic event;
@property(retain) NSString *eventTitle; // @dynamic eventTitle;
@property(retain) NSString *filename; // @dynamic filename;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property BOOL isVisible; // @dynamic isVisible;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(retain) CalManagedMessage *masterMessage; // @dynamic masterMessage;
@property(retain) CalManagedMessageContents *messageContents; // @dynamic messageContents;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) CalManagedPrincipal *principal; // @dynamic principal;
@property BOOL responseInProgress; // @dynamic responseInProgress;
@property(retain) NSString *sender; // @dynamic sender;
@property(retain) NSString *senderFirstName; // @dynamic senderFirstName;
@property(retain) NSString *senderHREF; // @dynamic senderHREF;
@property(retain) NSString *senderLastName; // @dynamic senderLastName;
@property(retain) NSNumber *sequence; // @dynamic sequence;
@property int sharedCalendarAccess; // @dynamic sharedCalendarAccess;
@property(retain) NSString *sharedCalendarComponentType; // @dynamic sharedCalendarComponentType;
@property(retain) NSString *sharedCalendarPath; // @dynamic sharedCalendarPath;
@property(readonly) Class superclass;
@property int type; // @dynamic type;
@property(retain) NSNumber *updatedCount; // @dynamic updatedCount;

@end

