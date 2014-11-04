/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPathCell.h"

@interface NSProPathCell : NSPathCell
{
    struct __ppcFlags {
        unsigned int drawsImages:1;
        unsigned int reserved:31;
    } _ppcFlags;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (double)_navBarHeightForControlSize:(unsigned long long)arg1;
+ (id)_navBarFacet;
+ (Class)pathComponentCellClass;
- (void)setThemeVariant:(long long)arg1;
- (id)_proLabelFont;
- (void)setDrawsImages:(BOOL)arg1;
- (BOOL)drawsImages;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setPathStyle:(long long)arg1;
- (id)_titleAttributes;
- (id)_inActiveBackgroundColor;
- (id)_activeBackgroundColor;
- (void)_autoUpdateCellContents;
- (void)_resetImages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)_baseFacet;

@end
