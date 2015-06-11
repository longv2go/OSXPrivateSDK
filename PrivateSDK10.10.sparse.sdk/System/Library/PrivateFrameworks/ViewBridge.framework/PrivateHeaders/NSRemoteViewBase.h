/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "NSVBXPCConnectionClient-Protocol.h"
#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSAccessibilityRemoteUIElement, NSArray, NSMutableArray, NSMutableSet, NSObject, NSObject<NSRemoteViewDelegate>, NSProxy<NSXPCProxyCreating>, NSRemoteViewMarshal, NSSet, NSString, NSVBAccessoryWindow, NSViewBridge, NSWindow, NSXPCConnection, NSXPCInterface, NSXPCListenerEndpoint;

@interface NSRemoteViewBase : NSView <NSXPCListenerDelegate, NSXPCConnectionDelegate, NSVBXPCConnectionClient>
{
    NSMutableSet *_potentialKeyFocusThieves;
    unsigned char _shouldMaskToBounds;
    unsigned int _mouseDisassociatedFromMouseCursor;
    NSWindow *_lastKnownKeyTestWindow;
    unsigned long long _serviceWindowStyleMask;
    NSSet *_rendezvousWindowBridgeKeys;
    struct CGSize _serviceWindowFrameSizeAtBootstrap;
    struct CGSize _intrinsicContentSize;
    struct CGSize _windowContentMinSize;
    struct CGSize _windowContentMaxSize;
    unsigned char _bridgePhase;
    NSXPCListenerEndpoint *_serviceEndpoint;
    NSString *_serviceName;
    NSString *_serviceSubclassName;
    NSString *_rendezvousWindowIdentifier;
    NSRemoteViewMarshal *_remoteViewMarshal;
    unsigned int _isSettingWindowStyleMask:1;
    unsigned int _isSettingViewFrame:1;
    unsigned int _disabledSuddenTermination:1;
    unsigned int _warnedAboutAbsentBridge:1;
    unsigned int _hostWindowIsKnownToBeKey:1;
    unsigned int _invalid:1;
    unsigned int _serviceWindowKeynessChangeInProgress:1;
    unsigned int _serviceWindowIsKey:1;
    unsigned int _serviceTrustsRemoteKeyEvents:1;
    unsigned int _trustsServiceKeyEvents:1;
    unsigned int _alterFirstResponder:1;
    unsigned int _beganSheet:1;
    unsigned int _isSheetBeginning:1;
    unsigned int _hasSheetsBeginning:1;
    unsigned int _holdingPossibleWindowResizingMouseDown:1;
    unsigned int _registeredForAppNotifications:1;
    unsigned int _registeredForAppNapNotifications:1;
    unsigned int _fencingCurrentTransaction:1;
    unsigned int _allowsSuspensions:1;
    unsigned int _synchronizesImplicitAnimations:1;
    unsigned int _refuseFirstResponder:1;
    unsigned long long _containingWindowNotifications;
    unsigned long long _wrappedModifySubviewsInProgress;
    NSAccessibilityRemoteUIElement *_accessoryViewAccessibilityParent;
    NSArray *_remoteAccessibilityChildren;
    struct _NSModalSession *_appModalSession;
    id _remoteWindowLocalEventMonitor;
    id _processNotificationEventMonitor;
    NSMutableArray *_deferredSheets;
    NSXPCInterface *_clientExportedInterface;
    NSObject *_clientExportedObject;
    NSProxy<NSXPCProxyCreating> *_serviceViewControllerProxyWithClientInterface;
    NSProxy<NSXPCProxyCreating> *_serviceViewControllerProxyWithAnimationSyncInterface;
    int _appNapState;
    NSXPCConnection *_serviceMarshalConnection;
    unsigned int _refuseResignFirstResponder:1;
    unsigned int _accessoryViewVisible:1;
    NSMutableSet *_resizeTransactionsInProgress;
    unsigned int _serviceConnectionID;
    NSVBAccessoryWindow *_accessoryWindow;
    struct CGPoint _accessoryViewOrigin;
    struct NSObject *_delegate;
}

+ (BOOL)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(id)arg4;
+ (void)initAll;
+ (struct __CFString *)privateRunLoopMode;
+ (void)deferBlockOntoMainThread:(id)arg1;
+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
@property(retain) NSAccessibilityRemoteUIElement *accessoryViewAccessibilityParent; // @synthesize accessoryViewAccessibilityParent=_accessoryViewAccessibilityParent;
@property NSObject<NSRemoteViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *rendezvousWindowIdentifier; // @synthesize rendezvousWindowIdentifier=_rendezvousWindowIdentifier;
@property(retain) NSArray *remoteAccessibilityChildren; // @synthesize remoteAccessibilityChildren=_remoteAccessibilityChildren;
@property(retain) NSRemoteViewMarshal *remoteViewMarshal; // @synthesize remoteViewMarshal=_remoteViewMarshal;
@property(copy) NSString *serviceSubclassName; // @synthesize serviceSubclassName=_serviceSubclassName;
@property(copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property unsigned char bridgePhase; // @synthesize bridgePhase=_bridgePhase;
- (void)_endPrivateEventLoop:(id)arg1;
- (void)_beginPrivateEventLoop:(id)arg1;
- (void)_serviceDidFinishDisplayingAfterDidChangeAppearance;
- (void)_viewDidChangeAppearance:(id)arg1;
- (void)_addPotentialKeyFocusThief:(int)arg1;
- (void)_lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
- (id)_associateMouseAndMouseCursorPosition:(BOOL)arg1;
- (id)_addChildWindow:(id)arg1 windowBase:(unsigned char)arg2 ordered:(long long)arg3 frame:(struct CGRect)arg4;
- (void)_setServiceWindowEventMask:(unsigned long long)arg1;
- (BOOL)maintainAssociation;
- (BOOL)maintainAssociationForcingDisassociation:(BOOL)arg1;
- (BOOL)wouldAssociate;
- (void)_disassociate:(id)arg1;
- (void)_associate:(id)arg1;
- (void)updateAccessibilityConnection:(id)arg1 withReply:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)didSetOriginOrSize:(struct CGRect)arg1;
- (BOOL)shouldNotifyServiceOfChangeToHostOriginOrSize;
- (void)syncServiceWindow;
- (void)syncServiceWindow:(id)arg1;
- (BOOL)setServiceWindowOrigin;
- (BOOL)setServiceWindowOrigin:(const struct CGSize *)arg1;
- (void)_dragWindowRelativeToMouseDown:(struct CGPoint)arg1;
- (id)_suspendInFavorOfEndpoint:(id)arg1 serviceName:(id)arg2 serviceSubclassName:(id)arg3 serviceWindowIsKey:(BOOL)arg4 initialBridge:(id)arg5 completion:(id)arg6;
- (void)titleWindow:(id)arg1 serviceName:(id)arg2 serviceSubclassName:(id)arg3;
- (void)_slideWindowOntoScreen:(id)arg1 withDelegate:(id)arg2 andCompletion:(id)arg3;
- (void)remoteViewControllerProxy:(id)arg1;
- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (id)serviceViewControllerProxy:(const char *)arg1;
- (id)serviceViewControllerProxy;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)_ensureClientExportedObject;
- (void)_ensureClientExportedInterface;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (unsigned int)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)arg1;
- (void)setSynchronizesImplicitAnimations:(BOOL)arg1;
- (BOOL)synchronizesImplicitAnimations;
- (void)setAllowsSuspensions:(BOOL)arg1;
- (BOOL)allowsSuspensions;
- (void)retreatToConfigPhase;
- (void)sendKeyEventFromServiceAccessoryViewToRemoteAccessoryView:(id)arg1 eventOwner:(unsigned int)arg2 withReply:(id)arg3;
- (void)sendKeyEventFromServiceAccessoryViewToRemoteAccessoryView:(id)arg1;
- (void)discloseAccessoryView:(BOOL)arg1 withOffset:(struct CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (BOOL)_hasValidKeyViewInDirection:(unsigned long long)arg1;
- (void)_serviceViewReceivedLeftMouseDown;
- (id)serviceMarshalForRemoteViewWindow:(id)arg1;
- (void)_serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)_serviceWindowWouldActivate;
- (unsigned int)windowIDToPassToSetFrontProcess;
- (void)maintainWindowEventMonitor:(unsigned int)arg1;
- (void)remoteWindowReceivedEvent:(id)arg1;
- (void)_sendWindowFakeClick:(const char *)arg1;
- (void)sendEventBypassingSubclasses:(id)arg1 toWindow:(id)arg2;
- (void)updateContentMinSize:(struct CGSize)arg1;
- (void)updateAccessibilityChildren:(id)arg1;
- (void)endModalSession:(id)arg1;
- (BOOL)_beginModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)setAccessoryViewOrigin:(struct CGPoint)arg1;
- (void)forgetAccessoryView;
@property(retain) NSView *accessoryView;
- (void)ensureAccessoryWindow:(struct CGRect)arg1;
- (void)setAccessoryViewCanBecomeKeyView:(id)arg1;
- (void)setServiceAccessoryViewSize:(struct CGSize)arg1;
- (void)_setServiceWindowKeyness:(BOOL)arg1;
- (void)_adjustToServiceWindowKeyness;
- (void)_adjustToServiceWindowResigningKey;
- (void)_adjustToServiceWindowBecomingKey;
- (void)_serviceWindowKeynessChangeInProgress:(id)arg1;
- (BOOL)_isContentView;
- (void)_setServiceContextID:(unsigned int)arg1;
- (void)_setServiceWindowStyleMask:(unsigned long long)arg1;
- (BOOL)_adjustToServiceWindowStyleMask;
- (BOOL)_shouldAdjustToServiceStyleMask;
- (void)setWindow:(id)arg1 styleMask:(unsigned long long)arg2;
- (void)endAllModalSessions:(BOOL)arg1;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 withReply:(id)arg5;
- (void)beginDeferredSheets;
- (void)beginDeferredSheet:(id)arg1;
- (BOOL)beginAppModalSessionForWindow;
- (BOOL)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4;
- (id)rendezvousPanel:(struct CGRect)arg1 identifier:(id)arg2 childOrderingMode:(long long)arg3;
- (id)rendezvousWindow:(Class)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 content:(struct CGRect)arg4 identifier:(id)arg5 remoteViewClass:(Class)arg6 contentShouldMatchFrame:(BOOL)arg7;
- (void)_ensureBridgeObserversForWindow;
- (void)_ensureBridgeObserversForWindowBase:(unsigned char)arg1;
- (void)sheetCompleted:(id)arg1;
- (void)_serviceRequestsResize:(struct CGSize)arg1 animate:(BOOL)arg2 transaction:(id)arg3 completion:(id)arg4;
- (void)_serviceRequestsResize:(struct CGSize)arg1 animate:(BOOL)arg2 completion:(id)arg3;
- (void)_serviceWindowRequestsResizeInProgress:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (int)maintainFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2;
- (void)maintainFirstResponderInProgress:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)withoutCatchSupplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)serviceValidatesAction:(id)arg1 menuItem:(CDStruct_e99345e9 *)arg2 userInterfaceItem:(CDStruct_e99345e9 *)arg3 targetIdentifier:(id *)arg4;
- (void)setServiceObject:(id)arg1 forKey:(id)arg2;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)forwardKeyEventToService:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
@property(readonly) BOOL serviceTrustsRemoteKeyEvents;
- (struct NSObject *)viewServiceMarshalProxy:(const char *)arg1 withErrorHandler:(id)arg2;
- (id)wrapProxyForAnimationFencing:(id)arg1;
- (struct NSObject *)viewServiceMarshalProxy:(const char *)arg1;
- (void)advanceToConfigPhase:(id)arg1 awaitingWindowRights:(id)arg2;
- (void)_copyViewServiceMarshalReply:(const CDStruct_6343ed5c *)arg1;
- (void)_finishAdvanceToConfigPhase:(unsigned int)arg1;
- (void)advanceToConfigPhase;
- (BOOL)setServiceWindowBorderViewLayerContextID:(unsigned int)arg1;
- (BOOL)shouldMaskToBounds;
- (void)setShouldMaskToBounds:(BOOL)arg1;
- (void)adjustToServiceWindowContentMinMaxSizes;
- (id)serviceMarshalConnection;
- (void)_configureAndRetainServiceMarshalConnection:(id)arg1;
- (void)stopAwaitingWindowRights;
- (void)ensureRemoteViewMarshal;
- (void)applicationDidUnhide:(id)arg1;
- (void)applicationWillUnhide:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationHideUnhide:(unsigned long long)arg1 attempting:(const char *)arg2;
- (void)containingWindowWillOrderOffScreen:(id)arg1;
- (void)containingWindowDidOrderOnScreen:(id)arg1;
- (void)_allowAuxiliaryAppNap:(id)arg1;
- (void)_preventAuxiliaryAppNap:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)_hasLayerHost;
- (void)viewDidMoveToSuperview;
- (void)sendFontSmoothingBackgroundColorToServiceBasedOnWindow:(id)arg1;
- (void)sendFontSmoothingBackgroundColorToService:(id)arg1;
- (struct CGSize)accessoryWindowOffset:(struct CGPoint)arg1;
- (int)orderOutChildrenOfServiceWindow;
- (unsigned int)presenterConnectionID:(unsigned int)arg1;
- (unsigned int)eventReceieverConnectionID:(unsigned int)arg1;
- (BOOL)_willBecomeAssociatedWithRemoteWindow:(unsigned int)arg1 atLevel:(long long)arg2 withBlock:(id)arg3;
- (BOOL)_willBecomeAssociatedWithRemoteWindow:(unsigned int)arg1 withBlock:(id)arg2;
- (void)setRemoteAccessibilityChildrenTokens:(id)arg1;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityFocusedUIElement;
- (void)updateAccessoryViewAccessibility;
- (void)updateAccessoryViewAccessibilityParent:(id)arg1;
- (BOOL)advanceToRunPhaseIfNeeded;
- (BOOL)advanceToRunPhase;
- (void)orderWindow:(unsigned int)arg1 mode:(long long)arg2 relativeTo:(unsigned int)arg3;
- (void)wrappedAddSubview:(id)arg1;
- (Class)rendezvousWindowClass:(Class)arg1 contentShouldMatchFrame:(BOOL)arg2;
- (BOOL)_serviceHasTransparentChildWindowEntitlement;
- (BOOL)_serviceHasTrueValueForEntitlement:(id)arg1;
- (id)_copyServiceValueForEntitlement:(id)arg1;
- (BOOL)_serviceSignedByApple;
- (void)setSubviews:(id)arg1;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)addSubview:(id)arg1;
- (void)maintainAppNapNotifications:(BOOL)arg1;
- (void)maintainApplicationNotifications:(BOOL)arg1;
- (void)maintainWindowNotifications:(BOOL)arg1;
- (void)maintainContainingWindowNotifications:(BOOL)arg1;
- (void)maintainKeyTestWindowNotifications:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)remoteWindowLevelDidChange:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)_remoteViewBecameFirstResponder:(unsigned long long)arg1;
- (unsigned long long)_oldFirstResponderBeforeBecomingTextSelectionDirection;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)remoteWindowDidBecomeKey:(id)arg1;
- (void)remoteWindowDidResignKey:(id)arg1;
- (BOOL)evaluateKeyness;
- (BOOL)evaluateKeynessForWindow:(id)arg1;
- (BOOL)evaluateKeyness:(BOOL)arg1 forWindow:(id)arg2;
- (BOOL)shouldInformServiceOfKeynessChange:(id)arg1;
- (void)maintainProcessNotificationEventMonitor:(BOOL)arg1;
- (void)_synchronizeImplictAnimationsInActions:(id)arg1;
- (id)_semaphore;
- (void)_enableScreenUpdates:(id)arg1 afterDisableError:(id)arg2;
- (void)_remoteViewSizeDidChange:(struct CGSize)arg1 completion:(id)arg2;
- (BOOL)updateWindowEdgeResizingRegion;
- (BOOL)shouldUpdateWindowEdgeResizingRegion;
- (id)stolenKeyFocusEventFilter:(id)arg1;
- (id)keyTestWindow;
@property(readonly) NSViewBridge *bridge;
- (struct CGSize)serviceViewSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidate:(BOOL)arg1;
- (void)_invalidate:(BOOL)arg1;
- (void)invalidateWindowBridgeKeys;
- (void)invalidateWindowRelationships;
- (void)stopMonitoringEvents;
- (void)invalidate;
- (BOOL)windowRelationshipsHaveBroken:(int)arg1 attempting:(const char *)arg2;
@property(readonly) BOOL invalid;
@property BOOL alterFirstResponder;
@property BOOL trustsServiceKeyEvents;
- (void)dealloc;
- (void)deallocOnAppKitThread;
@property(readonly) BOOL hasBridge;
- (BOOL)isValid;
@property(readonly) BOOL valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
