/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol XMPPNegotiatedStreamDelegate
- (void)negotiatedStreamClosed:(id)arg1;
- (void)negotiatedStream:(id)arg1 errorOccurred:(id)arg2;
- (void)negotiatedStream:(id)arg1 receivedBytes:(char *)arg2 length:(unsigned int)arg3;
- (void)negotiatedStreamFinishedWritingData:(id)arg1;
@end

