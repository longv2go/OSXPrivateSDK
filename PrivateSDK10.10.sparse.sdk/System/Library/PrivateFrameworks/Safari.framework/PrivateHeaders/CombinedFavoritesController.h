/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSet, NSString, WebBookmarkList;

// Not exported
@interface CombinedFavoritesController : NSObject
{
    NSSet *_canonicalURLsOfAllFavorites;
    Vector_3100def6 _frequentlyVisitedSites;
    NSString *_UUIDOfRootBookmarkList;
}

+ (id)sharedController;
@property(copy, nonatomic) NSString *UUIDOfRootBookmarkList; // @synthesize UUIDOfRootBookmarkList=_UUIDOfRootBookmarkList;
@property(readonly, nonatomic) const Vector_3100def6 *frequentlyVisitedSites; // @synthesize frequentlyVisitedSites=_frequentlyVisitedSites;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_touchIconsCacheWillPurge:(id)arg1;
- (void)_titleOfFrequentlyVisitedSiteDidChange:(id)arg1;
- (void)_frequentlyVisitedSitesDidChange:(id)arg1;
- (void)_bookmarksWereChanged:(id)arg1;
- (void)_favoritesContentsChanged;
- (void)_bookmarksWereReloaded:(id)arg1;
- (id)_affectedBookmarkInNotification:(id)arg1;
- (BOOL)_refreshFrequentlyVisitedSitesIfNecessary;
- (void)_collectCanonicalURLsOfAllFavorites;
- (void)combinedFavoritesGridViewControllerViewDidHide;
- (void)combinedFavoritesGridViewControllerViewWillShow;
@property(retain, nonatomic) WebBookmarkList *rootBookmarkListForFavorites;
- (id)init;

@end
