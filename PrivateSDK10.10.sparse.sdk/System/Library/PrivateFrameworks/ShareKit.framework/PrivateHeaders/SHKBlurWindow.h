/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ShareKit/SHKBorderlessEffectWindow.h>

@class CALayer;

@interface SHKBlurWindow : SHKBorderlessEffectWindow
{
    CALayer *blurLayer;
    BOOL animatesTransitions;
    unsigned long long _serviceMask;
}

@property unsigned long long serviceMask; // @synthesize serviceMask=_serviceMask;
@property BOOL animatesTransitions; // @synthesize animatesTransitions;
- (void).cxx_destruct;
- (void)animateBlurLayerToFrame:(struct CGRect)arg1 oldFrame:(struct CGRect)arg2;
- (void)startTransitionOut;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(BOOL)arg2 currentMediaTime:(double)arg3;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1 animate:(BOOL)arg2;
- (void)startBlurWithServiceScreenFrame:(struct CGRect)arg1 initialLayerTransform:(struct CGAffineTransform)arg2;
@property struct CGRect blurFrame;
- (id)initWithFrame:(struct CGRect)arg1 noSourceWindow:(BOOL)arg2;

@end

