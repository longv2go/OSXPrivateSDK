/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISS_MMTransactionGenerator-Protocol.h"
#import "MMSecurity-Protocol.h"

@class NSLock, NSString;

@interface ISS_MMiDiskSession : NSObject <ISS_MMTransactionGenerator, MMSecurity>
{
    id _credentials;
    NSString *_owner;
    id _delegate;
    BOOL _use_synchronous;
    double _lockDuration;
    id _session_data;
    BOOL _checked;
    BOOL _checkPreAuth;
    BOOL _auto_dispatch;
    BOOL _normalize;
    BOOL _secure;
    NSLock *_auth_lock;
    BOOL _ia_checked;
    NSLock *_ia_lock;
    id _comment_store;
    id _index_session;
    id _reporting_session;
    id _mp_config_session;
    id _client_id;
    id _my_private_ivars;
}

+ (BOOL)_initLockDictionary;
+ (id)_iDiskSessionWithAccount:(id)arg1 host:(id)arg2 port:(int)arg3 scheme:(id)arg4;
+ (id)_iDiskSessionWithCredentials:(id)arg1 owner:(id)arg2 host:(id)arg3 port:(int)arg4 scheme:(id)arg5;
+ (id)iDiskSessionWithAccount:(id)arg1;
+ (id)iDiskSessionWithCredentials:(id)arg1 andOwner:(id)arg2;
+ (id)iDiskSessionWithCredentials:(id)arg1;
+ (void)initialize;
- (id)_accessRightsRequestPostHandler:(id)arg1;
- (id)resetAccessToChildrenOfEntity:(id)arg1;
- (id)setAccess:(id)arg1 toEntity:(id)arg2 forPrincipals:(id)arg3;
- (id)accessToEntity:(id)arg1 forPrincipal:(id)arg2;
- (id)accessToEntity:(id)arg1 forPrincipals:(id)arg2;
- (id)_accessRights:(id)arg1 atPath:(id)arg2 forPrincipal:(id)arg3;
- (id)_versionInfoPostHandler:(id)arg1;
- (id)versionInfoForResourceAtPath:(id)arg1 withQualifiers:(id)arg2;
- (id)accessToEntity:(id)arg1;
- (id)setAccess:(id)arg1 toEntity:(id)arg2;
- (id)effectiveAccessToEntity:(id)arg1 forPrincipal:(id)arg2;
- (void)_addQueryParameters:(id)arg1 toRequest:(id)arg2;
- (void)_addHeaders:(id)arg1 toRequest:(id)arg2;
- (BOOL)_doUseSecureConfigURL;
- (void)_setDoUseSecureConfigURL:(BOOL)arg1;
- (BOOL)_doCheckPreAuth;
- (void)_setDoCheckPreAuth:(BOOL)arg1;
- (BOOL)_doNormalizePaths;
- (void)_setDoNormalizePaths:(BOOL)arg1;
- (id)_contentType;
- (void)_setContentType:(id)arg1;
- (BOOL)_useBasicAuth;
- (void)_setUseBasicAuth:(BOOL)arg1;
- (BOOL)_addTrustHeader;
- (void)_setTrustHeaderValue:(id)arg1;
- (void)_setAddTrustHeader:(BOOL)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_setOwner:(id)arg1;
- (id)owner;
- (unsigned int)_readTimeOut;
- (id)_failedTransactionWithRequest:(id)arg1 error:(id)arg2;
- (void)_setReadTimeOut:(unsigned int)arg1;
- (id)_dispatchRequest:(id)arg1 withPostHandler:(SEL)arg2 requiringResult:(BOOL)arg3;
- (id)_dispatchRequest:(id)arg1 withPostHandler:(SEL)arg2 andNotes:(id)arg3 requiringResult:(BOOL)arg4;
- (id)_dispatchRequest:(id)arg1 requiringResult:(BOOL)arg2;
- (id)_iDiskPathForURI:(id)arg1;
- (id)_recentLockTokens;
- (BOOL)_hasPublicUsername;
- (id)_indexingAuthLock;
- (BOOL)_isIndexingAuthChecked;
- (void)_setIsIndexingAuthChecked:(BOOL)arg1;
- (id)_authLock;
- (BOOL)_isChecked;
- (void)_setIsChecked:(BOOL)arg1;
- (id)_reportingSession;
- (void)_setReportingSession:(id)arg1;
- (id)_mobilePublishConfigSession;
- (void)_setMobilePublishConfigSession:(id)arg1;
- (id)_indexSession;
- (void)_setIndexSession:(id)arg1;
- (id)_sessionData;
- (void)_setSessionData:(id)arg1;
- (id)_propFindRequestPostHandler:(id)arg1;
- (id)_issuePropFindAtPath:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 includingParent:(BOOL)arg4;
- (id)_issuePropFindAtPath:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3;
- (id)_issuePropFindAtPath:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 inNameSpace:(id)arg4;
- (id)_issuePropPatchAtPath:(id)arg1 updatingProps:(id)arg2 inNameSpace:(id)arg3;
- (id)_issuePropPatchAtPath:(id)arg1 updatingProps:(id)arg2;
- (id)_createXMLDataForReportingInfo:(id)arg1;
- (id)_sendReportingInfo:(id)arg1;
- (id)_lockIdentifierForURI:(id)arg1;
- (id)_defaultClientID;
- (id)_clientID;
- (void)_setClientID:(id)arg1;
- (id)_sourceID;
- (id)_sourceId;
- (void)_setAccount:(id)arg1;
- (void)_releaseCredentials;
- (void)_setCredentials:(id)arg1;
- (id)_queryServerForLockToken:(id)arg1;
- (void)_removeLockTokenForURI:(id)arg1;
- (void)_setLockToken:(id)arg1 forURI:(id)arg2 withDuration:(double)arg3;
- (id)_lockTokenForURI:(id)arg1 orForParent:(BOOL)arg2;
- (id)_lockTokenForURI:(id)arg1;
- (BOOL)_initReportingSessionWithHost:(id)arg1 port:(int)arg2 scheme:(id)arg3;
- (BOOL)_initSessionDataWithHost:(id)arg1 port:(int)arg2 scheme:(id)arg3;
- (void)_checkPreAuth;
- (id)_createDictionaryFromAlias:(id)arg1;
- (id)_aliasesFromXMLData:(id)arg1;
- (id)_getEmailAliasesPostHandler:(id)arg1;
- (id)_getEmailAliasesIfModifiedSince:(id)arg1;
- (id)_quotaAttributesRequestPostHandler:(id)arg1;
- (id)quotaAttributes;
- (id)_listCollectionAtPath:(id)arg1 lookingForProps:(id)arg2;
- (id)_listRequestPostHandler:(id)arg1;
- (id)listCollectionAtPath:(id)arg1;
- (id)_accessRequestPostHandler:(id)arg1;
- (id)_accessAtPath:(id)arg1;
- (id)_attributes:(id)arg1 atPath:(id)arg2;
- (id)_attributesRequestPostHandler:(id)arg1;
- (id)extendedAttributesAtPath:(id)arg1;
- (id)_basicAttributesRequestPostHandler:(id)arg1;
- (id)basicAttributesAtPath:(id)arg1;
- (id)_doesResourceExistRequestPostHandler:(id)arg1;
- (id)doesResourceExistAtPath:(id)arg1;
- (BOOL)resourceExistsAtPath:(id)arg1;
- (id)_deleteRequestPostHandler:(id)arg1;
- (id)deleteResourceAtPath:(id)arg1;
- (id)renameResourceAtPath:(id)arg1 toPath:(id)arg2 allowingOverwrite:(BOOL)arg3;
- (id)_copySource:(id)arg1 toDestination:(id)arg2 allowingOverwrite:(BOOL)arg3;
- (id)_copySource:(id)arg1 toDestination:(id)arg2;
- (id)copyResourceAtPath:(id)arg1 toPath:(id)arg2 allowingOverwrite:(BOOL)arg3;
- (id)copyResourceAtPath:(id)arg1 toPath:(id)arg2;
- (id)_moveSource:(id)arg1 toDestination:(id)arg2 allowingOverwrite:(BOOL)arg3;
- (id)_moveSource:(id)arg1 toDestination:(id)arg2;
- (id)moveResourceAtPath:(id)arg1 toPath:(id)arg2 allowingOverwrite:(BOOL)arg3;
- (id)moveResourceAtPath:(id)arg1 toPath:(id)arg2;
- (id)_overlayRequestPostHandler:(id)arg1;
- (id)overlayResourceAtPath:(id)arg1 ontoPath:(id)arg2;
- (id)_makeCollectionsRequestPostHandler:(id)arg1;
- (id)_makeCollectionsAtPaths:(id)arg1;
- (id)_setPropertiesRequestPostHandler:(id)arg1;
- (id)_setPropertiesForResourcesAtPaths:(id)arg1;
- (id)_unzipRequestPostHandler:(id)arg1;
- (id)unzipArchiveAtPath:(id)arg1;
- (id)_unlockResourceAtPath:(id)arg1 usingLockToken:(id)arg2;
- (id)_unlockRequestPostHandler:(id)arg1;
- (id)unlockResourceAtPath:(id)arg1;
- (id)_relockResourceAtPath:(id)arg1 withDuration:(double)arg2 andOwner:(id)arg3;
- (id)relockResourceAtPath:(id)arg1 withDuration:(double)arg2;
- (id)relockResourceAtPath:(id)arg1;
- (id)_lockRequestPostHandler:(id)arg1;
- (id)_lockResourceAtPath:(id)arg1 withDuration:(double)arg2 andOwner:(id)arg3;
- (id)_lockResourceAtPath:(id)arg1 withDuration:(double)arg2 owner:(id)arg3 eTag:(id)arg4;
- (id)lockResourceAtPath:(id)arg1 withDuration:(double)arg2 andETag:(id)arg3;
- (id)lockResourceAtPath:(id)arg1 withETag:(id)arg2;
- (id)lockResourceAtPath:(id)arg1 withDuration:(double)arg2;
- (id)lockResourceAtPath:(id)arg1;
- (double)defaultLockDuration;
- (void)setDefaultLockDuration:(double)arg1;
- (id)_makePathRequestPostHandler:(id)arg1;
- (id)makeCollectionAtPath:(id)arg1 includingIntermediateCollections:(BOOL)arg2;
- (id)makeCollectionAtPath:(id)arg1;
- (id)_makeXMLRPCRequest:(id)arg1 toPath:(id)arg2;
- (id)_xmlrpcRequestPostHandler:(id)arg1;
- (id)_postData:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3;
- (id)putResourceAtPath:(id)arg1 toPath:(id)arg2;
- (id)putLocalFileAtPath:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3;
- (id)putLocalFileAtPath:(id)arg1 toPath:(id)arg2;
- (id)putData:(id)arg1 toPath:(id)arg2 withByteRange:(struct _NSRange)arg3 andHeaders:(id)arg4;
- (id)putData:(id)arg1 toPath:(id)arg2 withByteRange:(struct _NSRange)arg3;
- (id)putData:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3 rangeStart:(unsigned long long)arg4 rangeEnd:(unsigned long long)arg5;
- (id)putData:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3;
- (id)putData:(id)arg1 toPath:(id)arg2;
- (id)_createCollectionAtPath:(id)arg1 withProps:(id)arg2;
- (id)_uploadLocalFileAtPath:(id)arg1 toPath:(id)arg2 withProps:(id)arg3 andHeaders:(id)arg4;
- (id)_uploadLocalFileAtPath:(id)arg1 toPath:(id)arg2 withProps:(id)arg3;
- (id)_uploadData:(id)arg1 toPath:(id)arg2 withProps:(id)arg3 andHeaders:(id)arg4;
- (id)_uploadData:(id)arg1 toPath:(id)arg2 withProps:(id)arg3;
- (id)_genericRequestPostHandler:(id)arg1;
- (id)_issueRequestWithMethod:(id)arg1 path:(id)arg2 headers:(id)arg3 queryParameters:(id)arg4 andBody:(id)arg5;
- (id)_getRequestPostHandler:(id)arg1;
- (id)getDataAtPath:(id)arg1 withHeaders:(id)arg2 andQueryParameters:(id)arg3;
- (id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2 rangeStart:(unsigned long long)arg3 rangeEnd:(unsigned long long)arg4 localDestination:(id)arg5;
- (id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2 withByteRange:(struct _NSRange)arg3;
- (id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2;
- (id)getDataAtPath:(id)arg1;
- (id)_issueHeadForResourceAtPath:(id)arg1 withHeaders:(id)arg2;
- (id)credentials;
- (id)account;
- (BOOL)_isAutoDispatchEnabled;
- (void)_setIsAutoDispatchEnabled:(BOOL)arg1;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transactionDelegate;
- (void)setTransactionDelegate:(id)arg1;
- (void)_setUserAgent:(id)arg1;
- (int)_validateCredentialsWithPath:(id)arg1 andDAVSession:(id)arg2;
- (int)_validateSessionCredentials;
- (int)validateAccess;
- (id)init;
- (id)_initWithCredentials:(id)arg1 owner:(id)arg2 host:(id)arg3 port:(int)arg4 scheme:(id)arg5;
- (id)_initWithAccount:(id)arg1 host:(id)arg2 port:(int)arg3 scheme:(id)arg4;
- (id)initWithCredentials:(id)arg1 andOwner:(id)arg2;
- (id)initWithCredentials:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (BOOL)_synchronousTransactionStatus:(id)arg1 requiringResult:(BOOL)arg2;
- (id)_detailedContentsAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(char *)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (BOOL)movePath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (BOOL)_uploadLocalFileAtPath:(id)arg1 toPath:(id)arg2;
- (BOOL)_uploadPath:(id)arg1 toPath:(id)arg2;
- (BOOL)_downloadFile:(id)arg1 toPath:(id)arg2;
- (BOOL)_downloadDir:(id)arg1 toPath:(id)arg2;
- (BOOL)_downloadPath:(id)arg1 toPath:(id)arg2;
- (BOOL)copyPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;

@end

