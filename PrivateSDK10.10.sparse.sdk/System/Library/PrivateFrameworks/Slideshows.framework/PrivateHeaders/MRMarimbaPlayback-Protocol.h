/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol MRMarimbaPlayback
@property(nonatomic) BOOL isAboutToPlay;
- (void)removeEffectContainersBeforeTime:(double)arg1;
- (void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2;
- (BOOL)isInTransition;
- (double)startTimeForSlide:(id)arg1;
- (double)timeForSlide:(id)arg1;
- (void)gotoText:(id)arg1;
- (void)gotoSlide:(id)arg1;
- (void)gotoPreviousSlide:(BOOL)arg1;
- (void)gotoNextSlide:(BOOL)arg1;
- (void)gotoPreviousSlide;
- (void)gotoNextSlide;
- (id)currentSlides;
- (id)currentSlide;
- (void)moveToSubtitleForSlide:(id)arg1;
- (void)moveToTitleSlide;
- (void)moveToPreviousEffectContainer;
- (void)moveToNextEffectContainer;
- (void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(BOOL)arg4;
- (id)displayedEffectContainers;
- (double)relativeTimeForLayer:(id)arg1;
- (double)relativeTimeForBackgroundAudio;
- (double)relativeTime;
@end
