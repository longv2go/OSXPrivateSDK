/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ExtensionContextMenuItemWrapper : NSObject
{
    struct RefPtr<Safari::ExtensionContextMenuItem> _contextMenuItem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ExtensionContextMenuItem *)contextMenuItem;
- (id)initWithItem:(struct ExtensionContextMenuItem *)arg1;

@end
