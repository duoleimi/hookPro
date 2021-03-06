//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MLIndexShowModel, MLUserTagView, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface MLIndexTableViewCell_Old : UICollectionViewCell
{
    int _listType;
    UIImageView *_imgHead;
    UIImageView *_imgType;
    UILabel *_lblTitle;
    UILabel *_lblSecond;
    MLIndexShowModel *_showModel;
    UIButton *_btn;
    UIImageView *_tagMaskImage;
    MLUserTagView *_userTagView;
    NSLayoutConstraint *_tagViewWidth;
    UILabel *_thirdLabel;
    NSLayoutConstraint *_titleLabelLeftConstraint;
    UIImageView *_dotImageView;
    UIView *_videoEndView;
    UIView *_tagContentView;
    UIImageView *_customImg;
}

@property(retain, nonatomic) UIImageView *customImg; // @synthesize customImg=_customImg;
@property(retain, nonatomic) UIView *tagContentView; // @synthesize tagContentView=_tagContentView;
@property(retain, nonatomic) UIView *videoEndView; // @synthesize videoEndView=_videoEndView;
@property(nonatomic) __weak UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelLeftConstraint; // @synthesize titleLabelLeftConstraint=_titleLabelLeftConstraint;
@property(nonatomic) __weak UILabel *thirdLabel; // @synthesize thirdLabel=_thirdLabel;
@property(nonatomic) __weak NSLayoutConstraint *tagViewWidth; // @synthesize tagViewWidth=_tagViewWidth;
@property(nonatomic) __weak MLUserTagView *userTagView; // @synthesize userTagView=_userTagView;
@property(retain, nonatomic) UIImageView *tagMaskImage; // @synthesize tagMaskImage=_tagMaskImage;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) MLIndexShowModel *showModel; // @synthesize showModel=_showModel;
@property(nonatomic) int listType; // @synthesize listType=_listType;
@property(retain, nonatomic) UILabel *lblSecond; // @synthesize lblSecond=_lblSecond;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) UIImageView *imgType; // @synthesize imgType=_imgType;
@property(retain, nonatomic) UIImageView *imgHead; // @synthesize imgHead=_imgHead;
- (void).cxx_destruct;
- (void)clearUI;
- (void)initStateTag;
- (void)initIconTag;
- (void)addTag:(id)arg1;
- (void)setupData:(id)arg1 listType:(int)arg2;
- (void)awakeFromNib;

@end

