//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OADFormula : NSObject
{
    int mType;
    struct OADFormulaArg mArgs[3];
    NSString *mName;
}

- (id).cxx_construct;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (struct OADFormulaArg)argAtIndex:(unsigned int)arg1;
- (int)type;
- (id)initWithType:(int)arg1 arg0:(struct OADFormulaArg)arg2 arg1:(struct OADFormulaArg)arg3 arg2:(struct OADFormulaArg)arg4;

@end
