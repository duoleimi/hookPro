//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SelectView : UIView
{
    UILabel *_cateLabel;
    UILabel *_tips;
    UIImageView *_tipbgImage;
    UIView *_selectBackgroundView;
}

@property(retain, nonatomic) UIView *selectBackgroundView; // @synthesize selectBackgroundView=_selectBackgroundView;
@property(retain, nonatomic) UIImageView *tipbgImage; // @synthesize tipbgImage=_tipbgImage;
@property(retain, nonatomic) UILabel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UILabel *cateLabel; // @synthesize cateLabel=_cateLabel;
- (void).cxx_destruct;
- (void)showTips:(_Bool)arg1 with:(id)arg2;
- (void)setSelect:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andCate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

