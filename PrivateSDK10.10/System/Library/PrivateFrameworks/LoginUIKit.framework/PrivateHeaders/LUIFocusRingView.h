/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSBitmapImageRep;

@interface LUIFocusRingView : NSView
{
    NSView *_focusedView;
    NSBitmapImageRep *_focusRingImageRep;
}

+ (void)showForView:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)_focusRingImageRepForView:(id)arg1;
- (void)setFocusedView:(id)arg1;

@end
