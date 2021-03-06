/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKCameraController.h>

@class VKAnimation;

// Not exported
@interface VKAnnotationTrackingCameraController : VKCameraController
{
    id <VKTrackableAnnotation> _annotation;
    id <VKTrackableAnnotationPresentation> _annotationPresentation;
    VKAnimation *_currentAnimation;
    struct VKPoint _currentAnimationStartPoint;
    struct VKPoint _currentAnimationStartCameraPosition;
    struct VKPoint _currentAnimationEndPoint;
    struct VKPoint _currentAnimationEndCameraPosition;
    double _pendingChangeDuration;
    VKAnimation *_currentHeadingAnimation;
    double _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    struct VKEdgeInsets _edgeInsets;
    long long _zoomStyle;
    struct {
        unsigned int hasPendingChange:1;
        unsigned int paused:1;
        unsigned int trackingHeading:1;
        unsigned int hasPendingHeadingChange:1;
        unsigned int isInitialRegionChange:1;
        unsigned int isJumpingToAnnotation:1;
        unsigned int annotationImplementsAccuracy:1;
        unsigned int annotationImplementsHeading:1;
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval:1;
        unsigned int annotationImplementsExpectedHeadingUpdateInterval:1;
    } _flags;
}

@property(nonatomic) long long zoomStyle; // @synthesize zoomStyle=_zoomStyle;
@property(readonly, nonatomic) id <VKTrackableAnnotation> annotation; // @synthesize annotation=_annotation;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (BOOL)isAnimating;
- (void)setGesturing:(BOOL)arg1;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2;
- (void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3;
- (void)updateFramerate;
@property(readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
- (void)dealloc;

@end

