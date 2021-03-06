//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UILabel;

@interface TGIconFontButton : UIControl
{
    UILabel *_imageLabel;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    NSString *_imageNameN;	// 24 = 0x18
    NSString *_imageNameH;	// 32 = 0x20
    UIColor *_imageColorN;	// 40 = 0x28
    UIColor *_imageColorH;	// 48 = 0x30
    UIColor *_imageColorD;	// 56 = 0x38
    UIColor *_titleColorN;	// 64 = 0x40
    UIColor *_titleColorH;	// 72 = 0x48
    UIColor *_titleColorD;	// 80 = 0x50
    double _imageFontSize;	// 88 = 0x58
}

+ (id)iconFontButton;
@property(nonatomic) double imageFontSize; // @synthesize imageFontSize=_imageFontSize;
@property(retain, nonatomic) UIColor *titleColorD; // @synthesize titleColorD=_titleColorD;
@property(retain, nonatomic) UIColor *titleColorH; // @synthesize titleColorH=_titleColorH;
@property(retain, nonatomic) UIColor *titleColorN; // @synthesize titleColorN=_titleColorN;
@property(retain, nonatomic) UIColor *imageColorD; // @synthesize imageColorD=_imageColorD;
@property(retain, nonatomic) UIColor *imageColorH; // @synthesize imageColorH=_imageColorH;
@property(retain, nonatomic) UIColor *imageColorN; // @synthesize imageColorN=_imageColorN;
@property(retain, nonatomic) NSString *imageNameH; // @synthesize imageNameH=_imageNameH;
@property(retain, nonatomic) NSString *imageNameN; // @synthesize imageNameN=_imageNameN;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *imageLabel; // @synthesize imageLabel=_imageLabel;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImageFrame:(struct CGRect)arg1;
- (void)setTitleFrame:(struct CGRect)arg1;
- (void)setImageFontSize:(long long)arg1 titleFontSize:(long long)arg2;
- (void)setTitleNormalColor:(id)arg1 highlightedColor:(id)arg2 diableColor:(id)arg3;
- (void)setTitleNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (void)setImageNormalColor:(id)arg1 highlightedColor:(id)arg2 diableColor:(id)arg3;
- (void)setImageNormalColor:(id)arg1 highlightedColor:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setImageNormalName:(id)arg1 highlightedName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

