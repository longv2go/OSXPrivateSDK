//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSUserDefaults;

@interface MCSharedPreferencesController : NSObject
{
    NSUserDefaults *_sharedMailUserDefaults;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSUserDefaults *sharedMailUserDefaults; // @synthesize sharedMailUserDefaults=_sharedMailUserDefaults;
- (void)_preferencesChangedExternally:(id)arg1;
- (void)_postPreferencesDidChangeNotifications;
@property BOOL shouldCheckIntranetDomains;
@property(retain) NSArray *intranetDomains;
@property long long addressDisplayMode;
@property BOOL shouldExpandGroups;
@property(retain) NSString *defaultFromAddress;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end
