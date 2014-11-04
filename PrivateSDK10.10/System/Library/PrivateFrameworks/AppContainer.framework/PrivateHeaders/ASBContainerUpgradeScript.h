/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface ASBContainerUpgradeScript : NSObject
{
    NSArray *_actions;
}

+ (id)scriptWithActions:(id)arg1;
+ (id)scriptToUnsymlinkPreferenceDomains:(id)arg1 error:(id *)arg2;
+ (id)scriptToSymlinkPreferenceDomains:(id)arg1 includeByHostPreferences:(BOOL)arg2 error:(id *)arg3;
+ (id)scriptToMigrateAutosaveDocumentsForApplicationWithBundleId:(id)arg1 error:(id *)arg2;
+ (id)scriptToMigratePreferencesOfApplicationWithBundleId:(id)arg1 error:(id *)arg2;
+ (id)scriptWithContentsOfMigrationManifestAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)runScriptWithContainer:(id)arg1 ignoringActionFailures:(BOOL)arg2 usingFileManager:(id)arg3 error:(id *)arg4;
- (void)enumerateActionsUsingBlock:(id)arg1;
- (id)scriptByAppendingScript:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)init;
- (void)dealloc;

@end
