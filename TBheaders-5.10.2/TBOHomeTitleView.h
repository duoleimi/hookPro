//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBOTag, UIButton;

@interface TBOHomeTitleView : UIView
{
    UIButton *_titleIconView;	// 8 = 0x8
    UIButton *_titleLabel;	// 16 = 0x10
    TBOTag *_model;	// 24 = 0x18
}

@property(retain, nonatomic) TBOTag *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *titleIconView; // @synthesize titleIconView=_titleIconView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (id)initWithTag:(id)arg1;

@end

