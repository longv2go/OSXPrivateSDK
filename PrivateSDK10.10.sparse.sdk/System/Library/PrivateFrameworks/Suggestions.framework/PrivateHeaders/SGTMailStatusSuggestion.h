/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Suggestions/SGTSuggestion.h>

@interface SGTMailStatusSuggestion : SGTSuggestion
{
}

+ (id)mailStatusSuggestionWithStatusType:(long long)arg1;
+ (id)queryStringForStatusType:(long long)arg1;
+ (id)statusImageForStatusType:(long long)arg1;
+ (id)displayNameForMenuForStatusType:(long long)arg1;
+ (id)displayNameForStatusType:(long long)arg1;
+ (id)statusMatchingInput:(id)arg1;
+ (void)initialize;
+ (id)mailStatusCategory;
- (id)_propertyListRepresentation;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)queryStringFragment;
@property(readonly) long long statusType;
- (id)_identifier;
- (id)displayNameForMenu;
- (long long)scope;
- (id)scopes;
- (id)tokenImage;
- (id)tokenTitle;
- (id)initWithStatusType:(long long)arg1;

@end
