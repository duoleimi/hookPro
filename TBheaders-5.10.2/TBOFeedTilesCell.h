//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class TBOAttributedLabel, TBOFeedTilesContainer, TBOGoodsItemView, TBOTopicDetailHeader, TBOTopicToolBar, TBOVoteView, UIButton, UIView;
@protocol ITBOModel;

@interface TBOFeedTilesCell : TBOBaseCell
{
    TBOTopicDetailHeader *_topicHeader;	// 8 = 0x8
    UIView *_titleLabel;	// 16 = 0x10
    TBOAttributedLabel *_topicInfo;	// 24 = 0x18
    TBOFeedTilesContainer *_tilesContainer;	// 32 = 0x20
    TBOVoteView *_voteView;	// 40 = 0x28
    UIView<ITBOModel> *_tagListView;	// 48 = 0x30
    TBOGoodsItemView *_goodsItemView;	// 56 = 0x38
    TBOTopicToolBar *_toolBar;	// 64 = 0x40
    UIButton *_goodsLinkButton;	// 72 = 0x48
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
+ (double)tagsHeightForModel:(id)arg1;
@property(retain, nonatomic) UIButton *goodsLinkButton; // @synthesize goodsLinkButton=_goodsLinkButton;
@property(retain, nonatomic) TBOTopicToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) TBOGoodsItemView *goodsItemView; // @synthesize goodsItemView=_goodsItemView;
@property(retain, nonatomic) UIView<ITBOModel> *tagListView; // @synthesize tagListView=_tagListView;
@property(retain, nonatomic) TBOVoteView *voteView; // @synthesize voteView=_voteView;
@property(retain, nonatomic) TBOFeedTilesContainer *tilesContainer; // @synthesize tilesContainer=_tilesContainer;
@property(retain, nonatomic) TBOAttributedLabel *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(retain, nonatomic) UIView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBOTopicDetailHeader *topicHeader; // @synthesize topicHeader=_topicHeader;
- (void).cxx_destruct;
- (void)onDeleteSelf;
- (void)onReportTopic;
- (void)onUserLogoClick;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

