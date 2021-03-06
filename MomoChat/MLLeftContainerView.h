//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MLLeftHeaderModel, MLLeftHeaderView, MLShowDetailMessageView, UIButton;

@interface MLLeftContainerView : UIView
{
    MLShowDetailMessageView *_leftMessageView;
    CDUnknownBlockType _hideViewBlock;
    CDUnknownBlockType _changeViewFrameBlock;
    MLLeftHeaderView *_leftHeaderView;
    MLLeftHeaderModel *_leftHeaderModel;
    UIButton *_hideButton;
}

@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) MLLeftHeaderModel *leftHeaderModel; // @synthesize leftHeaderModel=_leftHeaderModel;
@property(retain, nonatomic) MLLeftHeaderView *leftHeaderView; // @synthesize leftHeaderView=_leftHeaderView;
@property(copy, nonatomic) CDUnknownBlockType changeViewFrameBlock; // @synthesize changeViewFrameBlock=_changeViewFrameBlock;
@property(copy, nonatomic) CDUnknownBlockType hideViewBlock; // @synthesize hideViewBlock=_hideViewBlock;
@property(retain, nonatomic) MLShowDetailMessageView *leftMessageView; // @synthesize leftMessageView=_leftMessageView;
- (void).cxx_destruct;
- (void)hideHideButtonAnimation;
- (void)showHideButtonAnimation;
- (void)showButtonAnimation;
- (void)getHeaderViewDataError:(id)arg1;
- (void)getHeaderViewDataFail:(id)arg1;
- (void)getHeaderViewDataSuccess:(id)arg1;
- (void)loadHeaderViewDataWithRoomId:(id)arg1;
- (void)layoutSubviews;
- (void)addMessage:(id)arg1;
- (void)hideButtonClicked;
- (void)handleSwipe:(id)arg1;
- (void)CreateUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

