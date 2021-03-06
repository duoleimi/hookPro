//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class TBRateBaseTypeItem, TBRateStarRateComponent;

@interface TBRateShopRateComponent : TBRateComponent
{
    TBRateBaseTypeItem *_extendsRateOptions;	// 8 = 0x8
    TBRateStarRateComponent *_logisticsServiceScore;	// 16 = 0x10
    TBRateStarRateComponent *_saleConsignmentScore;	// 24 = 0x18
    TBRateStarRateComponent *_serviceQualityScore;	// 32 = 0x20
    TBRateStarRateComponent *_orderMerchandiseScore;	// 40 = 0x28
    double _viewHeight;	// 48 = 0x30
}

@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) TBRateStarRateComponent *orderMerchandiseScore; // @synthesize orderMerchandiseScore=_orderMerchandiseScore;
@property(retain, nonatomic) TBRateStarRateComponent *serviceQualityScore; // @synthesize serviceQualityScore=_serviceQualityScore;
@property(retain, nonatomic) TBRateStarRateComponent *saleConsignmentScore; // @synthesize saleConsignmentScore=_saleConsignmentScore;
@property(retain, nonatomic) TBRateStarRateComponent *logisticsServiceScore; // @synthesize logisticsServiceScore=_logisticsServiceScore;
@property(retain, nonatomic) TBRateBaseTypeItem *extendsRateOptions; // @synthesize extendsRateOptions=_extendsRateOptions;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

