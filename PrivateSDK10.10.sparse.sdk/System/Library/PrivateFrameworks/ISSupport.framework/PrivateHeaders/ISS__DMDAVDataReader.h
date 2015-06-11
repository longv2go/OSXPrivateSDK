/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DAVResponseBodyReader-Protocol.h"

@class NSMutableData;

@interface ISS__DMDAVDataReader : NSObject <DAVResponseBodyReader>
{
    NSMutableData *_data;
}

- (void)reset;
- (id)data;
- (void)request:(id)arg1 readResponseBody:(id)arg2;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(int)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
