//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPGripViewBorderView, UIImageView;

@interface ZDStickerView : UIView
{
    SPGripViewBorderView *borderView;
    _Bool preventsPositionOutsideSuperview;
    _Bool preventsResizing;
    _Bool preventsDeleting;
    _Bool _preventsLayoutWhileResizing;
    _Bool _moved;
    float deltaAngle;
    UIView *contentView;
    UIImageView *resizingControl;
    UIImageView *deleteControl;
    double minWidth;
    double minHeight;
    double _maxWidth;
    double _maxHeight;
    id <ZDStickerViewDelegate> _delegate;
    struct CGPoint touchStart;
    struct CGPoint prevPoint;
    struct CGAffineTransform startTransform;
}

@property(nonatomic, getter=isMoved) _Bool moved; // @synthesize moved=_moved;
@property(nonatomic) _Bool preventsLayoutWhileResizing; // @synthesize preventsLayoutWhileResizing=_preventsLayoutWhileResizing;
@property(nonatomic) __weak id <ZDStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minHeight; // @synthesize minHeight;
@property(nonatomic) double minWidth; // @synthesize minWidth;
@property(nonatomic) _Bool preventsDeleting; // @synthesize preventsDeleting;
@property(nonatomic) _Bool preventsResizing; // @synthesize preventsResizing;
@property(nonatomic) _Bool preventsPositionOutsideSuperview; // @synthesize preventsPositionOutsideSuperview;
@property(retain, nonatomic) UIImageView *deleteControl; // @synthesize deleteControl;
@property(retain, nonatomic) UIImageView *resizingControl; // @synthesize resizingControl;
@property(nonatomic) struct CGAffineTransform startTransform; // @synthesize startTransform;
@property(nonatomic) float deltaAngle; // @synthesize deltaAngle;
@property(nonatomic) struct CGPoint prevPoint; // @synthesize prevPoint;
@property(nonatomic) struct CGPoint touchStart; // @synthesize touchStart;
@property(nonatomic) UIView *contentView; // @synthesize contentView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)showEditingHandles;
- (void)hideEditingHandles;
- (void)showBorder;
- (void)hideBorder;
- (void)showDelHandle;
- (void)hideDelHandle;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)translateUsingTouchLocation:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetResizingControlFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupDefaultAttributes;
- (void)resizeTranslate:(id)arg1;
- (void)singleTap:(id)arg1;

@end

