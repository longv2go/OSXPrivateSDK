//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDate, NSString;

@protocol SSAddressResolutionObserver
- (void)resolvedBonjourName:(NSString *)arg1;
- (void)startedBonjourResolveAtTimestamp:(NSDate *)arg1;
- (void)resolvedAddresses:(NSArray *)arg1 withStatus:(int)arg2;
@end
