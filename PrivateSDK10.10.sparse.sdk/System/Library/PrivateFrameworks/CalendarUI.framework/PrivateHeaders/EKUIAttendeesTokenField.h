/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/EKUITokenField.h>

@interface EKUIAttendeesTokenField : EKUITokenField
{
    BOOL _isExpanded;
    struct CGSize _intrinsicContentSize;
}

@property BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)areAttendeesEditable;
- (id)attendeesViewController;
- (id)hitTest:(struct CGPoint)arg1;

@end
