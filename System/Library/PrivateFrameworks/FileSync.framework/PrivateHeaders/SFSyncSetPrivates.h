//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SFSyncSetPrivates : NSObject
{
    id _delegate;
    BOOL _registered;
    SEL _selector;
    unsigned long long _observerCount;
}

@property SEL selector; // @synthesize selector=_selector;
@property BOOL registered; // @synthesize registered=_registered;
@property unsigned long long observerCount; // @synthesize observerCount=_observerCount;
@property(retain) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end
