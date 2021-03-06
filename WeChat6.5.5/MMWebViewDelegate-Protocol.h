//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DeepLinkDef, MMWebViewController, NSDictionary, NSError, NSString, NSURL, UIWebView;

@protocol MMWebViewDelegate <NSObject>

@optional
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)accessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (_Bool)canAccessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (void)setCanShake:(_Bool)arg1;
- (void)onWebViewWillClose:(NSDictionary *)arg1;
- (void)onWebViewDidRotateFromInterfaceOrientation:(long long)arg1;
- (void)onWebViewWillRotateToInterfaceOrientation:(long long)arg1;
- (void)onWebViewDidFinishLoad:(UIWebView *)arg1;
- (void)onWebViewDidStartLoad:(UIWebView *)arg1;
- (NSURL *)webViewFailToLoad:(NSError *)arg1;
- (void)webViewReturn:(MMWebViewController *)arg1;
@end

