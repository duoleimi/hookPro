//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGVideoBaseViewController.h"

#import "TGVideoThumbViewDelegate-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, TGVideoThumbView, UILabel;

@interface TGVideoTrimmerViewController : TGVideoBaseViewController <TGVideoThumbViewDelegate>
{
    _Bool _popWhenDisappear;	// 8 = 0x8
    NSString *_needRemovePath;	// 16 = 0x10
    AVAsset *_originAsset;	// 24 = 0x18
    UILabel *_timeRecordedLabel;	// 32 = 0x20
    AVPlayer *_player;	// 40 = 0x28
    AVPlayerItem *_playerItem;	// 48 = 0x30
    AVPlayerLayer *_playerLayer;	// 56 = 0x38
    double _videoDuration;	// 64 = 0x40
    TGVideoThumbView *_trimmerView;	// 72 = 0x48
}

@property(nonatomic) _Bool popWhenDisappear; // @synthesize popWhenDisappear=_popWhenDisappear;
@property(retain, nonatomic) TGVideoThumbView *trimmerView; // @synthesize trimmerView=_trimmerView;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UILabel *timeRecordedLabel; // @synthesize timeRecordedLabel=_timeRecordedLabel;
@property(retain, nonatomic) AVAsset *originAsset; // @synthesize originAsset=_originAsset;
@property(retain, nonatomic) NSString *needRemovePath; // @synthesize needRemovePath=_needRemovePath;
- (void).cxx_destruct;
- (void)videoThumbView:(id)arg1 didChangePosition:(double)arg2;
- (void)handleCompleteBtnClick;
- (void)layoutPreview;
- (void)layoutBottomViewOffset;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)removeRecorderViewControllerFromNav;
- (void)viewDidLoad;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

