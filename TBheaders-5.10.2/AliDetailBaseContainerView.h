//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AliDetailSubPageProtocol-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIViewController;
@protocol AliDetailParentVCDelegate;

@interface AliDetailBaseContainerView : UIView <AliDetailSubPageProtocol>
{
    double beginPanX;	// 8 = 0x8
    double beginPanY;	// 16 = 0x10
    _Bool isResponseBackPanGesture;	// 24 = 0x18
    double ratio;	// 32 = 0x20
    _Bool _needSendRequest;	// 40 = 0x28
    int _animationType;	// 44 = 0x2c
    UIViewController<AliDetailParentVCDelegate> *_parentVC;	// 48 = 0x30
    UIPanGestureRecognizer *_detailPanGesture;	// 56 = 0x38
    UIView *_parentView;	// 64 = 0x40
    double _animationTime;	// 72 = 0x48
}

@property(nonatomic) double animationTime; // @synthesize animationTime=_animationTime;
@property(nonatomic) _Bool needSendRequest; // @synthesize needSendRequest=_needSendRequest;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIPanGestureRecognizer *detailPanGesture; // @synthesize detailPanGesture=_detailPanGesture;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
@property(nonatomic) __weak UIViewController<AliDetailParentVCDelegate> *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)executeParentVCViewWillDisappearAfterSubPageShow;
- (void)executeParentVCViewWillDisappearBeforeSubPageShow;
- (void)executeParentVCViewWillAppearAfterSubPageHide;
- (void)executeParentVCViewWillAppearBeforeSubPageHide;
- (void)executeViewDidDisappearBlock;
- (void)executeViewWillDisappearBlock;
- (void)executeViewDidAppearBlock;
- (void)executeViewWillAppearBlock;
- (void)hideAnimationTypeEaseInOut;
- (void)hideAnimationTypeBottomToTop;
- (void)hideAnimationTypeRightToLeft;
- (void)showAnimationTypeEaseInOut;
- (void)showAnimationTypeBottomToTop;
- (void)showAnimationTypeRightToLeft;
- (void)handleDetailPan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)getContentByData;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

