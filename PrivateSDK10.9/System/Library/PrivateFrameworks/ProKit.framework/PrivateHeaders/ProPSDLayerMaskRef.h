//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ProPSDLayerRef;

__attribute__((visibility("hidden")))
@interface ProPSDLayerMaskRef : NSObject
{
    ProPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (struct CGImage *)createCGImageMask;
- (id)bezierPathAtScale:(double)arg1;
- (id)bezierPath;
- (struct CGRect)bounds;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isEnabled;
- (BOOL)isLinked;
- (id)layerRef;
- (void)dealloc;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;

@end
