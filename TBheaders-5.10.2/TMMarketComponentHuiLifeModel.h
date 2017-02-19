//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSArray, NSString;

@interface TMMarketComponentHuiLifeModel : TMMarketComponentBaseModel
{
    NSArray *_itemModels;	// 16 = 0x10
    double _itemMargin;	// 24 = 0x18
    NSString *_tipsPull;	// 32 = 0x20
    NSString *_tipsRelease;	// 40 = 0x28
    NSString *_tipsColor;	// 48 = 0x30
    NSString *_tipsBgColor;	// 56 = 0x38
}

@property(copy, nonatomic) NSString *tipsBgColor; // @synthesize tipsBgColor=_tipsBgColor;
@property(copy, nonatomic) NSString *tipsColor; // @synthesize tipsColor=_tipsColor;
@property(copy, nonatomic) NSString *tipsRelease; // @synthesize tipsRelease=_tipsRelease;
@property(copy, nonatomic) NSString *tipsPull; // @synthesize tipsPull=_tipsPull;
@property(nonatomic) double itemMargin; // @synthesize itemMargin=_itemMargin;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)imgUrls;
- (id)initWithDictionary:(id)arg1;

@end
