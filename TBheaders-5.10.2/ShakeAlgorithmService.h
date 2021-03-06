//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ShakeAlgorithm;

@interface ShakeAlgorithmService : NSObject
{
    ShakeAlgorithm *shakeAlgorithmX;	// 8 = 0x8
    ShakeAlgorithm *shakeAlgorithmY;	// 16 = 0x10
    ShakeAlgorithm *shakeAlgorithmZ;	// 24 = 0x18
    int shakeCount;	// 32 = 0x20
    int timeThreshold;	// 36 = 0x24
    int interval;	// 40 = 0x28
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)reset;
- (_Bool)isShake:(float *)arg1 shakNum:(int)arg2 shakeRange:(float)arg3;
- (id)init;

@end

