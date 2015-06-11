/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Parsec/PRSCardSection.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface PRSTextColumnsCardSection : PRSCardSection <NSCoding, NSSecureCoding>
{
    int _title_weight;
    NSArray *_columns;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) int title_weight; // @synthesize title_weight=_title_weight;
- (void).cxx_destruct;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dict:(id)arg2;
- (id)initWithTitle:(id)arg1 weight:(int)arg2 columns:(id)arg3;

@end
