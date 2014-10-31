//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

@class NSObject, NSTimer, NSWindow;

__attribute__((visibility("hidden")))
@interface BrowserApplication : NSApplication
{
    BOOL _isProcessingContextMenuEvent;
    BOOL _isClosingAllWindows;
    BOOL _isDockBouncingSuppressed;
    NSObject *_terminateSender;
    NSWindow *_windowForIncomingSheet;
    SEL _currentAction;
    double _lastMouseMoveTime;
    BOOL _isTrackingMouseDrag;
    double _lastMouseClickTime;
    double _lastMouseDragTime;
    double _lastKeyPressTime;
    double _lastPageVisitedTime;
    unsigned int _timeBetweenMouseClickDistribution[17];
    unsigned int _timeBetweenMouseDragDistribution[17];
    unsigned int _timeBetweenKeyPressDistribution[17];
    unsigned int _timeBetweenPageVisitDistribution[17];
    unsigned int _timeBetweenMouseMoveDistribution[17];
    BOOL _shouldLogPowerUsage;
    unsigned int _logPowerUsageRandomNumber;
    NSTimer *_usageLoggingTimer;
    double _usageLoggingTimeRemaining;
}

+ (id)safariFrameworkBundle;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)tryToTerminate;
- (void)terminate:(id)arg1;
- (void)setDockBouncingSuppressed:(BOOL)arg1;
- (BOOL)isDockBouncingSuppressed;
- (long long)requestUserAttention:(unsigned long long)arg1;
- (id)orderedWindows;
- (BOOL)isProcessingContextMenuEvent;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)anyWindowsVisible;
- (id)makeWindowsPerform:(SEL)arg1 inOrder:(BOOL)arg2;
- (void)tryToCloseAllWindows;
- (void)closeAllWindows:(id)arg1;
- (BOOL)isClosingAllWindows;
- (void)endModalSession:(struct _NSModalSession *)arg1;
- (struct _NSModalSession *)beginModalSessionForWindow:(id)arg1;
- (id)nextEventMatchingMask:(unsigned long long)arg1 untilDate:(id)arg2 inMode:(id)arg3 dequeue:(BOOL)arg4;
- (void)powerSourceChanged;
- (void)applicationDidResignActive;
- (void)applicationDidBecomeActive;
- (void)reportPageVisited;
- (void)_reportSafariUsage;
- (void)_pauseUsageLogging;
- (void)_resumeUsageLogging;
- (void)_resetUsageData;
- (BOOL)_shouldLogPowerUsage;
- (void)sendEvent:(id)arg1;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (SEL)currentAction;
- (id)targetForAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (id)windowForIncomingSheet;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)_logSafariUsage:(id)arg1;

@end
