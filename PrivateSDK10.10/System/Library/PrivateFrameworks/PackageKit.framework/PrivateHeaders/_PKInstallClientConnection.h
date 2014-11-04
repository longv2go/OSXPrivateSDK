/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PKInstallServiceClient-Protocol.h"

@class NSString, NSXPCConnection;

@interface _PKInstallClientConnection : NSObject <PKInstallServiceClient>
{
    NSXPCConnection *_connection;
    id <PKInstallService> _proxy;
    id <PKInstallService> _blockingProxy;
    struct dispatch_semaphore_s *_sema;
}

- (void)installDidEndForToken:(id)arg1;
- (void)installDidBeginCommitForToken:(id)arg1;
- (void)installDidBeginForToken:(id)arg1;
- (void)invalidate;
- (BOOL)waitUntilDoneOrTimedOut;
- (BOOL)waitUntilDone;
- (void)signal;
- (id)blockingProxy;
- (id)proxy;
- (BOOL)isServiceRemote;
- (BOOL)connectToDaemon:(BOOL)arg1 privileged:(BOOL)arg2 clientObject:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
