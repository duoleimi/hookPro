//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface TBLiveMiniFollowButton : UIView
{
    NSString *_accountId;	// 8 = 0x8
    long long _accountType;	// 16 = 0x10
    UIButton *_weIconFont;	// 24 = 0x18
    UILabel *_followLabel;	// 32 = 0x20
    CDUnknownBlockType _FollowClickAction;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType FollowClickAction; // @synthesize FollowClickAction=_FollowClickAction;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) UIButton *weIconFont; // @synthesize weIconFont=_weIconFont;
- (void).cxx_destruct;
- (void)handleFollowSuccessAction;
- (void)onClickFollowAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateLayoutConstraints;
- (void)setupInitView;
- (void)dealloc;
- (id)initWithAccountId:(struct CGRect)arg1 accountId:(id)arg2 accountType:(long long)arg3 followClickAction:(CDUnknownBlockType)arg4;

@end

