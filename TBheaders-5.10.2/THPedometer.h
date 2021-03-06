//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMMotionManager, NSLock, NSOperationQueue;

@interface THPedometer : NSObject
{
    int _lastSteps;	// 8 = 0x8
    _Bool _pedometerActive;	// 12 = 0xc
    NSOperationQueue *_pedometerQueue;	// 16 = 0x10
    CDUnknownBlockType _pedometerHandler;	// 24 = 0x18
    CMMotionManager *_motionManager;	// 32 = 0x20
    NSOperationQueue *_accelerometerQueue;	// 40 = 0x28
    NSLock *_updateLock;	// 48 = 0x30
}

@property(retain, nonatomic) NSLock *updateLock; // @synthesize updateLock=_updateLock;
@property(retain, nonatomic) NSOperationQueue *accelerometerQueue; // @synthesize accelerometerQueue=_accelerometerQueue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(copy, nonatomic) CDUnknownBlockType pedometerHandler; // @synthesize pedometerHandler=_pedometerHandler;
@property(retain, nonatomic) NSOperationQueue *pedometerQueue; // @synthesize pedometerQueue=_pedometerQueue;
@property(nonatomic, getter=isPedometerActive) _Bool pedometerActive; // @synthesize pedometerActive=_pedometerActive;
- (void).cxx_destruct;
@property(readonly) int steps;
- (void)enterForeground;
- (void)enterBackground;
- (void)stopAccelerometer;
- (void)startAccelerometer;
- (_Bool)stopPedometerUpdates;
- (void)internalStartPedometer;
- (_Bool)startPedometerUpdates;
- (_Bool)startPedometerUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

