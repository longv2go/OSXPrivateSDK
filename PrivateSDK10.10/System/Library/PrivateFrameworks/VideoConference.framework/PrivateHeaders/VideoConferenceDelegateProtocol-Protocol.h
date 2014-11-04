/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol VideoConferenceDelegateProtocol
- (void)vcc:(id)arg1 user:(id)arg2 approvedAuxiliaryInput:(BOOL)arg3;
- (BOOL)vcc:(id)arg1 userRequestedAuxiliaryInput:(id)arg2;
- (void)vccRemoteCertNotAccepted:(id)arg1 forParty:(id)arg2;
- (void)vccLocalCertNotAccepted:(id)arg1;
- (void)vcc:(id)arg1 securityChangedForUser:(id)arg2;
- (BOOL)vcc:(id)arg1 isRemoteCertificateValid:(struct OpaqueSecCertificateRef *)arg2 forUser:(id)arg3;
- (BOOL)shouldAcceptIncomingVideoConferenceRequestFromUser:(id)arg1;
- (BOOL)shouldAcceptIncomingVideoConferenceRequestFromUser:(id)arg1 callbackInfo:(id)arg2;
- (void)vcc:(id)arg1 party:(id)arg2 didStall:(BOOL)arg3;
- (void)vcc:(id)arg1 noPacketsFromParty:(id)arg2 partyInfo:(id)arg3;
- (void)vccLocalVideoError:(id)arg1;
- (void)vccNetworkTimeout:(id)arg1;
- (void)vccInsufficientBandwidth:(id)arg1 forParty:(id)arg2 partyInfo:(id)arg3;
- (void)vcc:(id)arg1 conferenceAttempted:(id)arg2;
- (void)vcc:(id)arg1 partyCancelled:(id)arg2;
- (void)vcc:(id)arg1 party:(id)arg2 didPause:(BOOL)arg3;
- (void)vcc:(id)arg1 party:(id)arg2 didMute:(BOOL)arg3;
- (void)vcc:(id)arg1 partyHungUp:(id)arg2;
- (void)vcc:(id)arg1 partyConnected:(id)arg2;
- (void)vcc:(id)arg1 initiateConferenceCompletedForParty:(id)arg2 partyInfo:(id)arg3;
- (void)vcc:(id)arg1 initiateConferenceStartedForParty:(id)arg2;
@end
