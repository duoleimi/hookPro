//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseLoginViewController.h"

#import "aluTaobaoLoginPageAppearance-Protocol.h"
#import "aluTaobaoLoginPageExtraAppearance-Protocol.h"

@class NSString;

@interface aluTaobaoLoginViewController : aluBaseLoginViewController <aluTaobaoLoginPageAppearance, aluTaobaoLoginPageExtraAppearance>
{
    _Bool _disableRotate2VerticalOrientation;	// 8 = 0x8
    double _viewLoadTime;	// 16 = 0x10
}

@property(nonatomic) double viewLoadTime; // @synthesize viewLoadTime=_viewLoadTime;
- (void)alu_p_onScrollViewClicked;
- (void)aluLoginBoxRightAccessoryClicked;
- (void)disableRotate2VerticalOrientation;
- (void)configureUserNameEntry:(id)arg1 passwordEntry:(id)arg2;
- (void)configureRetrivePwdEntry:(id)arg1 normalColor:(id)arg2 highLightColor:(id)arg3;
- (void)configureOtherLoginEntry:(id)arg1 normalColor:(id)arg2 highLightColor:(id)arg3;
- (void)configureRegisterEntry:(id)arg1 normalColor:(id)arg2 highLightColor:(id)arg3;
- (void)setRegBtnImage:(id)arg1 highLightImage:(id)arg2;
- (id)loginButton;
- (id)viewController;
- (void)initLoginBox;
- (void)cancelLogin;
- (void)aluLoginBoxFindBackPwdClicked:(id)arg1;
- (void)aluLoginBox:(id)arg1 didDeleteHistoryAtIndex:(long long)arg2;
- (_Bool)aluLoginBox:(id)arg1 shouldDeleteHistoryAtIndex:(long long)arg2;
- (id)aluLoginBox:(id)arg1 loginIdOfHistoryItemAtIndex:(long long)arg2;
- (void)onOtherLogin;
- (void)onBack;
- (id)getUaPageName;
- (void)onForgetPasswordWhenLoginFailed;
- (void)alu_p_onForgetPassword;
- (void)onForgetPassword;
- (void)beforeLoginWithContext:(id)arg1;
- (int)getUserLoginType;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)alu_p_startSSO;
- (void)createSSOLoginButton;
- (void)afterCreateLoginBox;
- (void)openHelpPage;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

