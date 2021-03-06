//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PNChartDelegate-Protocol.h"

@class NSString, PNLineChart, TBFavoriteGood, TBPriceTextView, UIButton, UILabel;

@interface TBFavoriteGoodMoreView : UIView <PNChartDelegate>
{
    _Bool _hidesPriceLine;	// 8 = 0x8
    TBFavoriteGood *_good;	// 16 = 0x10
    CDUnknownBlockType _favorButtonClickedBlock;	// 24 = 0x18
    CDUnknownBlockType _shopButtonClickedBlock;	// 32 = 0x20
    CDUnknownBlockType _shareButtonClickedBlock;	// 40 = 0x28
    CDUnknownBlockType _addCategoryButtonClickedBlock;	// 48 = 0x30
    PNLineChart *_priceLineChart;	// 56 = 0x38
    UIView *_favorButtonContainer;	// 64 = 0x40
    UIButton *_favorButton;	// 72 = 0x48
    UIView *_enterShopButtonContainer;	// 80 = 0x50
    UIButton *_enterShopButton;	// 88 = 0x58
    UIView *_shareButtonContainer;	// 96 = 0x60
    UIButton *_shareButton;	// 104 = 0x68
    UIButton *_cancelButton;	// 112 = 0x70
    UIView *_addFavorButtonContainer;	// 120 = 0x78
    UIButton *_addFavorButton;	// 128 = 0x80
    UIView *_subviewContainer;	// 136 = 0x88
    UIView *_priceViewContainer;	// 144 = 0x90
    UIView *_highestPriceView;	// 152 = 0x98
    UIView *_lowestPriceView;	// 160 = 0xa0
    UIView *_favorPriceView;	// 168 = 0xa8
    UILabel *_highestPriceLabel;	// 176 = 0xb0
    UILabel *_lowestPriceLabel;	// 184 = 0xb8
    UILabel *_favorPriceLabel;	// 192 = 0xc0
    UILabel *_favorPrice0Label;	// 200 = 0xc8
    TBPriceTextView *_highestPriceTextView;	// 208 = 0xd0
    TBPriceTextView *_lowestPriceTextView;	// 216 = 0xd8
    TBPriceTextView *_favorPriceTextView;	// 224 = 0xe0
    UILabel *_preparingPriceLineLabel;	// 232 = 0xe8
    double _highestPrice;	// 240 = 0xf0
    double _lowestPrice;	// 248 = 0xf8
    double _subViewContainerHeight;	// 256 = 0x100
}

@property(nonatomic) double subViewContainerHeight; // @synthesize subViewContainerHeight=_subViewContainerHeight;
@property(nonatomic) double lowestPrice; // @synthesize lowestPrice=_lowestPrice;
@property(nonatomic) double highestPrice; // @synthesize highestPrice=_highestPrice;
@property(retain, nonatomic) UILabel *preparingPriceLineLabel; // @synthesize preparingPriceLineLabel=_preparingPriceLineLabel;
@property(retain, nonatomic) TBPriceTextView *favorPriceTextView; // @synthesize favorPriceTextView=_favorPriceTextView;
@property(retain, nonatomic) TBPriceTextView *lowestPriceTextView; // @synthesize lowestPriceTextView=_lowestPriceTextView;
@property(retain, nonatomic) TBPriceTextView *highestPriceTextView; // @synthesize highestPriceTextView=_highestPriceTextView;
@property(retain, nonatomic) UILabel *favorPrice0Label; // @synthesize favorPrice0Label=_favorPrice0Label;
@property(retain, nonatomic) UILabel *favorPriceLabel; // @synthesize favorPriceLabel=_favorPriceLabel;
@property(retain, nonatomic) UILabel *lowestPriceLabel; // @synthesize lowestPriceLabel=_lowestPriceLabel;
@property(retain, nonatomic) UILabel *highestPriceLabel; // @synthesize highestPriceLabel=_highestPriceLabel;
@property(retain, nonatomic) UIView *favorPriceView; // @synthesize favorPriceView=_favorPriceView;
@property(retain, nonatomic) UIView *lowestPriceView; // @synthesize lowestPriceView=_lowestPriceView;
@property(retain, nonatomic) UIView *highestPriceView; // @synthesize highestPriceView=_highestPriceView;
@property(retain, nonatomic) UIView *priceViewContainer; // @synthesize priceViewContainer=_priceViewContainer;
@property(retain, nonatomic) UIView *subviewContainer; // @synthesize subviewContainer=_subviewContainer;
@property(retain, nonatomic) UIButton *addFavorButton; // @synthesize addFavorButton=_addFavorButton;
@property(retain, nonatomic) UIView *addFavorButtonContainer; // @synthesize addFavorButtonContainer=_addFavorButtonContainer;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIView *shareButtonContainer; // @synthesize shareButtonContainer=_shareButtonContainer;
@property(retain, nonatomic) UIButton *enterShopButton; // @synthesize enterShopButton=_enterShopButton;
@property(retain, nonatomic) UIView *enterShopButtonContainer; // @synthesize enterShopButtonContainer=_enterShopButtonContainer;
@property(retain, nonatomic) UIButton *favorButton; // @synthesize favorButton=_favorButton;
@property(retain, nonatomic) UIView *favorButtonContainer; // @synthesize favorButtonContainer=_favorButtonContainer;
@property(retain, nonatomic) PNLineChart *priceLineChart; // @synthesize priceLineChart=_priceLineChart;
@property(nonatomic) _Bool hidesPriceLine; // @synthesize hidesPriceLine=_hidesPriceLine;
@property(copy, nonatomic) CDUnknownBlockType addCategoryButtonClickedBlock; // @synthesize addCategoryButtonClickedBlock=_addCategoryButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType shareButtonClickedBlock; // @synthesize shareButtonClickedBlock=_shareButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType shopButtonClickedBlock; // @synthesize shopButtonClickedBlock=_shopButtonClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType favorButtonClickedBlock; // @synthesize favorButtonClickedBlock=_favorButtonClickedBlock;
@property(retain, nonatomic) TBFavoriteGood *good; // @synthesize good=_good;
- (void).cxx_destruct;
- (void)adjustPriceTextViewPosition:(id)arg1 point:(struct CGPoint)arg2;
- (void)setupPriceView;
- (void)userClickedOnLineKeyPoint:(struct CGPoint)arg1 lineIndex:(long long)arg2 pointIndex:(long long)arg3;
- (void)setupPriceLineData;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cancelButtonClicked;
- (void)shareButtonClicked;
- (void)enterShopButtonClicked;
- (void)addFavorButtonClicked;
- (void)favorButtonClicked;
- (void)strokePriceLine;
- (void)hideWithAnimation;
- (void)showWithAnimation;
- (id)initWithFrame:(struct CGRect)arg1 hidesPriceLine:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

