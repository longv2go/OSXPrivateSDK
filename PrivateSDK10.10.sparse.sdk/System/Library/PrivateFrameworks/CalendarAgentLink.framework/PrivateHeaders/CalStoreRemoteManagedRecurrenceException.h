/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class CalStoreRemoteManagedEvent, NSDate;

@interface CalStoreRemoteManagedRecurrenceException : CalStoreRemoteManagedObject
{
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) CalStoreRemoteManagedEvent *masterEvent;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

