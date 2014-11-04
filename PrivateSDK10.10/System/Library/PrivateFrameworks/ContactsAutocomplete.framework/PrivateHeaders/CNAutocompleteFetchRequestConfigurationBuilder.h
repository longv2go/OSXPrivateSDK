/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CNAutocompleteNetworkActivityPolicy, CNAutocompleteResultTracing;

@interface CNAutocompleteFetchRequestConfigurationBuilder : NSObject
{
    id <CNAutocompleteSearchExecutor> _contactsExecutor;
    id <CNAutocompleteSearchExecutor> _recentsExecutor;
    id <CNAutocompleteSearchExecutor> _serverExecutor;
    CNAutocompleteNetworkActivityPolicy *_networkActivityPolicy;
    CNAutocompleteResultTracing *_tracer;
}

+ (id)builder;
- (void).cxx_destruct;
- (id)buildConfiguration;
- (void)setNetworkActivityPolicy:(id)arg1;
- (void)setServerExecutor:(id)arg1;
- (void)includeServers:(BOOL)arg1;
- (void)setRecentsExecutor:(id)arg1;
- (void)includeRecents:(BOOL)arg1;
- (void)setContactsExecutor:(id)arg1;
- (void)includeContacts:(BOOL)arg1;
- (id)init;

@end
