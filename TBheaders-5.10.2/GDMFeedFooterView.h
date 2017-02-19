//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDMLikeButton, GDMRedManFeedModel, UIImageView, UILabel;

@interface GDMFeedFooterView : UIView
{
    float _iconHeight;	// 8 = 0x8
    float _labelHeight;	// 12 = 0xc
    GDMRedManFeedModel *_viewModel;	// 16 = 0x10
    GDMLikeButton *_likeBtn;	// 24 = 0x18
    UILabel *_commentLabel;	// 32 = 0x20
    UILabel *_commentLabel1;	// 40 = 0x28
    UILabel *_commentLabel2;	// 48 = 0x30
    UILabel *_scanIconLabel;	// 56 = 0x38
    UILabel *_scanNumLabel;	// 64 = 0x40
    UIImageView *_praiseTipImageView;	// 72 = 0x48
}

+ (double)heightOfFeedCommentViewForModel:(id)arg1;
+ (double)heightOfFooterView;
@property float labelHeight; // @synthesize labelHeight=_labelHeight;
@property float iconHeight; // @synthesize iconHeight=_iconHeight;
@property(retain, nonatomic) UIImageView *praiseTipImageView; // @synthesize praiseTipImageView=_praiseTipImageView;
@property(retain, nonatomic) UILabel *scanNumLabel; // @synthesize scanNumLabel=_scanNumLabel;
@property(retain, nonatomic) UILabel *scanIconLabel; // @synthesize scanIconLabel=_scanIconLabel;
@property(retain, nonatomic) UILabel *commentLabel2; // @synthesize commentLabel2=_commentLabel2;
@property(retain, nonatomic) UILabel *commentLabel1; // @synthesize commentLabel1=_commentLabel1;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) GDMLikeButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) GDMRedManFeedModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (id)parseModel:(id)arg1;
- (void)setCommentCount:(long long)arg1;
- (void)initCommentLabel;
- (void)initComment;
- (void)initLikeBtn;
- (void)initVisit;
- (id)initWithFrame:(struct CGRect)arg1;

@end
