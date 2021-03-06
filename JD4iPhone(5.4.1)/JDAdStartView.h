//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class JDAdStarViewModel, JDPageControl, JDTimerWeakObject, NSString, OpertationPicModel, UIButton, UIImageView, UILabel, UIScrollView;

@interface JDAdStartView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    JDPageControl *_pageControl;
    UIButton *_removeButton;
    UIButton *_nextButton;
    UIImageView *_nextImageView;
    UIView *_singleNextBgView;
    UIImageView *_imageView;
    UIView *_contentView;
    UILabel *_countLabel;
    UIImageView *_countDownBg;
    _Bool _isVisiable;
    id <JDAdStartViewDelegate> _delegate;
    CDUnknownBlockType _dismissBlock;
    JDAdStarViewModel *_startViewModel;
    JDTimerWeakObject *_timer;
    long long _currentIndex;
    NSString *_clp;
    OpertationPicModel *_curentPicModel;
}

@property(retain, nonatomic) OpertationPicModel *curentPicModel; // @synthesize curentPicModel=_curentPicModel;
@property(nonatomic) _Bool isVisiable; // @synthesize isVisiable=_isVisiable;
@property(retain, nonatomic) NSString *clp; // @synthesize clp=_clp;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) JDTimerWeakObject *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) JDAdStarViewModel *startViewModel; // @synthesize startViewModel=_startViewModel;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(nonatomic) __weak id <JDAdStartViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAutoDismiss;
- (void)reportStartViewRenderPerformance;
- (void)reportCloseButtonWithModel:(id)arg1;
- (void)reportViewClickedWithModel:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)topHalfViewCloseButtonAction:(id)arg1;
- (void)singleFloatViewClosedButtonAction:(id)arg1;
- (void)skipButtonAction:(id)arg1;
- (void)redirectToWebView:(id)arg1;
- (id)event_paramaValue2WithModel:(id)arg1;
- (id)event_paramaValueWithModel:(id)arg1;
- (void)doCounting;
- (_Bool)isNeedCount;
- (_Bool)checkLocalImagesIsAvailable;
- (void)checkSkipButtonIsAvailable;
- (void)disMissCurrentView;
- (void)startCounting;
- (void)startSkipAnimation;
- (void)hidenHalfView;
- (void)startHalfViewAnimation;
- (void)start;
- (_Bool)configAdStartViewWithData:(id)arg1;
- (void)createHalfAdStartImageView;
- (void)createMutabelAdStartImageView;
- (void)createFloatAdStartImageView;
- (void)createSigleAdStartImageView;
- (void)removeAllSubviews;
- (void)initTimer;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

