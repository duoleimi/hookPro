//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIButton, UILabel, UIView;

@interface TGNavigationBarDO : NSObject
{
    UIView *_navigationBar;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIButton *_leftBtn;	// 24 = 0x18
    UIButton *_leftExtraBtn;	// 32 = 0x20
    UIButton *_rightBtn;	// 40 = 0x28
    UIButton *_rightExtraBtn;	// 48 = 0x30
    CDUnknownBlockType _leftTouchBlock;	// 56 = 0x38
    CDUnknownBlockType _leftExtraTouchBlock;	// 64 = 0x40
    CDUnknownBlockType _rightTouchBlock;	// 72 = 0x48
    CDUnknownBlockType _rightExtraTouchBlock;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType rightExtraTouchBlock; // @synthesize rightExtraTouchBlock=_rightExtraTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType rightTouchBlock; // @synthesize rightTouchBlock=_rightTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType leftExtraTouchBlock; // @synthesize leftExtraTouchBlock=_leftExtraTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType leftTouchBlock; // @synthesize leftTouchBlock=_leftTouchBlock;
@property(retain, nonatomic) UIButton *rightExtraBtn; // @synthesize rightExtraBtn=_rightExtraBtn;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftExtraBtn; // @synthesize leftExtraBtn=_leftExtraBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;

@end

