//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CameraConfig : NSObject
{
}

+ (_Bool)tryShowAccessCameraAlert;
+ (_Bool)canAccessCamera;
+ (_Bool)isBlackCameraSize480x640;
+ (_Bool)isBlackCameraSize720x1280;
+ (_Bool)isBlackCameraSize1080x1920;
+ (struct CGSize)getBlackCameraSizeByPreset:(id)arg1;
+ (id)getBlackCameraPreset;

@end

