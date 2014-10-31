//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPopoverDelegate.h"

@class CNContactPickerViewController, NSArray, NSPopover;

@interface CNContactPicker : NSObject <NSPopoverDelegate>
{
    NSPopover *_popover;
    CNContactPickerViewController *_viewController;
    NSArray *_displayedKeys;
    id <CNContactPickerDelegate> _delegate;
}

+ (id)supportedKeysToDisplay;
+ (id)makePlaceholderViewController;
+ (id)makePopulatedViewController;
+ (id)makeViewController;
+ (id)makePopoverWithDelegate:(id)arg1 contentViewController:(id)arg2;
- (void).cxx_destruct;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)traceUsageStatistics;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)close;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
@property __weak id <CNContactPickerDelegate> delegate;
@property(copy) NSArray *displayedKeys;
- (id)pickerScope;
- (void)dealloc;
- (id)init;

@end
