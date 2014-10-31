//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ILMediaObject, NSError, NSMutableDictionary, NSString, QTMovie;

@interface ILMediaBrowserImageManagerLoadAttributesRequest : NSObject
{
    NSString *_path;
    ILMediaObject *_mediaObject;
    QTMovie *_movie;
    BOOL _movieIsDetached;
    NSError *_movieError;
    BOOL _doneWithMovieLoading;
    NSMutableDictionary *_cacheInfo;
}

@property BOOL doneWithMovieLoading; // @synthesize doneWithMovieLoading=_doneWithMovieLoading;
@property(retain) NSError *movieError; // @synthesize movieError=_movieError;
@property BOOL movieIsDetached; // @synthesize movieIsDetached=_movieIsDetached;
@property(retain) QTMovie *movie; // @synthesize movie=_movie;
@property(retain) NSMutableDictionary *cacheInfo; // @synthesize cacheInfo=_cacheInfo;
@property(retain) ILMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)init;

@end
