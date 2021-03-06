//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, UITextView, UIWindow, VersionInfoModel;

@interface JDUpgradeView : UIView
{
    UIWindow *_displayWindow;
    VersionInfoModel *_versionInfo;
    CDUnknownBlockType _okBlock;
    CDUnknownBlockType _cancelBlock;
    UIButton *_closeBtn;
    UIView *_contentView;
    UIImageView *_bgImageView;
    UITextView *_textView;
    UILabel *_ratioDescLabel;
    UIButton *_okBtn;
}

@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UILabel *ratioDescLabel; // @synthesize ratioDescLabel=_ratioDescLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(retain, nonatomic) VersionInfoModel *versionInfo; // @synthesize versionInfo=_versionInfo;
- (void).cxx_destruct;
- (_Bool)accessibilityViewIsModal;
- (void)showUpgradeView;
- (void)configRatioDescLabelWithStr:(id)arg1;
- (void)configTextViewWithStr:(id)arg1;
- (void)configBgImageViewWithUrl:(id)arg1;
- (void)okAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)closeAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupViews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

