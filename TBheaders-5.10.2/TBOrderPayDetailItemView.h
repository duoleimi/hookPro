//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TBOrderPayDetailItemView : UIView
{
    id _modelData;	// 8 = 0x8
    UILabel *_name;	// 16 = 0x10
    UILabel *_value;	// 24 = 0x18
    UIImageView *_icon;	// 32 = 0x20
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *value; // @synthesize value=_value;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(nonatomic) __weak id modelData; // @synthesize modelData=_modelData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1 controller:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

