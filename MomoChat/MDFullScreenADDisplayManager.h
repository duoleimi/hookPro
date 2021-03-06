//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLAnimatedImageView, MDIAdApi, MDMoviePlayerController, UITapGestureRecognizer, UIView, UIWindow;

@interface MDFullScreenADDisplayManager : NSObject
{
    UIWindow *_fullScreenWindow;
    MDMoviePlayerController *_currentPlayer;
    FLAnimatedImageView *_animatedImageView;
    UIView *_adDispalyView;
    MDIAdApi *_iAdApi;
    UITapGestureRecognizer *_tapRecognizer;
}

+ (id)defaultFullScreenDisplayManager;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) MDIAdApi *iAdApi; // @synthesize iAdApi=_iAdApi;
@property(retain, nonatomic) UIView *adDispalyView; // @synthesize adDispalyView=_adDispalyView;
@property(retain, nonatomic) FLAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) MDMoviePlayerController *currentPlayer; // @synthesize currentPlayer=_currentPlayer;
@property(retain, nonatomic) UIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
- (void)doViewTapAction;
- (void)viewTapAction;
- (void)userSkip:(id)arg1;
- (id)delaySkipButton;
- (void)delayAnimate;
- (id)convertADLogsIfNeed:(id)arg1 adShowType:(long long)arg2;
- (void)handleFullScreenADLogs;
- (id)generateVideoThumb:(id)arg1;
- (void)reallyShowFullScreenADWithADDispalyVIew:(id)arg1;
- (void)prepareADShowingView;
- (void)showFullScreenAD:(_Bool)arg1;
- (void)fullADDidBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

