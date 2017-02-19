//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, ShakeHomePageTipView;

@interface ShakeHomePageService : NSObject
{
    _Bool _hasResult;	// 8 = 0x8
    _Bool _isPause;	// 9 = 0x9
    int _failCount;	// 12 = 0xc
    ShakeHomePageTipView *_homepageTipView;	// 16 = 0x10
    CDUnknownBlockType _animationViewCreated;	// 24 = 0x18
    NSMutableArray *_getHomepageDataServers;	// 32 = 0x20
    NSMutableArray *_times;	// 40 = 0x28
    NSString *_voiceFingerprintType;	// 48 = 0x30
    unsigned long long _error;	// 56 = 0x38
}

+ (id)shareInstance;
@property(nonatomic) _Bool isPause; // @synthesize isPause=_isPause;
@property(nonatomic) unsigned long long error; // @synthesize error=_error;
@property int failCount; // @synthesize failCount=_failCount;
@property _Bool hasResult; // @synthesize hasResult=_hasResult;
@property(retain, nonatomic) NSString *voiceFingerprintType; // @synthesize voiceFingerprintType=_voiceFingerprintType;
@property(retain, nonatomic) NSMutableArray *times; // @synthesize times=_times;
@property(retain, nonatomic) NSMutableArray *getHomepageDataServers; // @synthesize getHomepageDataServers=_getHomepageDataServers;
@property(copy, nonatomic) CDUnknownBlockType animationViewCreated; // @synthesize animationViewCreated=_animationViewCreated;
@property(retain, nonatomic) ShakeHomePageTipView *homepageTipView; // @synthesize homepageTipView=_homepageTipView;
- (void).cxx_destruct;
- (_Bool)isEnable:(long long)arg1;
- (void)enableShake:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;
- (_Bool)isShakeEnable;
- (void)animHideHomepageTips:(id)arg1;
- (void)onDestory;
- (void)onFailed:(id)arg1;
- (void)onNetworkFailed;
- (void)onSuccess:(id)arg1;
- (void)postGetHomepageData:(id)arg1;
- (void)processDefaultPolicy;
- (void)processPolicy3:(id)arg1;
- (void)processPolicy2:(id)arg1;
- (void)processPolicy1:(id)arg1;
- (_Bool)validPolicy:(id)arg1;
- (id)choosePolicy:(id)arg1;
- (void)onShake;
- (id)getTipView;
- (void)registerShakeSensor;
- (void)resumeService;
- (void)pauseService;
- (void)unregisterService;
- (void)clearStatus;
- (void)registerService:(CDUnknownBlockType)arg1;

@end
