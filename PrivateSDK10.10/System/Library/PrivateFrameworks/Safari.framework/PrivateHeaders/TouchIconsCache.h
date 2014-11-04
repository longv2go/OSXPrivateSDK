/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SiteMetadataImageCache.h>

@class NSMutableDictionary, NSMutableSet;

// Not exported
@interface TouchIconsCache : SiteMetadataImageCache
{
    NSMutableDictionary *_touchIconsDataForHosts;
    NSMutableSet *_pendingTouchIconRequestHosts;
}

+ (id)_imageDirectoryURL;
+ (const char *)_diskAccessQueueName;
+ (id)_cacheForTesting;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_didRemoveImageForKeyString:(id)arg1 quality:(int)arg2;
- (void)_notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 quality:(int)arg3;
- (void)_didFinishLoadingSettings;
- (void)_upgradeCacheVersionIfNeeded;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2;
- (BOOL)shouldRequestTouchIconForURLString:(id)arg1 allowRefresh:(BOOL)arg2;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)retainTouchIconForHost:(id)arg1;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURLString:(id)arg2;
- (void)saveTouchIconToDisk:(id)arg1 forHost:(id)arg2;
- (id)touchIconForURLString:(id)arg1;
- (id)init;

@end
