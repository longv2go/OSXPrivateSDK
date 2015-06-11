/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface FMDLogger : NSObject
{
    BOOL _logLevelsMaxedOut;
    BOOL _logLocationIndicatorSent;
    BOOL _isInternalBuild;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(nonatomic) BOOL logLocationIndicatorSent; // @synthesize logLocationIndicatorSent=_logLocationIndicatorSent;
@property(nonatomic) BOOL logLevelsMaxedOut; // @synthesize logLevelsMaxedOut=_logLevelsMaxedOut;
- (void)maxOutLogging;
- (void)logAtLevel:(long long)arg1 facility:(id)arg2 filename:(const char *)arg3 lineNumber:(long long)arg4 function:(const char *)arg5 message:(id)arg6;
- (void)logSettingsDidChange;
- (id)init;

@end
