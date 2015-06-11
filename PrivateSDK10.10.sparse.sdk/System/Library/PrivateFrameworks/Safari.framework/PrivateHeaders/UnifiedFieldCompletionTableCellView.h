/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/TableCellViewWithCustomHighlightedViews.h>

@class NSLayoutConstraint, NSTextField;

// Not exported
@interface UnifiedFieldCompletionTableCellView : TableCellViewWithCustomHighlightedViews
{
    NSTextField *_textField;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (void).cxx_destruct;
- (void)_configureTextFieldForUseInCompletionList:(id)arg1;
- (void)_setUpTextField;
@property(nonatomic) double trailingSpace;
@property(nonatomic) double leadingSpace;
- (id)initWithFrame:(struct CGRect)arg1;

@end
