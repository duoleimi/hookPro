//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDNavigationBarAppearanceDelegate.h"
#import "MDStreamVideoPlayerDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"

@class MDAdvertiseDetailViewModel, MDStreamVideoPlayer, MDWebViewController, NSString, SKStoreProductViewController, UIButton, UIImageView, UIToolbar, UIView;

@interface MDAdvertiseDetailViewController : MDViewController <SKStoreProductViewControllerDelegate, MDNavigationBarAppearanceDelegate, MDStreamVideoPlayerDelegate>
{
    _Bool _viewAppeared;
    _Bool _needAutoPlay;
    _Bool _isWebFullScreen;
    UIView *_videoView;
    UIView *_bottomView;
    SKStoreProductViewController *_sKStoreProductViewController;
    MDWebViewController *_webController;
    UIButton *_returnButton;
    MDStreamVideoPlayer *_streamPlayer;
    UIImageView *_videoCoverImageView;
    UIButton *_videoPlayerButton;
    UIToolbar *_webTopToolBar;
    UIButton *_webTopButton;
    MDAdvertiseDetailViewModel *_viewModel;
    double _videoPlayedTime;
    double _currentVideoDuration;
}

+ (void)pushAdvertiseDetailViewControllerWithModel:(id)arg1;
@property(nonatomic) double currentVideoDuration; // @synthesize currentVideoDuration=_currentVideoDuration;
@property(nonatomic) double videoPlayedTime; // @synthesize videoPlayedTime=_videoPlayedTime;
@property(retain, nonatomic) MDAdvertiseDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isWebFullScreen; // @synthesize isWebFullScreen=_isWebFullScreen;
@property(retain, nonatomic) UIButton *webTopButton; // @synthesize webTopButton=_webTopButton;
@property(retain, nonatomic) UIToolbar *webTopToolBar; // @synthesize webTopToolBar=_webTopToolBar;
@property(nonatomic) _Bool needAutoPlay; // @synthesize needAutoPlay=_needAutoPlay;
@property(retain, nonatomic) UIButton *videoPlayerButton; // @synthesize videoPlayerButton=_videoPlayerButton;
@property(retain, nonatomic) UIImageView *videoCoverImageView; // @synthesize videoCoverImageView=_videoCoverImageView;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(nonatomic) MDStreamVideoPlayer *streamPlayer; // @synthesize streamPlayer=_streamPlayer;
@property(retain, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) MDWebViewController *webController; // @synthesize webController=_webController;
@property(retain, nonatomic) SKStoreProductViewController *sKStoreProductViewController; // @synthesize sKStoreProductViewController=_sKStoreProductViewController;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (_Bool)md_isCurrentCustomed;
- (id)md_CustomNavigationBar;
- (void)streamVideoPlayerIsPlayToEnd:(id)arg1;
- (void)streamVideoPlayer:(id)arg1 playStalledAtSeconds:(double)arg2;
- (void)streamVideoPlayer:(id)arg1 playToSeconds:(double)arg2;
- (void)streamVideoPlayer:(id)arg1 loadTimeRange:(CDStruct_e83c9415)arg2;
- (void)streamVideoPlayer:(id)arg1 isFailedLoadWithError:(id)arg2;
- (void)streamVideoPlayer:(id)arg1 isReadyToPlayWithDuration:(double)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)videoPlayedTimelog;
- (void)emptyAction;
- (void)setupNavigationBar;
- (void)setupVideoViewCoverView;
- (void)clickVideoAction;
- (void)back;
- (void)showStoreProductInApp:(id)arg1;
- (void)changeVideoCoverIconBaseStreamPlayerStatus;
- (void)showVideoCoverIcon:(_Bool)arg1;
- (void)changeVideoPlayIconBaseStreamPlayerStatus;
- (void)showVideoPlayerIcon:(_Bool)arg1;
- (long long)pathType;
- (int)streamVideoType;
- (int)coverType;
- (void)videoClean;
- (void)errorVideo;
- (void)doPause;
- (void)doStop;
- (void)doPlayWithLog;
- (void)doPlayFromZero;
- (void)doVideoPlayWithUUID:(id)arg1;
- (void)setWebViewContentTopInsets:(double)arg1;
- (void)scrollerToTop;
- (void)webFlowDownAction;
- (void)webFlowUpAction;
- (void)uninstallVideoPlayView;
- (void)setupVideoPlayView;
- (void)setupContentView;
- (void)addObserver;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

