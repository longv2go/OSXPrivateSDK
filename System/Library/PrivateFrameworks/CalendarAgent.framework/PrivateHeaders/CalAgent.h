//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICSLoggingDelegate.h"

@class CalAgentMessageEngine, CalAgentProxy, CalLimitingQueue, CalMemorySensor, CalSignalSensor, NSXPCStoreServer;

@interface CalAgent : NSObject <ICSLoggingDelegate>
{
    CalSignalSensor *_signalHandler;
    CalMemorySensor *_memorySensor;
    CalAgentMessageEngine *_messageEngine;
    CalAgentProxy *_proxy;
    NSXPCStoreServer *_storeServer;
    CalLimitingQueue *_reloadQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCStoreServer *storeServer; // @synthesize storeServer=_storeServer;
@property(retain, nonatomic) CalAgentMessageEngine *messageEngine; // @synthesize messageEngine=_messageEngine;
@property(retain, nonatomic) CalMemorySensor *memorySensor; // @synthesize memorySensor=_memorySensor;
@property(retain, nonatomic) CalSignalSensor *signalHandler; // @synthesize signalHandler=_signalHandler;
- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)setUpiCalendarPRODID;
- (void)setUpHTTPUserAgent;
- (unsigned long long)nextNodeOrder;
- (void)_loadNetworkObjectsAndSynchronizePropertiesWithPersistentStorage;
- (void)loadNetworkObjectsAndSynchronizePropertiesWithPersistentStorage;
- (void)_deleteDuplicateDelegates:(id)arg1;
- (void)exitWithStatus:(int)arg1;
- (void)verifyLaunchedByLaunchd;
- (void)shutdown;
- (void)setUpNotificationCenter;
- (void)setUpMessageEngine;
- (void)tearDownSignalHandler;
- (void)tearDownMemorySensor;
- (void)setUpSignalHandler;
- (void)setUpEventCounter;
- (void)setUpMemorySensor;
- (void)registerForXPCTimerStreamHandler;
- (void)start;
- (void)setupCoreDataServer;
- (void)dealloc;

@end
