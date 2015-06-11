//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GestureSnapshotSwipeView, TabContentView;

__attribute__((visibility("hidden")))
@interface GestureSwipeController : NSObject
{
    TabContentView *_tabContentView;
    BOOL _isPotentiallyEligibleForBackForwardScrollSwipe;
    BOOL _waitingForResponseFromWebKit;
    BOOL _webKitDidNotHandleEvent;
    struct CGSize _cumulativeScrollDeltaForCurrentGesture;
    GestureSnapshotSwipeView *_gestureSnapshotSwipeView;
}

@property(nonatomic) TabContentView *tabContentView; // @synthesize tabContentView=_tabContentView;
@property BOOL webKitDidNotHandleEvent; // @synthesize webKitDidNotHandleEvent=_webKitDidNotHandleEvent;
@property(retain) GestureSnapshotSwipeView *gestureSnapshotSwipeView; // @synthesize gestureSnapshotSwipeView=_gestureSnapshotSwipeView;
- (id).cxx_construct;
- (BOOL)_canSwipeForwardInPage:(struct OpaqueWKPage *)arg1;
- (BOOL)_canSwipeBackInPage:(struct OpaqueWKPage *)arg1;
- (BOOL)_canGoBackOrForwardInHistoryForSwipeDirection:(int)arg1 withPage:(struct OpaqueWKPage *)arg2;
- (BOOL)_didScrollEnoughToAvoidAccidentalSwipe:(id)arg1;
- (int)_isEligibleForBackForwardScrollSwipe:(id)arg1;
- (BOOL)performGestureFromScrollEvent:(id)arg1;
- (void)close;
- (BOOL)_isClosed;
- (id)initWithTabContentView:(id)arg1;
- (id)init;

@end
