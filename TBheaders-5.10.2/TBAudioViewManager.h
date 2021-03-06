//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAudioRecordCallBackProtocol-Protocol.h"

@class NSString, NSTimer, TBAudioPlayer, TBAudioRecord, TBAudioWaveView, UIButton, UILabel, UIView;
@protocol TBAudioCallBackProtocol;

@interface TBAudioViewManager : NSObject <TBAudioRecordCallBackProtocol>
{
    float _recordTime;	// 8 = 0x8
    int _recordCount;	// 12 = 0xc
    double _duration;	// 16 = 0x10
    id <TBAudioCallBackProtocol> _callback;	// 24 = 0x18
    TBAudioWaveView *_waveView;	// 32 = 0x20
    UIView *_coverView;	// 40 = 0x28
    UIButton *_recordButtonView;	// 48 = 0x30
    UILabel *_textLabel;	// 56 = 0x38
    TBAudioRecord *_recorder;	// 64 = 0x40
    TBAudioPlayer *_player;	// 72 = 0x48
    NSTimer *_timer;	// 80 = 0x50
}

@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) float recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TBAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TBAudioRecord *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIButton *recordButtonView; // @synthesize recordButtonView=_recordButtonView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) TBAudioWaveView *waveView; // @synthesize waveView=_waveView;
@property(nonatomic) __weak id <TBAudioCallBackProtocol> callback; // @synthesize callback=_callback;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)updateMeters;
- (void)stopTimer;
- (void)startTimer;
- (void)recordFail:(id)arg1;
- (void)recordBeStopped:(id)arg1;
- (void)recordCancel;
- (void)recordEnd;
- (void)recordStart;
- (void)createView:(id)arg1 withColor:(id)arg2 withCallback:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

