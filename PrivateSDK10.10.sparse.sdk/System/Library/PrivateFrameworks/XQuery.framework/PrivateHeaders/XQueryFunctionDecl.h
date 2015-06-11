/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, XQueryProlog, XQueryQName, XQueryTypeDeclaration;

// Not exported
@interface XQueryFunctionDecl : NSObject
{
    XQueryQName *_name;
    XQueryTypeDeclaration *_type;
    NSArray *_params;
    id _expr;
    XQueryProlog *_prolog;
}

+ (id)functionDecl:(id)arg1 forType:(id)arg2 withParams:(id)arg3 expr:(id)arg4 prolog:(id)arg5;
- (BOOL)isExternal;
- (id)prolog;
- (id)expr;
- (id)params;
- (id)type;
- (id)name;
- (id)initWithName:(id)arg1 forType:(id)arg2 withParams:(id)arg3 expr:(id)arg4 prolog:(id)arg5;
- (void)finalize;
- (void)dealloc;

@end
