//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBLiveBroadCasterVideoCellViewModel, UIButton, UIImageView, UILabel;

@interface TBLiveBroadCasterVideoDescView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_liveStatusImage;	// 16 = 0x10
    UILabel *_totalJoinCountLabel;	// 24 = 0x18
    UILabel *_recommendItemNum;	// 32 = 0x20
    UIButton *_rightSelectIconFont;	// 40 = 0x28
    TBLiveBroadCasterVideoCellViewModel *_viewModel;	// 48 = 0x30
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) TBLiveBroadCasterVideoCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *rightSelectIconFont; // @synthesize rightSelectIconFont=_rightSelectIconFont;
@property(retain, nonatomic) UILabel *recommendItemNum; // @synthesize recommendItemNum=_recommendItemNum;
@property(retain, nonatomic) UILabel *totalJoinCountLabel; // @synthesize totalJoinCountLabel=_totalJoinCountLabel;
@property(retain, nonatomic) UIImageView *liveStatusImage; // @synthesize liveStatusImage=_liveStatusImage;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)toReplayView:(id)arg1;
- (void)refreshWithViewModel:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

