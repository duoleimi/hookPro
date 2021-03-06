//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class JDImageView, NSString, TTTBookModel, TTTBookingWareCommondView, TTTWaresMarkView, UILabel;

@interface TTTBookingWareHorizontalScrollCell : UICollectionViewCell
{
    NSString *_horzontalBookingWareType;
    JDImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_preSellPriceLabel;
    UILabel *_onSaleTagPriceLabel;
    UILabel *_onSalePriceLabel;
    UILabel *_sellOutView;
    TTTWaresMarkView *_markView;
    TTTBookingWareCommondView *_commondView;
    TTTBookModel *_wareModel;
}

@property(retain, nonatomic) TTTBookModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) TTTBookingWareCommondView *commondView; // @synthesize commondView=_commondView;
@property(retain, nonatomic) TTTWaresMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UILabel *sellOutView; // @synthesize sellOutView=_sellOutView;
@property(retain, nonatomic) UILabel *onSalePriceLabel; // @synthesize onSalePriceLabel=_onSalePriceLabel;
@property(retain, nonatomic) UILabel *onSaleTagPriceLabel; // @synthesize onSaleTagPriceLabel=_onSaleTagPriceLabel;
@property(retain, nonatomic) UILabel *preSellPriceLabel; // @synthesize preSellPriceLabel=_preSellPriceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *horzontalBookingWareType; // @synthesize horzontalBookingWareType=_horzontalBookingWareType;
- (void).cxx_destruct;
- (void)updateHorizontalTemplateStyle;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

