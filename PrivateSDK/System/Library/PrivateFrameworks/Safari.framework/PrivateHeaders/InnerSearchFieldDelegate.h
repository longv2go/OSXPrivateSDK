//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextFieldDelegate.h"

__attribute__((visibility("hidden")))
@interface InnerSearchFieldDelegate : NSObject <NSTextFieldDelegate>
{
    struct TopSitesSearchField {
        struct TopSitesSearchFieldClient *;
        id;
        struct RetainPtr<InnerSearchFieldDelegate> {
            struct InnerSearchFieldDelegate *;
        };
        struct RetainPtr<BlackSearchFieldController>;
    } *_searchField;
    struct TopSitesSearchFieldClient *_client;
}

- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)stopForcingSearchFieldCancelButtonToShow;
- (void)startForcingSearchFieldCancelButtonToShow;
- (void)takeSearchStringFromSearchField:(id)arg1;
- (BOOL)searchFieldKeyUp:(id)arg1;
- (BOOL)searchFieldKeyDown:(id)arg1;
- (void)searchFieldLostFocus:(id)arg1;
- (void)searchFieldBecameFocused:(id)arg1;
- (void)searchCanceled:(id)arg1;
- (void)setSearchField:(TopSitesSearchField_787b253f *)arg1;
- (void)setClient:(struct TopSitesSearchFieldClient *)arg1;

@end
