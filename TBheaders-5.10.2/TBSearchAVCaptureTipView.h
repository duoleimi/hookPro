//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ALAsset, UIButton, UIImage, UIImageView, UILabel;

@interface TBSearchAVCaptureTipView : UIView
{
    _Bool _isArrowUp;	// 8 = 0x8
    UIImageView *_backView;	// 16 = 0x10
    UILabel *_tipText;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    UIButton *_btnClick;	// 40 = 0x28
    UIImage *_fullScreenImage;	// 48 = 0x30
    ALAsset *_asset;	// 56 = 0x38
}

@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool isArrowUp; // @synthesize isArrowUp=_isArrowUp;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIButton *btnClick; // @synthesize btnClick=_btnClick;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *tipText; // @synthesize tipText=_tipText;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
