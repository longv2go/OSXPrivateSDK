/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButton.h"

@class NSTimer;

@interface ILMediaBrowserClipboardButton : NSButton
{
    NSTimer *_dragTimer;
    id _delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
