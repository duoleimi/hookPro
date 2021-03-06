//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIButton, UIWebView;

@interface TBOrderBannerView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;	// 8 = 0x8
    id _targetVC;	// 16 = 0x10
    UIButton *_closeButton;	// 24 = 0x18
    CDUnknownBlockType _closeButtonClicked;	// 32 = 0x20
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(copy, nonatomic) CDUnknownBlockType closeButtonClicked; // @synthesize closeButtonClicked=_closeButtonClicked;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) id targetVC; // @synthesize targetVC=_targetVC;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)closeButton:(id)arg1;
- (void)bindData:(id)arg1 controller:(id)arg2;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

