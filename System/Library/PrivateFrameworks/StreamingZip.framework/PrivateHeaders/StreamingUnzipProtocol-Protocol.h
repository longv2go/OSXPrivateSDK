//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSObject<OS_dispatch_data>, NSObject<OS_xpc_object>, NSString, SZRemappableData;

@protocol StreamingUnzipProtocol
- (void)finishStreamWithReply:(void (^)(NSError *))arg1;
- (void)suspendStreamWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)supplyXPCData:(NSObject<OS_xpc_object> *)arg1 withReply:(void (^)(NSError *, BOOL))arg2;
- (void)supplyDispatchData:(NSObject<OS_dispatch_data> *)arg1 withReply:(void (^)(NSError *, BOOL))arg2;
- (void)supplyRemappableData:(SZRemappableData *)arg1 withReply:(void (^)(NSError *, BOOL))arg2;
- (void)supplyBytes:(NSData *)arg1 withReply:(void (^)(NSError *, BOOL))arg2;
- (void)setupUnzipperWithOutputPath:(NSString *)arg1 sandboxExtensionToken:(char *)arg2 md5Hashes:(NSArray *)arg3 hashedChunkSize:(unsigned long long)arg4 withReply:(void (^)(NSError *, unsigned long long))arg5;
@end
