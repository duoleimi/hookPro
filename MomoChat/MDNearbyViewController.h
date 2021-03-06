//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "CLLocationManagerDelegate.h"
#import "CustomFilterViewControllerProtocol.h"
#import "MDNearbyCommonGuideViewDelegate.h"
#import "MDNearbyMatchEntryDelegate.h"
#import "MDNearbySubControllerProtocol.h"
#import "MDRedPacketBannerDelegate.h"
#import "NearbyHandlerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class MDNearbyCommonGuideView, MDNearbyHandler, MDNearbyMatchEntry, MDRedPacketBanner, MDRedPacketRankView, MDRegisterGuide, MDTextTipView, MFBarButtonItem, MomoGusetNoGuestIdView, NSString, UIImageView, UITableView, UIView;

@interface MDNearbyViewController : MDViewController <MDNearbyMatchEntryDelegate, MDNearbyCommonGuideViewDelegate, MDRedPacketBannerDelegate, CustomFilterViewControllerProtocol, UIActionSheetDelegate, UIScrollViewDelegate, CLLocationManagerDelegate, UIAlertViewDelegate, NearbyHandlerDelegate, MDNearbySubControllerProtocol>
{
    MFBarButtonItem *filterItem;
    UITableView *table;
    UIView *noDataTipView;
    MDNearbyHandler *nearbyHandler;
    _Bool _fromSegment;
    _Bool _isQuickMatchAnimationShrink;
    _Bool _isBannerTiming;
    _Bool _isFirstConfig;
    id <MomoTapScrollDelegate> _scrollDelegate;
    MDRegisterGuide *_registerGuide;
    MDNearbyMatchEntry *_quickMatchEnterView;
    MDTextTipView *_quickMatchTipView;
    MomoGusetNoGuestIdView *_noGuestIdView;
    MDRedPacketBanner *_redPacketBanner;
    MDRedPacketRankView *_redPacketRankingView;
    MDNearbyCommonGuideView *_guideView;
    double _startPosition;
    UIView *_redPacketRankCoverView;
    UIImageView *_backGroundImageView;
}

+ (void)pushToNearbyViewController;
@property(nonatomic) _Bool isFirstConfig; // @synthesize isFirstConfig=_isFirstConfig;
@property(nonatomic) _Bool isBannerTiming; // @synthesize isBannerTiming=_isBannerTiming;
@property(retain, nonatomic) UIImageView *backGroundImageView; // @synthesize backGroundImageView=_backGroundImageView;
@property(retain, nonatomic) UIView *redPacketRankCoverView; // @synthesize redPacketRankCoverView=_redPacketRankCoverView;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) _Bool isQuickMatchAnimationShrink; // @synthesize isQuickMatchAnimationShrink=_isQuickMatchAnimationShrink;
@property(retain, nonatomic) MDNearbyCommonGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) MDRedPacketRankView *redPacketRankingView; // @synthesize redPacketRankingView=_redPacketRankingView;
@property(retain, nonatomic) MDRedPacketBanner *redPacketBanner; // @synthesize redPacketBanner=_redPacketBanner;
@property(retain, nonatomic) MomoGusetNoGuestIdView *noGuestIdView; // @synthesize noGuestIdView=_noGuestIdView;
@property(retain, nonatomic) MDTextTipView *quickMatchTipView; // @synthesize quickMatchTipView=_quickMatchTipView;
@property(retain, nonatomic) MDNearbyMatchEntry *quickMatchEnterView; // @synthesize quickMatchEnterView=_quickMatchEnterView;
@property(retain, nonatomic) MDRegisterGuide *registerGuide; // @synthesize registerGuide=_registerGuide;
@property(nonatomic) id <MomoTapScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) _Bool fromSegment; // @synthesize fromSegment=_fromSegment;
@property(retain, nonatomic) MDNearbyHandler *nearbyHandler; // @synthesize nearbyHandler;
@property(retain, nonatomic) UIView *noDataTipView; // @synthesize noDataTipView;
@property(retain, nonatomic) MFBarButtonItem *filterItem; // @synthesize filterItem;
@property(retain, nonatomic) UITableView *table; // @synthesize table;
- (void)handleGuestIdRequestFinishNotification:(id)arg1;
- (void)nearbyCommonGuideViewShouleClose:(id)arg1;
- (void)handleNearbyCommonHeaderGuideView:(id)arg1;
- (void)nearbyMatchEntryDidClicked;
- (void)checkAndShowQuickMatchTipsView;
- (void)refreshEntryViewWithState:(long long)arg1;
- (void)handleQuickMatchEntryWithDict:(id)arg1;
- (void)handelChristamasData:(id)arg1;
- (void)preHandleChristmasData:(id)arg1;
- (void)timeIsOver;
- (void)redPacketBannerGoingAnimation;
- (void)redPacketBannerComingAnimation;
- (void)requestFinishWithResult:(id)arg1 netFrom:(unsigned long long)arg2;
- (void)beginReload;
- (void)lazyConfigDataIfNeeded;
- (void)reloadDataIfNeeded;
- (void)setScrollToTop:(_Bool)arg1;
- (void)refreshDataAfterUserInit;
- (void)scrollToTop;
- (void)didLogout;
- (void)dealloc;
- (void)viewDidUnload;
- (void)scrollViewWillEndVerticalDragging:(id)arg1 withVelocity:(struct CGPoint)arg2;
- (void)scrollViewDidEndVerticalDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndVerticalScroll:(id)arg1;
- (void)scrollViewDidVerticalScroll:(id)arg1;
- (void)scrollViewBeginVerticalDragging:(id)arg1;
- (void)doneLoadingTableViewData;
- (void)presentCustomFilterVC;  //弹出自定义筛选
- (void)reloadTableViewDataSource;
- (void)filterViewControllerClickConfirm:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didSelectFilter;
- (void)quickMatchEnterViewAnimationFold;
- (void)handleFailInView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshList;
- (void)resetLoadMore:(_Bool)arg1;
- (void)loadMore;
- (void)showFailAction:(id)arg1;
- (void)initPartUI;
- (void)refreshLeftButtonTitle:(id)arg1;
- (void)handleFilterChanedNotificaiton:(id)arg1;
- (void)returnItemClicked;
- (void)initNavBar;
- (void)initData;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleAutoRefreash;
- (void)addFooterRefresh:(_Bool)arg1;
- (void)updatTableFrame;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initFromSegment:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

