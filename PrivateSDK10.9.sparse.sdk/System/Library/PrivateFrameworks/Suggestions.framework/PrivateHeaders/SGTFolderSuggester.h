//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Suggestions/SGTSuggester.h>

@class NSURL;

@interface SGTFolderSuggester : SGTSuggester
{
    struct dispatch_queue_s *_queue;
    NSURL *_rootPath;
}

@property(retain) NSURL *rootPath; // @synthesize rootPath=_rootPath;
- (void)setInput:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (id)initWithRootPath:(id)arg1;

@end
