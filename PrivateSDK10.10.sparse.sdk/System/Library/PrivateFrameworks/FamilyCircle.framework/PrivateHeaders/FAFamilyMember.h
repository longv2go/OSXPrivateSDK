/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface FAFamilyMember : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(BOOL)arg2 completionHandler:(id)arg3;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 completionHandler:(id)arg2;
@property(readonly, nonatomic) BOOL hasLinkediTunesAccount;
@property(readonly, copy, nonatomic) NSString *iTunesAccountUsername;
@property(readonly, nonatomic) NSNumber *iTunesAccountDSID;
@property(readonly, nonatomic) BOOL hasAskToBuyEnabled;
@property(readonly, nonatomic) BOOL isParent;
@property(readonly, nonatomic) BOOL hasParentalControlsEnabled;
@property(readonly, nonatomic) BOOL isChildAccount;
@property(readonly, copy, nonatomic) NSString *inviteEmail;
@property(readonly, copy, nonatomic) NSString *statusString;
@property(readonly, copy, nonatomic) NSDate *joinedDate;
@property(readonly, copy, nonatomic) NSString *memberTypeString;
@property(readonly, copy, nonatomic) NSString *memberTypeDisplayString;
@property(readonly, nonatomic) unsigned long long age;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
@property(readonly, copy, nonatomic) NSString *hashedDSID;
@property(readonly, copy, nonatomic) NSNumber *dsid;
@property(readonly, copy, nonatomic) NSString *appleID;
@property(readonly, nonatomic) BOOL isMe;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

