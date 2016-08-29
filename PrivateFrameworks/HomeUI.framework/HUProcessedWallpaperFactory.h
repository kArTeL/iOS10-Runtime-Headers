/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)blurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)croppedImageFromWallpaper:(id)arg1 image:(id)arg2;
- (id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)processedImageForWallpaper:(id)arg1 image:(id)arg2;

@end