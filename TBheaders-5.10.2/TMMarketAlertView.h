//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSMutableArray, NSString, UIButton, UILabel, UITextView;

@interface TMMarketAlertView : UIView
{
    NSString *_title;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSAttributedString *_attributedMessage;	// 24 = 0x18
    UIButton *_backgroundButton;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UITextView *_messageTextView;	// 56 = 0x38
    UIView *_splitLine;	// 64 = 0x40
    NSMutableArray *_actions;	// 72 = 0x48
}

@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)show;
- (void)layoutSubviews;
- (void)addAction:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)init;

@end

