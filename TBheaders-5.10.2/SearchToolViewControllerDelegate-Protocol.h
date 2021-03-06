//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SearchSegmentView, UIImageView, UIView, UIViewController;

@protocol SearchToolViewControllerDelegate <NSObject>
- (_Bool)searchSegmentViewIsMenuViewShowed:(SearchSegmentView *)arg1;
- (void)searchSegmentViewDidDismissMenuView:(SearchSegmentView *)arg1;
- (void)searchSegmentView:(SearchSegmentView *)arg1 didShowMenuView:(UIView *)arg2;
- (void)toolViewControllerPushInputViewControllerWithKeyWord:(NSString *)arg1 selectedKeyword:(NSString *)arg2 selectedRange:(struct _NSRange)arg3;
- (void)toolViewControllerNeedPushViewControllerWithKeyWord:(NSString *)arg1;
- (void)toolViewControllerDidSelectRecommedation:(NSString *)arg1 capturedImageView:(UIImageView *)arg2;
- (void)toolViewControllerFrameChangedNewToolViewHeight:(double)arg1;
- (void)toolViewControllerNeedPushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)toolViewControllerBackBtnDidPressed;
- (void)toolViewControllerSiftBtnDidPressed;
@end

