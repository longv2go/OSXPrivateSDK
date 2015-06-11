//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSBitmapImageRep, NSRemoteServiceConnection, NSRemoteWindowController, NSWindow;

@interface NSRemoteAccessoryView : NSView
{
    NSRemoteWindowController *_windowController;
    NSWindow *_remoteWindow;
    long long _state;
    long long _initPredicate;
    struct dispatch_semaphore_s *_semaphore;
    NSBitmapImageRep *_snapshot;
    NSArray *_accessibilityChildren;
    BOOL _shouldSyncWindowPosition;
}

@property(retain) NSArray *accessibilityChildren; // @synthesize accessibilityChildren=_accessibilityChildren;
- (void)cacheDisplayInRect:(struct CGRect)arg1 toBitmapImageRep:(id)arg2;
- (id)bitmapImageRepForCachingDisplayInRect:(struct CGRect)arg1;
- (struct CGImage *)_getWindowSnapshotImageForWindowID:(long long)arg1 withShadow:(BOOL)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)controller:(id)arg1 hasWindowAvailable:(id)arg2;
- (struct CGPoint)absolutePosition;
- (void)syncWindowPosition;
- (void)disableWindowSynchronization;
- (void)enableWindowSynchronization;
- (void)disableSnapshot;
- (void)enableSnapshot;
- (void)setHidden:(BOOL)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_completeViewInit;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly) NSRemoteServiceConnection *connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 rights:(unsigned long long)arg2;

@end
