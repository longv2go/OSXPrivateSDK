//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface EWSDuration : NSObject
{
    NSDate *StartTime;
    NSDate *EndTime;
}

+ (id)definition;
@property(retain, nonatomic) NSDate *EndTime; // @synthesize EndTime;
@property(retain, nonatomic) NSDate *StartTime; // @synthesize StartTime;
- (void)dealloc;

@end
