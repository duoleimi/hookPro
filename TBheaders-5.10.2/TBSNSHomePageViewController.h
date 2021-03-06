//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

@class NSDictionary, NSString, TBSNSGuiderPageView, TBSNSHomePageView;

@interface TBSNSHomePageViewController : TBViewController
{
    int _currentTab;	// 12 = 0xc
    NSString *textString;	// 16 = 0x10
    _Bool isGuilderShowed;	// 24 = 0x18
    double _lastPraiseTime;	// 32 = 0x20
    TBSNSHomePageView *_hv;	// 40 = 0x28
    TBSNSGuiderPageView *_guiderView;	// 48 = 0x30
    NSDictionary *_nextPageProperties;	// 56 = 0x38
}

+ (_Bool)tbNeedNavibar;
@property(retain, nonatomic) NSDictionary *nextPageProperties; // @synthesize nextPageProperties=_nextPageProperties;
@property(retain, nonatomic) TBSNSGuiderPageView *guiderView; // @synthesize guiderView=_guiderView;
@property(retain, nonatomic) TBSNSHomePageView *hv; // @synthesize hv=_hv;
- (void).cxx_destruct;
- (void)festivalSwitchingNotification:(id)arg1;
- (void)orangeGroupConfig:(id)arg1;
- (void)switchToWeitaoTab:(id)arg1;
- (void)clickWeitaoHomePageTab:(id)arg1;
- (void)onUserLoggedOut:(id)arg1;
- (void)onUserLoggedIn:(id)arg1;
- (void)onUserLoggedOutOnMainThread;
- (void)onUserLoginOnMainThread;
- (void)listenNotifications;
- (void)didReceiveMemoryWarning;
- (id)moreButtonItem;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)popupGuider;
- (void)viewDidLoad;
- (void)loadView;
- (void)setCurrentTab:(int)arg1;
- (void)assureHomeViewCreated;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

