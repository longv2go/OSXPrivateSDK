/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <Safari/BrowserHistoryImporter-Protocol.h>

@class NSString;

// Not exported
@interface ChromeHistoryImporter : NSObject <BrowserHistoryImporter>
{
}

- (void)_importHistoryAfterChromeTime:(long long)arg1 delegate:(id)arg2;
- (int)_queryDatabase:(struct SQLiteDatabase *)arg1 forHistoryAfterChromeTime:(long long)arg2 delegate:(id)arg3;
- (int)_queryDatabase:(struct SQLiteDatabase *)arg1 forRedirectsAfterChromeTime:(long long)arg2 delegate:(id)arg3;
- (int)_queryDatabase:(struct SQLiteDatabase *)arg1 forNonRedirectedVisitsAfterChromeTime:(long long)arg2 delegate:(id)arg3;
- (BOOL)_openDatabaseAtURL:(id)arg1 andPerformBlock:(id)arg2;
- (int)_openCopyOfDatabaseAtURL:(id)arg1 andPerformBlock:(id)arg2;
- (void)importHistorySinceDate:(id)arg1 delegate:(id)arg2;
- (void)importEntireHistoryWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
