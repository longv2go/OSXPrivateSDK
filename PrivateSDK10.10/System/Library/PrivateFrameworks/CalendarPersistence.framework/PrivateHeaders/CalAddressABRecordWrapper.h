/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalAddressRecordWrapper.h>

@class ABAddressBook;

@interface CalAddressABRecordWrapper : CalAddressRecordWrapper
{
    ABAddressBook *_addressBook;
}

@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)record;
- (void)dealloc;
- (id)initWithABRecord:(id)arg1 address:(id)arg2;
- (id)initWithRecord:(id)arg1 address:(id)arg2;

@end
