//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface JDJPSubmitOrderView : UIView
{
    UIButton *submitButton;
    UILabel *priceTitleLabel;
    UILabel *priceLabel;
    UIImageView *arrowImgView;
    _Bool isShowDetail;
    NSString *_seatNum;
}

@property(retain, nonatomic) NSString *seatNum; // @synthesize seatNum=_seatNum;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail;
- (long long)getOrderPrice;
- (void)setPriceLabelText:(long long)arg1 boarders:(long long)arg2;
- (void)dealloc;
- (void)priceDetailViewDidHide;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleSingleTap;
- (void)submitButtonClicked;

@end

