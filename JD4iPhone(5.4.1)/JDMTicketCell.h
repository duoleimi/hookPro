//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDImageView, UIButton, UIImage, UIImageView, UILabel;

@interface JDMTicketCell : UITableViewCell
{
    UIImageView *_posterBg;
    UIImageView *_hotIcon;
    JDImageView *_posterView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_locateLabel;
    UILabel *_sellingLabel;
    UILabel *_presellLabel;
    UILabel *_priceLabel;
    UIButton *_sellerBtn;
    UIImage *_sellerBgImg;
}

@property(retain, nonatomic) UIImage *sellerBgImg; // @synthesize sellerBgImg=_sellerBgImg;
@property(retain, nonatomic) UIButton *sellerBtn; // @synthesize sellerBtn=_sellerBtn;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *presellLabel; // @synthesize presellLabel=_presellLabel;
@property(retain, nonatomic) UILabel *sellingLabel; // @synthesize sellingLabel=_sellingLabel;
@property(retain, nonatomic) UILabel *locateLabel; // @synthesize locateLabel=_locateLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *posterView; // @synthesize posterView=_posterView;
@property(retain, nonatomic) UIImageView *hotIcon; // @synthesize hotIcon=_hotIcon;
@property(retain, nonatomic) UIImageView *posterBg; // @synthesize posterBg=_posterBg;
- (void).cxx_destruct;
- (void)configCell:(id)arg1;
- (void)configUI;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

