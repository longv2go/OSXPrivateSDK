//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem.h>

@interface SMSystem_GroupHeader : SMSystem
{
    int _headingType;
}

@property(readonly) int headingType; // @synthesize headingType=_headingType;
- (BOOL)selectableSystem;
- (BOOL)sortsToTop;
- (id)displayName;
- (int)systemType;
- (id)initHeadingForType:(int)arg1;

@end
