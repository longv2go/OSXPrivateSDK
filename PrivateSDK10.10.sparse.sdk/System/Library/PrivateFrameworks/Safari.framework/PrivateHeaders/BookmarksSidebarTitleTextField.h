/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextField.h"

@class BookmarksSidebarTableCellView;

// Not exported
@interface BookmarksSidebarTitleTextField : NSTextField
{
    BookmarksSidebarTableCellView *_bookmarksSidebarTableCellView;
}

+ (void)initialize;
@property(nonatomic) __weak BookmarksSidebarTableCellView *bookmarksSidebarTableCellView; // @synthesize bookmarksSidebarTableCellView=_bookmarksSidebarTableCellView;
- (void).cxx_destruct;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (void)setBezeled:(BOOL)arg1;

@end
