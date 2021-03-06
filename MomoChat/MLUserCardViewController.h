//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class MLErrorView, MLUserCardLableComponentView, MLUserCardLevelComponentView, MLUserCardModel, MLUserTagView, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MLUserCardViewController : MLBaseViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _isRoomOwner;
    _Bool _isAdminOfCurrentUser;
    _Bool _isRoomOwnerOfCurrentUser;
    _Bool _shouldAnimation;
    _Bool _shouldAddGesture;
    NSString *_momoid;
    NSString *_roomid;
    NSString *_source;
    long long _silenceSec;
    long long _kickoutSec;
    CDUnknownBlockType _closeHandler;
    CDUnknownBlockType _closeAnimationHandler;
    MLUserCardModel *_userCardModel;
    UIView *_containerView;
    NSArray *_manageItems;
    UIImageView *_avatarView;
    UIButton *_closeButton;
    UILabel *_nickNameLabel;
    UIView *_labelComponentContainerView;
    MLUserCardLableComponentView *_labelComponentView;
    MLUserTagView *_userTagView;
    UIView *_signComponentViewContainerView;
    UILabel *_signLabel;
    UIImageView *_certificationIconView;
    MLUserCardLevelComponentView *_levelComponentView;
    UIButton *_followButton;
    UIButton *_leftButton;
    UIButton *_middleButton;
    UIButton *_profileButton;
    UIButton *_reportButton;
    UIButton *_manageButton;
    UIView *_verticalLine;
    NSLayoutConstraint *_containerCenterY;
    MLErrorView *_errorView;
    NSLayoutConstraint *_tagWidthConstraint;
    UIView *_medalLine;
    UIImageView *_medalIconView;
    UILabel *_medalLabel;
    NSLayoutConstraint *_reportButtonTopConstraint;
    NSLayoutConstraint *_signComponentTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *signComponentTopConstraint; // @synthesize signComponentTopConstraint=_signComponentTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *reportButtonTopConstraint; // @synthesize reportButtonTopConstraint=_reportButtonTopConstraint;
@property(retain, nonatomic) UILabel *medalLabel; // @synthesize medalLabel=_medalLabel;
@property(retain, nonatomic) UIImageView *medalIconView; // @synthesize medalIconView=_medalIconView;
@property(retain, nonatomic) UIView *medalLine; // @synthesize medalLine=_medalLine;
@property(retain, nonatomic) NSLayoutConstraint *tagWidthConstraint; // @synthesize tagWidthConstraint=_tagWidthConstraint;
@property(retain, nonatomic) MLErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSLayoutConstraint *containerCenterY; // @synthesize containerCenterY=_containerCenterY;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIButton *manageButton; // @synthesize manageButton=_manageButton;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) UIButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) UIButton *middleButton; // @synthesize middleButton=_middleButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) MLUserCardLevelComponentView *levelComponentView; // @synthesize levelComponentView=_levelComponentView;
@property(nonatomic) __weak UIImageView *certificationIconView; // @synthesize certificationIconView=_certificationIconView;
@property(nonatomic) __weak UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(nonatomic) __weak UIView *signComponentViewContainerView; // @synthesize signComponentViewContainerView=_signComponentViewContainerView;
@property(nonatomic) __weak MLUserTagView *userTagView; // @synthesize userTagView=_userTagView;
@property(retain, nonatomic) MLUserCardLableComponentView *labelComponentView; // @synthesize labelComponentView=_labelComponentView;
@property(nonatomic) __weak UIView *labelComponentContainerView; // @synthesize labelComponentContainerView=_labelComponentContainerView;
@property(nonatomic) __weak UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSArray *manageItems; // @synthesize manageItems=_manageItems;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MLUserCardModel *userCardModel; // @synthesize userCardModel=_userCardModel;
@property(nonatomic) _Bool shouldAddGesture; // @synthesize shouldAddGesture=_shouldAddGesture;
@property(nonatomic) _Bool shouldAnimation; // @synthesize shouldAnimation=_shouldAnimation;
@property(copy, nonatomic) CDUnknownBlockType closeAnimationHandler; // @synthesize closeAnimationHandler=_closeAnimationHandler;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
@property(nonatomic) _Bool isRoomOwnerOfCurrentUser; // @synthesize isRoomOwnerOfCurrentUser=_isRoomOwnerOfCurrentUser;
@property(nonatomic) _Bool isAdminOfCurrentUser; // @synthesize isAdminOfCurrentUser=_isAdminOfCurrentUser;
@property(nonatomic) long long kickoutSec; // @synthesize kickoutSec=_kickoutSec;
@property(nonatomic) long long silenceSec; // @synthesize silenceSec=_silenceSec;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isRoomOwner; // @synthesize isRoomOwner=_isRoomOwner;
@property(retain, nonatomic) NSString *roomid; // @synthesize roomid=_roomid;
@property(retain, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
- (void).cxx_destruct;
- (double)containerHeight;
- (void)roomOwnerInviteConferenceFail:(id)arg1;
- (void)roomOwnerInviteConferenceError:(id)arg1;
- (void)roomOwnerInviteConferenceSuccess:(id)arg1;
- (void)roomOwnerInviteConference;
- (void)guestNeedRegister;
- (_Bool)shouldLeftButtonConfigFans;
- (void)silenceManager;
- (void)setUserAdminError:(id)arg1;
- (void)setUserAdminSuccess:(id)arg1;
- (void)selectManager;
- (id)secondChangeToMinuteOrHour:(long long)arg1;
- (void)kickoutError:(id)arg1;
- (void)kickoutSuccess:(id)arg1;
- (void)kickoutManager;
- (void)kickoutUser;
- (void)userUnsilenceError:(id)arg1;
- (void)userUnsilenceSuccess:(id)arg1;
- (void)userUnsilence;
- (void)userUnsilenceManager;
- (void)userSilenceError:(id)arg1;
- (void)userSilenceSuccess:(id)arg1;
- (void)userSilence;
- (void)userSilenceManager;
- (void)showManageAction;
- (void)reportUser;
- (void)blockUserError:(id)arg1;
- (void)blockUserFail:(id)arg1;
- (void)blockUserSucess:(id)arg1;
- (void)blockUser;
- (void)handleManangeActionWithIndex:(long long)arg1;
- (void)followUserError:(id)arg1;
- (void)followUserFail:(id)arg1;
- (void)followUserSucess:(id)arg1;
- (void)followUser;
- (void)updateBottomButtons;
- (void)updateMedalView;
- (void)updateLevelView;
- (void)updateFollowButton;
- (void)updateTagsView;
- (void)updateNickLabel;
- (void)updateSignLabel;
- (void)updateUI;
- (void)addErrorView;
- (void)getUserCardError:(id)arg1;
- (void)getUserCardFail:(id)arg1;
- (void)getUserCardSuccess:(id)arg1;
- (void)loadUserCardData;
- (void)atUser;
- (void)goFansGroup;
- (void)goToMomoUserProfile;
- (void)didClickManageButton:(id)arg1;
- (void)didClickReportButton:(id)arg1;
- (void)didClickMiddleButton:(id)arg1;
- (void)didClickProfileButton:(id)arg1;
- (void)didClickLeftButton:(id)arg1;
- (void)didClickFollowButton:(id)arg1;
- (void)closeAnimation;
- (void)didClickCloseButton:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)addCloseGesture;
- (void)animateViews;
- (void)decorateVerticalLineView:(id)arg1;
- (void)decorateWithHorizontalLineView:(id)arg1;
- (void)configureLines;
- (void)addLabelComponentView;
- (void)configSubViews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

