//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDNavigationBarAppearanceDelegate.h"
#import "MDPopGestureRecognizerDelegate.h"

@class NSString;

@interface MDTransitonParentViewController : MDViewController <MDNavigationBarAppearanceDelegate, MDPopGestureRecognizerDelegate>
{
}

+ (id)customTransitionEnableVCNameArray;
+ (void)customTransitionPresentParentViewControllerWithFirstSubController:(id)arg1;
- (_Bool)md_popGestureRecognizerEnabled;
- (id)md_CustomNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)customSetNaviBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)customIsTopViewController:(id)arg1;
- (void)refreshParentNaviBarWithTitle:(id)arg1 leftItem:(id)arg2 rightItem:(id)arg3;
- (void)setFisrtSubViewController:(id)arg1;
- (void)doAnimatonDissmissFromViewController:(id)arg1 toViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)doAnimatonPresentFromViewController:(id)arg1 toViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentToOtherViewController:(id)arg1 animation:(_Bool)arg2;
- (void)transitonToOtherViewController:(id)arg1 animation:(_Bool)arg2;
- (void)doTransitionPopFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
- (void)doTransitionPushFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
- (void)customTransitionPopToViewController:(id)arg1 Animation:(_Bool)arg2;
- (void)customTransitionPopViewControllerAnimation:(_Bool)arg1;
- (void)customTransitionPushViewController:(id)arg1 animation:(_Bool)arg2;
- (void)customTransitionDissmissParentViewControllerAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

