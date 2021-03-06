//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TGUINavigationViewController.h"

#import "HPGrowingTextViewDelegate-Protocol.h"
#import "TGPublishProtocol-Protocol.h"
#import "TGSkillSelectProtocol-Protocol.h"
#import "TGVideoBaseViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HPGrowingTextView, NSMutableArray, NSMutableDictionary, NSString, TGPublishVideoDO, UIButton, UILabel, UIScrollView, UIView;

@interface TGPublishViewController : TGUINavigationViewController <HPGrowingTextViewDelegate, UIScrollViewDelegate, TGVideoBaseViewControllerDelegate, TGSkillSelectProtocol, TGPublishProtocol>
{
    _Bool _saveToCameraRoll;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSMutableDictionary *_items;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    HPGrowingTextView *_textView;	// 40 = 0x28
    UILabel *_errorLabel;	// 48 = 0x30
    UIView *_bottomView;	// 56 = 0x38
    UIButton *_skillSelectedButton;	// 64 = 0x40
    UIButton *_pictureButton;	// 72 = 0x48
    UIButton *_productButton;	// 80 = 0x50
    UIButton *_locationButton;	// 88 = 0x58
    UIButton *_videoButton;	// 96 = 0x60
    UIView *_pictureView;	// 104 = 0x68
    UIView *_productView;	// 112 = 0x70
    UIView *_locationView;	// 120 = 0x78
    UIView *_videoView;	// 128 = 0x80
    UIView *_cursorView;	// 136 = 0x88
    NSMutableArray *_publishImage;	// 144 = 0x90
    TGPublishVideoDO *_publishVideo;	// 152 = 0x98
}

@property(retain, nonatomic) TGPublishVideoDO *publishVideo; // @synthesize publishVideo=_publishVideo;
@property(retain, nonatomic) NSMutableArray *publishImage; // @synthesize publishImage=_publishImage;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) UIView *productView; // @synthesize productView=_productView;
@property(retain, nonatomic) UIView *pictureView; // @synthesize pictureView=_pictureView;
@property(retain, nonatomic) UIButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UIButton *productButton; // @synthesize productButton=_productButton;
@property(retain, nonatomic) UIButton *pictureButton; // @synthesize pictureButton=_pictureButton;
@property(retain, nonatomic) UIButton *skillSelectedButton; // @synthesize skillSelectedButton=_skillSelectedButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(nonatomic) _Bool saveToCameraRoll; // @synthesize saveToCameraRoll=_saveToCameraRoll;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didSelectedVideo:(id)arg1 coverImage:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)locationSelected:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)skillSelected:(id)arg1;
- (void)SelectItem:(id)arg1;
- (void)onClickLeftButton:(id)arg1;
- (void)publishItem;
- (void)onClickRightButton:(id)arg1;
- (void)coverButtonClicked:(id)arg1;
- (void)locationAddButtonClicked:(id)arg1;
- (void)productAddButtonClicked2:(id)arg1;
- (void)productAddButtonClicked1:(id)arg1;
- (void)videoPlayButtonClicked:(id)arg1;
- (void)pictureAddButtonClicked:(id)arg1;
- (void)locationDeleteButtonClicked:(id)arg1;
- (void)productDeleteButtonClicked:(id)arg1;
- (void)videoDeleteButtonClicked:(id)arg1;
- (void)pictureDeleteButtonClicked:(id)arg1;
- (void)productButtonClicked:(id)arg1;
- (void)locationButtonClicked:(id)arg1;
- (void)pictureButtonClicked:(id)arg1;
- (void)videoButtonClicked:(id)arg1;
- (void)skillClicked;
- (void)resetSkillSelectedButton:(long long)arg1 text:(id)arg2;
- (void)setVideo:(id)arg1;
- (void)setSkill:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)realignItem;
- (void)addPictures;
- (void)centerAlignButton:(id)arg1;
- (void)buttonSelected:(id)arg1;
- (void)moveCursor:(id)arg1;
- (void)relayoutSubviews:(int)arg1 duration:(double)arg2;
- (void)setUpContent;
- (void)setUpVideoStudio:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

