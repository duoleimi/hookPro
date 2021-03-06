//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMirrorBaseViewController.h"

#import "MirrorViewControllerDelegate-Protocol.h"

@class NSString, UILongPressGestureRecognizer, UISlider, UITapGestureRecognizer, UIView, WVWebView;

@interface TBMirror4isvViewController : TBMirrorBaseViewController <MirrorViewControllerDelegate>
{
    _Bool _isBeauty;	// 8 = 0x8
    _Bool _webViewFold;	// 9 = 0x9
    int _makeUpType;	// 12 = 0xc
    int _cosmeticType;	// 16 = 0x10
    WVWebView *_welcomeWebView;	// 24 = 0x18
    UIView *_bgView;	// 32 = 0x20
    NSString *_webViewUrl;	// 40 = 0x28
    double _wvWebViewHeightRatio;	// 48 = 0x30
    double _wvWebViewHeight;	// 56 = 0x38
    CDUnknownBlockType _windVaneCallback;	// 64 = 0x40
    CDUnknownBlockType _shouldDownLoadFaceModelBlock;	// 72 = 0x48
    NSString *_cacheKeyFaceModel;	// 80 = 0x50
    UISlider *_slider;	// 88 = 0x58
    UIView *_barView;	// 96 = 0x60
    UILongPressGestureRecognizer *_longGes;	// 104 = 0x68
    UITapGestureRecognizer *_tapGes;	// 112 = 0x70
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGes; // @synthesize tapGes=_tapGes;
@property(retain, nonatomic) UILongPressGestureRecognizer *longGes; // @synthesize longGes=_longGes;
@property(nonatomic) _Bool webViewFold; // @synthesize webViewFold=_webViewFold;
@property(nonatomic) _Bool isBeauty; // @synthesize isBeauty=_isBeauty;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) NSString *cacheKeyFaceModel; // @synthesize cacheKeyFaceModel=_cacheKeyFaceModel;
@property(copy, nonatomic) CDUnknownBlockType shouldDownLoadFaceModelBlock; // @synthesize shouldDownLoadFaceModelBlock=_shouldDownLoadFaceModelBlock;
@property(copy, nonatomic) CDUnknownBlockType windVaneCallback; // @synthesize windVaneCallback=_windVaneCallback;
@property(nonatomic) double wvWebViewHeight; // @synthesize wvWebViewHeight=_wvWebViewHeight;
@property(nonatomic) double wvWebViewHeightRatio; // @synthesize wvWebViewHeightRatio=_wvWebViewHeightRatio;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(nonatomic) int cosmeticType; // @synthesize cosmeticType=_cosmeticType;
@property(nonatomic) int makeUpType; // @synthesize makeUpType=_makeUpType;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) WVWebView *welcomeWebView; // @synthesize welcomeWebView=_welcomeWebView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)bringWebViewToFront;
- (void)beautyDidFailedWithError:(id)arg1;
- (void)beautyDidSuccess;
- (void)makeUpDidFailedWithError:(id)arg1;
- (void)makeUpDidSuccess;
- (void)initMakeUpModuleDidFailedWithError:(id)arg1;
- (void)initMakeUpModuleDidSuccess;
- (_Bool)isSubViewAdded:(id)arg1;
- (void)arrowClick:(id)arg1;
- (void)closeWelComeView;
- (void)setWelcomeWebViewOpaque;
- (void)makeUpWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setUpWVWebView;
- (void)setupWelcomeWebViewWithUrl:(id)arg1;
- (id)dataForUserTrack;
- (void)didSupportMakeUp;
- (void)viewDidLoad;
- (id)initWithOrigin:(id)arg1 makeUpType:(int)arg2 cosmeticType:(int)arg3 webViewUrl:(id)arg4 height:(double)arg5;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

