//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageCenterCell.h"

@class UIButton, UIImageView, UILabel;

@interface MessageSmallPicCell : MessageCenterCell
{
    UILabel *_typeName;
    UILabel *_msg;
    UIImageView *_goodsView;
    UIButton *_rightArrowBtn;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIButton *rightArrowBtn; // @synthesize rightArrowBtn=_rightArrowBtn;
@property(retain, nonatomic) UIImageView *goodsView; // @synthesize goodsView=_goodsView;
@property(retain, nonatomic) UILabel *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) UILabel *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (void)setWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

