/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CalDAVCalendar-Protocol.h"

@class NSString, NSURL;

@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property(nonatomic) double refreshInterval;
@property(nonatomic) BOOL hasTaskFilter;
@property(nonatomic) BOOL hasAttachmentFilter;
@property(nonatomic) BOOL hasAlarmFilter;
@property(retain, nonatomic) NSURL *subscriptionURL;

@optional
@property(retain, nonatomic) NSString *languageCode;
@property(retain, nonatomic) NSString *locationCode;
@property(nonatomic) BOOL autoprovisioned;
@end
