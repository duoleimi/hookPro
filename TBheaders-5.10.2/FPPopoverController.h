//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FPPopoverView, FPTouchView, UIColor, UIView, UIWindow;
@protocol FPPopoverControllerDelegate;

@interface FPPopoverController : UIViewController
{
    FPTouchView *_touchView;	// 8 = 0x8
    FPPopoverView *_contentView;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
    UIView *_parentView;	// 40 = 0x28
    UIView *_fromView;	// 48 = 0x30
    long long _deviceOrientation;	// 56 = 0x38
    _Bool _isArrowCenter;	// 64 = 0x40
    int _arrowDirection;	// 68 = 0x44
    int _tint;	// 72 = 0x48
    id <FPPopoverControllerDelegate> _delegate;	// 80 = 0x50
    double centerYOffset;	// 88 = 0x58
    UIColor *_popBorderColor;	// 96 = 0x60
    struct CGSize _contentSize;	// 104 = 0x68
    struct CGPoint _origin;	// 120 = 0x78
}

@property(retain, nonatomic) UIColor *popBorderColor; // @synthesize popBorderColor=_popBorderColor;
@property(nonatomic) _Bool isArrowCenter; // @synthesize isArrowCenter=_isArrowCenter;
@property(nonatomic) double centerYOffset; // @synthesize centerYOffset;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) id <FPPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)bestArrowDirectionAndFrameFromView:(id)arg1;
- (struct CGRect)bestViewFrameForFromPoint:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willPresentNewPopover:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)dismissPopover;
- (void)presentPopoverFromView:(id)arg1;
- (struct CGPoint)originFromView:(id)arg1;
- (void)presentPopoverFromPoint:(struct CGPoint)arg1;
- (double)parentHeight;
- (double)parentWidth;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)setupView;
@property(nonatomic) int tint; // @synthesize tint=_tint;
- (id)initWithViewController:(id)arg1;
- (void)dealloc;
- (void)removeObservers;
- (void)addObservers;

@end

