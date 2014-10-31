//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem.h>

@class NSDictionary, NSImage, NSNumber;

@interface SMSystem_Generic : SMSystem
{
    NSNumber *iconID;
    NSDictionary *localizedDescription;
    NSNumber *genericType;
    NSImage *icon;
}

+ (id)createAirportPlaceHolder;
+ (id)createFirewirePlaceHolder;
+ (id)createNetworkPlaceHolder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)dealloc;
- (BOOL)mount;
- (id)systemDescription;
- (id)volumeName;
- (id)extendedDescription;
- (id)volumeIcon;
- (void)setOSTypeIconID:(unsigned int)arg1;
- (void)setGenericType:(int)arg1;
- (int)genericType;
- (int)systemType;
- (id)initWithLocalizedDescription:(id)arg1;

@end
