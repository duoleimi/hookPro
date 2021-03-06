//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailEntrancesItemModel;

@interface AliDetailEntrancesModel : TBJSONModel
{
    AliDetailEntrancesItemModel *_sizeCalculator;	// 8 = 0x8
    AliDetailEntrancesItemModel *_threeD;	// 16 = 0x10
    AliDetailEntrancesItemModel *_double11Coupon;	// 24 = 0x18
    AliDetailEntrancesItemModel *_double11Banner;	// 32 = 0x20
    AliDetailEntrancesItemModel *_fullBackBonus;	// 40 = 0x28
    AliDetailEntrancesItemModel *_askAll;	// 48 = 0x30
    AliDetailEntrancesItemModel *_tmallCoupon;	// 56 = 0x38
    AliDetailEntrancesItemModel *_endorsement;	// 64 = 0x40
}

@property(retain, nonatomic) AliDetailEntrancesItemModel *endorsement; // @synthesize endorsement=_endorsement;
@property(retain, nonatomic) AliDetailEntrancesItemModel *tmallCoupon; // @synthesize tmallCoupon=_tmallCoupon;
@property(retain, nonatomic) AliDetailEntrancesItemModel *askAll; // @synthesize askAll=_askAll;
@property(retain, nonatomic) AliDetailEntrancesItemModel *fullBackBonus; // @synthesize fullBackBonus=_fullBackBonus;
@property(retain, nonatomic) AliDetailEntrancesItemModel *double11Banner; // @synthesize double11Banner=_double11Banner;
@property(retain, nonatomic) AliDetailEntrancesItemModel *double11Coupon; // @synthesize double11Coupon=_double11Coupon;
@property(retain, nonatomic) AliDetailEntrancesItemModel *threeD; // @synthesize threeD=_threeD;
@property(retain, nonatomic) AliDetailEntrancesItemModel *sizeCalculator; // @synthesize sizeCalculator=_sizeCalculator;
- (void).cxx_destruct;

@end

