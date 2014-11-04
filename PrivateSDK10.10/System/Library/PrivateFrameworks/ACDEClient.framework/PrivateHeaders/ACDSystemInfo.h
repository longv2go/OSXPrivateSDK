/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ACMSystemInfoProtocol-Protocol.h"

@class ACFFingerPrint;

@interface ACDSystemInfo : NSObject <ACMSystemInfoProtocol>
{
    ACFFingerPrint *_fingerPrint;
}

- (id)systemVersion;
- (id)deviceModel;
- (id)uniqueDeviceIdentifier;
- (id)IPAddress;
- (id)MACAddress;
@property(readonly) ACFFingerPrint *fingerPrint;
- (void)dealloc;

@end
