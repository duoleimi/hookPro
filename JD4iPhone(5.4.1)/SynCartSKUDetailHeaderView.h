//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDImageView, JDPriceLabel, SynCartSkuDetailViewModel, UILabel;

@interface SynCartSKUDetailHeaderView : JDView
{
    JDImageView *imgView_;
    JDPriceLabel *priceView_;
    UILabel *wareIDLabel_;
    SynCartSkuDetailViewModel *_skuDetialViewModel;
}

@property(retain, nonatomic) SynCartSkuDetailViewModel *skuDetialViewModel; // @synthesize skuDetialViewModel=_skuDetialViewModel;
- (void).cxx_destruct;
- (void)clickImg;
- (id)formatterPriceWithBehavior:(id)arg1;
- (void)setWithSkuDetailViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

