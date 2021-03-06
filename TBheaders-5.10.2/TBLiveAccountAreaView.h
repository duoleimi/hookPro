//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBLiveActionView, TBLiveBroadCasterHomeView, TBLiveDetailInfoViewModel, TBLiveMiniFollowButton, UIImageView, UILabel;

@interface TBLiveAccountAreaView : UIView
{
    _Bool _isBroadCaster;	// 8 = 0x8
    _Bool _isReplayView;	// 9 = 0x9
    UIImageView *_avatarView;	// 16 = 0x10
    UILabel *_accountName;	// 24 = 0x18
    UILabel *_location;	// 32 = 0x20
    UIImageView *_broadcastState;	// 40 = 0x28
    TBLiveDetailInfoViewModel *_liveDetailViewModel;	// 48 = 0x30
    TBLiveBroadCasterHomeView *_broadCasterHomeView;	// 56 = 0x38
    TBLiveActionView *_actionView;	// 64 = 0x40
    TBLiveMiniFollowButton *_miniFollowView;	// 72 = 0x48
}

@property(retain, nonatomic) TBLiveMiniFollowButton *miniFollowView; // @synthesize miniFollowView=_miniFollowView;
@property(retain, nonatomic) TBLiveActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) TBLiveBroadCasterHomeView *broadCasterHomeView; // @synthesize broadCasterHomeView=_broadCasterHomeView;
@property(retain, nonatomic) TBLiveDetailInfoViewModel *liveDetailViewModel; // @synthesize liveDetailViewModel=_liveDetailViewModel;
@property(retain, nonatomic) UIImageView *broadcastState; // @synthesize broadcastState=_broadcastState;
@property(retain, nonatomic) UILabel *location; // @synthesize location=_location;
@property(retain, nonatomic) UILabel *accountName; // @synthesize accountName=_accountName;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool isReplayView; // @synthesize isReplayView=_isReplayView;
@property(nonatomic) _Bool isBroadCaster; // @synthesize isBroadCaster=_isBroadCaster;
- (void).cxx_destruct;
- (void)updateBroadcastState;
- (void)onClickAvatarImg:(id)arg1;
- (void)dismissBroadCasterHomeView;
- (void)hiddenFollowHintView;
- (void)layoutMiniFollowButton;
- (void)refreshWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1 isBroadCaster:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

