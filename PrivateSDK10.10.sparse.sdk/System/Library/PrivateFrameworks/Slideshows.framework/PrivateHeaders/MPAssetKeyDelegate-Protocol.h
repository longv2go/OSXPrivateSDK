/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPAssetKeyDelegate <NSObject>
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1;

@optional
- (struct CGImage *)cgImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (struct __IOSurface *)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct __IOSurface *)retainedIOSurfaceForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)detectRegionsOfInterestForAssetKey:(id)arg1;
- (id)imageDataForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)retainedCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
- (struct CGImage *)retainedThumbnailCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (struct CGImage *)retainedCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct CGImage *)retainedCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)attributesforAssetPath:(id)arg1;
- (id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3;
- (id)relativeTiledPathsForAssetWithAttributes:(id)arg1;
- (id)relativePathForAssetWithAttributes:(id)arg1;
- (struct CGSize)resolutionForAssetKey:(id)arg1;
- (id)updatedAssetPathForAssetPath:(id)arg1;
- (id)flightPlanFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (id)mapTileForPath:(id)arg1;
- (id)mapTileCenteredAt:(id)arg1 size:(struct CGSize)arg2 inset:(struct CGSize)arg3;
@end
