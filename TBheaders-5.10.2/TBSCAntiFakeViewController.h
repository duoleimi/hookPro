//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSLock, TBSCAntiFakeResultModel, TBSDKMTOPServer, UIView;
@protocol TBWebViewServiceProtocol;

@interface TBSCAntiFakeViewController : UIViewController
{
    NSDictionary *_dict;	// 8 = 0x8
    _Bool _clientVerifySucceed;	// 16 = 0x10
    double _loadingViewInitTime;	// 24 = 0x18
    _Bool _isRemoteVerifyFinished;	// 32 = 0x20
    _Bool _isWebViewLoadFinished;	// 33 = 0x21
    TBSDKMTOPServer *_verifyServer;	// 40 = 0x28
    UIView *_verifyView;	// 48 = 0x30
    UIView *_backView;	// 56 = 0x38
    UIView *_circleView;	// 64 = 0x40
    NSLock *_lock;	// 72 = 0x48
    UIViewController<TBWebViewServiceProtocol> *_webViewController;	// 80 = 0x50
    TBSCAntiFakeResultModel *_resultModel;	// 88 = 0x58
}

@property(retain, nonatomic) TBSCAntiFakeResultModel *resultModel; // @synthesize resultModel=_resultModel;
@property(nonatomic) _Bool isWebViewLoadFinished; // @synthesize isWebViewLoadFinished=_isWebViewLoadFinished;
@property(nonatomic) _Bool isRemoteVerifyFinished; // @synthesize isRemoteVerifyFinished=_isRemoteVerifyFinished;
@property(retain, nonatomic) UIViewController<TBWebViewServiceProtocol> *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *verifyView; // @synthesize verifyView=_verifyView;
@property(retain, nonatomic) TBSDKMTOPServer *verifyServer; // @synthesize verifyServer=_verifyServer;
- (void).cxx_destruct;
- (id)dataForUserTrack;
- (void)performSelectorAfterShownLoadingView:(SEL)arg1 withObject:(id)arg2;
- (void)showCompatibleLinkWebView:(id)arg1;
- (void)showDetailInfoWebView;
- (void)openDetailInfoWebView;
- (void)showErrorResult;
- (void)showWarningResult:(id)arg1;
- (void)buildCertInfoLabel:(id)arg1;
- (void)showNormalResult:(id)arg1;
- (void)tryShowResultView;
- (void)showRequestFailedView;
- (void)tryLoadDetailInfoWebView;
- (void)startRemoteVerify;
- (void)backItemClicked:(id)arg1;
- (void)setupBackView;
- (void)setupLoadingView;
- (void)releaseWebView;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDict:(id)arg1 clientVerifySucceed:(_Bool)arg2;

@end

