//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MLIndexRecommendBarItem, MLIndexRecommendBg, NSDate, NSTimer, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface MLIndexRecommendBar : UIView
{
    _Bool _animationLock;
    int _headerIndexCount;
    UIImageView *_icon;
    UILabel *_label;
    UILabel *_subLabel;
    UIButton *_countMark;
    UIButton *_closeButton;
    MLIndexRecommendBg *_bg;
    UITapGestureRecognizer *_tapRecognizer;
    MLIndexRecommendBarItem *_item;
    MLIndexRecommendBarItem *_recommendItem;
    NSDate *_timeMark;
    NSTimer *_headerTimer;
    MLIndexRecommendBarItem *_tempItem;
}

@property(retain, nonatomic) MLIndexRecommendBarItem *tempItem; // @synthesize tempItem=_tempItem;
@property(nonatomic) _Bool animationLock; // @synthesize animationLock=_animationLock;
@property(nonatomic) int headerIndexCount; // @synthesize headerIndexCount=_headerIndexCount;
@property(retain, nonatomic) NSTimer *headerTimer; // @synthesize headerTimer=_headerTimer;
@property(retain, nonatomic) NSDate *timeMark; // @synthesize timeMark=_timeMark;
@property(retain, nonatomic) MLIndexRecommendBarItem *recommendItem; // @synthesize recommendItem=_recommendItem;
@property(retain, nonatomic) MLIndexRecommendBarItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) MLIndexRecommendBg *bg; // @synthesize bg=_bg;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *countMark; // @synthesize countMark=_countMark;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)checktemp;
- (void)resetTimer;
- (void)closeButtonClicked;
- (void)checkNeedRefresh:(_Bool)arg1;
- (void)queryLivingSourceSuccess:(id)arg1;
- (void)queryLivingSource;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)handleTap;
- (void)setupWithRecommend:(id)arg1;
- (void)timerCallback;
- (void)setupWithLiving:(id)arg1;
- (void)setupeWithNormal:(id)arg1;
- (void)setupWith:(id)arg1;
- (void)checkLocalData;
- (void)didReceive:(id)arg1;
- (void)handleLogout;
- (void)handleLoginSuccess;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

