//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class MCAction, NSObject<MPActionSupport>;

@interface MPAction : NSObject <NSCoding, NSCopying>
{
    NSObject<MPActionSupport> *_parentObject;
    MCAction *_action;
    NSObject *_targetObject;
}

+ (id)action;
- (void)setAction:(id)arg1;
- (void)configureTarget;
- (void)setParent:(id)arg1;
- (id)parentDocument;
- (id)parent;
- (id)key;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSObject *targetObject; // @synthesize targetObject=_targetObject;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
