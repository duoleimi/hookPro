//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WeAppCycleScrollViewDatasource-Protocol.h"
#import "WeAppCycleScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIPageControl, WeAppCycleScrollView;
@protocol TBSNSBannerViewDelegate;

@interface WeAppBasicBannerView : UIView <WeAppCycleScrollViewDatasource, WeAppCycleScrollViewDelegate, UIScrollViewDelegate>
{
    WeAppCycleScrollView *_bannerCycleScrollView;	// 8 = 0x8
    UIPageControl *_bannerPageControll;	// 16 = 0x10
    NSMutableArray *_dataArray;	// 24 = 0x18
    _Bool _isRounded;	// 32 = 0x20
    _Bool _isPageControlCenter;	// 33 = 0x21
    _Bool _isLoadFailed;	// 34 = 0x22
    id <TBSNSBannerViewDelegate> _delegate;	// 40 = 0x28
    UIButton *_bannerCloseButton;	// 48 = 0x30
    unsigned long long _bannerBoundWidth;	// 56 = 0x38
    Class _itemModel;	// 64 = 0x40
    Class _itemView;	// 72 = 0x48
}

@property(nonatomic) _Bool isLoadFailed; // @synthesize isLoadFailed=_isLoadFailed;
@property(retain, nonatomic) Class itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) Class itemModel; // @synthesize itemModel=_itemModel;
@property(nonatomic) unsigned long long bannerBoundWidth; // @synthesize bannerBoundWidth=_bannerBoundWidth;
@property(nonatomic) _Bool isPageControlCenter; // @synthesize isPageControlCenter=_isPageControlCenter;
@property(nonatomic) _Bool isRounded; // @synthesize isRounded=_isRounded;
@property(retain, nonatomic) UIButton *bannerCloseButton; // @synthesize bannerCloseButton=_bannerCloseButton;
@property(retain, nonatomic) WeAppCycleScrollView *bannerCycleScrollView; // @synthesize bannerCycleScrollView=_bannerCycleScrollView;
@property(nonatomic) id <TBSNSBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)csView:(id)arg1 pageAtIndex:(long long)arg2;
- (long long)numberOfPages:(id)arg1;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)didClickPage:(id)arg1 atIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)bannerClicked;
- (void)dealloc;
- (void)idle;
- (void)setStopScroll:(_Bool)arg1;
- (void)clear;
- (void)setScollViewBoundRect:(struct CGRect)arg1;
- (void)setBannerPageContollViewFrame;
- (void)setBannerViewFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)needReload:(id)arg1;
- (void)subviewRemoveFromBanner;
- (void)bannerScrollViewRelaod;
- (void)setLocalData:(id)arg1;
- (void)loadData;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

