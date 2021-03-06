//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImageView;

@interface JHSJuiButton : UIButton
{
    _Bool _isNormalState;	// 8 = 0x8
    _Bool _hasArrow;	// 9 = 0x9
    UIColor *_normalBGColor;	// 16 = 0x10
    UIColor *_normalBorderColor;	// 24 = 0x18
    UIColor *_highLightBGColor;	// 32 = 0x20
    UIColor *_disableBGColor;	// 40 = 0x28
    UIColor *_highLightborderColor;	// 48 = 0x30
    UIColor *_disableBorderColor;	// 56 = 0x38
    double _highLightborderWidth;	// 64 = 0x40
    double _disableBorderWidth;	// 72 = 0x48
    double _normalBorderWidth;	// 80 = 0x50
    UIImageView *_arrowImage;	// 88 = 0x58
}

+ (id)muiButtonWithType:(long long)arg1;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(nonatomic) _Bool hasArrow; // @synthesize hasArrow=_hasArrow;
@property(nonatomic) double normalBorderWidth; // @synthesize normalBorderWidth=_normalBorderWidth;
@property(nonatomic) double disableBorderWidth; // @synthesize disableBorderWidth=_disableBorderWidth;
@property(nonatomic) double highLightborderWidth; // @synthesize highLightborderWidth=_highLightborderWidth;
@property(retain, nonatomic) UIColor *disableBorderColor; // @synthesize disableBorderColor=_disableBorderColor;
@property(retain, nonatomic) UIColor *highLightborderColor; // @synthesize highLightborderColor=_highLightborderColor;
@property(retain, nonatomic) UIColor *disableBGColor; // @synthesize disableBGColor=_disableBGColor;
@property(retain, nonatomic) UIColor *highLightBGColor; // @synthesize highLightBGColor=_highLightBGColor;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UIColor *normalBGColor; // @synthesize normalBGColor=_normalBGColor;
@property(nonatomic) _Bool isNormalState; // @synthesize isNormalState=_isNormalState;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)keyForState:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;

@end

