/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MBUIDelegate <NSObject>
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetWindowMessage:(id)arg1;
- (void)mbWebkitViewSetWindowTitle:(id)arg1;

@optional
- (void)mbWebkitViewTermsAndConditions:(id)arg1 completionHandler:(id)arg2;
- (void)mbWebkitViewSaveFile:(id)arg1 content:(id)arg2;
@end
