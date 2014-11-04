/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray, NSString;

@interface EWSSyncFolderHierarchyResponseMessageType : EWSResponseMessageType
{
    NSString *_SyncState;
    BOOL _IncludesLastFolderInRange;
    NSArray *_Changes;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *Changes; // @synthesize Changes=_Changes;
@property(nonatomic) BOOL IncludesLastFolderInRange; // @synthesize IncludesLastFolderInRange=_IncludesLastFolderInRange;
@property(copy, nonatomic) NSString *SyncState; // @synthesize SyncState=_SyncState;
- (id)description;
- (void)dealloc;

@end
