/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EWSDuration, EWSReplyBodyType;

@interface EWSUserOofSettingsType : NSObject
{
    long long _OofState;
    long long _ExternalAudience;
    EWSDuration *_Duration;
    EWSReplyBodyType *_InternalReply;
    EWSReplyBodyType *_ExternalReply;
}

+ (id)definition;
@property(retain, nonatomic) EWSReplyBodyType *ExternalReply; // @synthesize ExternalReply=_ExternalReply;
@property(retain, nonatomic) EWSReplyBodyType *InternalReply; // @synthesize InternalReply=_InternalReply;
@property(retain, nonatomic) EWSDuration *Duration; // @synthesize Duration=_Duration;
@property(nonatomic) long long ExternalAudience; // @synthesize ExternalAudience=_ExternalAudience;
@property(nonatomic) long long OofState; // @synthesize OofState=_OofState;
- (void)dealloc;

@end
