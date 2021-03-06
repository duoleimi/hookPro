//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailPriceLabel, AliDetailPriceViewModel, AliDetailShortItemModel, TBDetailGroupItemButton, UIImageView, UILabel, UIView;

@interface AliDetailGiftItemComponent : AliProductDetailComponent
{
    double _imageHeight;	// 8 = 0x8
    double _titleHeight;	// 16 = 0x10
    double _buttonHeight;	// 24 = 0x18
    UIView *_divisionView;	// 32 = 0x20
    TBDetailGroupItemButton *_shopCartButton;	// 40 = 0x28
    AliDetailPriceViewModel *_priceModel;	// 48 = 0x30
    AliDetailShortItemModel *_itemModel;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    AliDetailPriceLabel *_priceLabel;	// 80 = 0x50
}

+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) AliDetailPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AliDetailShortItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) AliDetailPriceViewModel *priceModel; // @synthesize priceModel=_priceModel;
@property(retain, nonatomic) TBDetailGroupItemButton *shopCartButton; // @synthesize shopCartButton=_shopCartButton;
@property(retain, nonatomic) UIView *divisionView; // @synthesize divisionView=_divisionView;
- (void).cxx_destruct;
- (double)titleFontSize;
- (void)setDataToDynamicArea;
- (void)setDataToFixedArea;
- (id)getUserTrackDic;
- (id)defautJumpUrl;
- (void)addToTmallSupermarketCart:(id)arg1;
- (void)gotoDetail;
- (void)setObject:(id)arg1;
- (void)setupComponentSize:(id)arg1;

@end

