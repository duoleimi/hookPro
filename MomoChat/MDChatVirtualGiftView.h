//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDBaseMessage, UIImageView, UILabel;

@interface MDChatVirtualGiftView : UIView
{
    UIView *_giftContainerView;
    UIImageView *_giftView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_middleLine;
    UIView *_bottomContainerView;
    UILabel *_leftBottomLabel;
    UIImageView *_rightArrowView;
    MDBaseMessage *_message;
}

@property(retain, nonatomic) MDBaseMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *leftBottomLabel; // @synthesize leftBottomLabel=_leftBottomLabel;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UIView *middleLine; // @synthesize middleLine=_middleLine;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *giftView; // @synthesize giftView=_giftView;
@property(retain, nonatomic) UIView *giftContainerView; // @synthesize giftContainerView=_giftContainerView;
- (void).cxx_destruct;
- (struct CGSize)giftSizeWithDict:(id)arg1;
- (void)refreshBottomFrame;
- (void)refreshMiddleFrame;
- (void)refreshTopFrameWithDict:(id)arg1;
- (void)refreshFrameWithDict:(id)arg1;
- (void)refreshDataWithDict:(id)arg1;
- (void)refreshWithMessage:(id)arg1;
- (void)configUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
