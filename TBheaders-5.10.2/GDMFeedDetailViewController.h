//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMViewController.h"

#import "GDMFDComponentDelegate-Protocol.h"
#import "TBAVPlayerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GDMDetailButtomBannerView, GDMFDPicIndexManager, GDMFeedDetailRequest, NSArray, NSNumberFormatter, NSString, TBAVPlayerView, TBSCPraiseOperation, UIScrollView;

@interface GDMFeedDetailViewController : GDMViewController <GDMFDComponentDelegate, UIScrollViewDelegate, TBAVPlayerViewDelegate>
{
    NSArray *_components;	// 16 = 0x10
    UIScrollView *_contentScrollView;	// 24 = 0x18
    NSString *_feedId;	// 32 = 0x20
    GDMFeedDetailRequest *_request;	// 40 = 0x28
    NSString *_targetType;	// 48 = 0x30
    NSString *_subType;	// 56 = 0x38
    NSString *_sourceId;	// 64 = 0x40
    NSString *_spm;	// 72 = 0x48
    NSString *_scm;	// 80 = 0x50
    long long _commentCnt;	// 88 = 0x58
    GDMFDPicIndexManager *_picIndexManager;	// 96 = 0x60
    _Bool _isPraised;	// 104 = 0x68
    TBAVPlayerView *_playerView;	// 112 = 0x70
    GDMDetailButtomBannerView *_buttomBannerView;	// 120 = 0x78
    TBSCPraiseOperation *_praiseOperater;	// 128 = 0x80
    NSNumberFormatter *_formatter;	// 136 = 0x88
    NSString *_accountId;	// 144 = 0x90
    long long _praiseCnt;	// 152 = 0x98
}

@property long long praiseCnt; // @synthesize praiseCnt=_praiseCnt;
@property _Bool isPraised; // @synthesize isPraised=_isPraised;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) TBSCPraiseOperation *praiseOperater; // @synthesize praiseOperater=_praiseOperater;
@property(retain, nonatomic) GDMDetailButtomBannerView *buttomBannerView; // @synthesize buttomBannerView=_buttomBannerView;
@property(retain, nonatomic) TBAVPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (void)playerStalled;
- (void)playerFailedToPlayToEnd;
- (void)playerDidEndPlaying;
- (void)playerDidResume;
- (void)playerDidPause;
- (void)onMoivePlayCallBack:(id)arg1;
- (void)goToComment:(_Bool)arg1;
- (void)commentClickHandle:(_Bool)arg1;
- (void)shareBtnClicked:(id)arg1;
- (void)praiseBtnClicked:(id)arg1;
- (void)updateFeedPraisedCntBtn:(_Bool)arg1;
- (void)loadPraisedState;
- (void)buttomBannerViewAction:(id)arg1 atIndex:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)GDMFDComponentDidAskForOpenAllComment:(id)arg1;
- (void)GDMFDComponentDidAskForRelayout:(id)arg1;
- (void)startLoadRequest;
- (void)onReloadErrorCallBack;
- (id)utPageName;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)createPlayViewForVideo;
- (void)createViewWitComponents;
- (void)configInteractBar;
- (void)setUpButtomBannerView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

