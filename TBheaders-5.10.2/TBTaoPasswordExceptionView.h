//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class UIButton, UILabel;

@interface TBTaoPasswordExceptionView : TBTaoPasswordBaseView
{
    UILabel *_textView;	// 8 = 0x8
    UILabel *_titleView;	// 16 = 0x10
    UIButton *_bottomButton;	// 24 = 0x18
    CDUnknownBlockType _buttonBlock;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)bottomButtonTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 exception:(id)arg2;

@end

