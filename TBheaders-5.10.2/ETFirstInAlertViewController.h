//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, TBColorPageControl, UIScrollView;
@protocol ETFirstAlertDelegate;

@interface ETFirstInAlertViewController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSArray *_itemsPageArray;	// 16 = 0x10
    int currentPageIndex;	// 24 = 0x18
    _Bool isHavaFinishButton;	// 28 = 0x1c
    struct CGRect finishButtonFrame;	// 32 = 0x20
    id <ETFirstAlertDelegate> delegate;	// 64 = 0x40
    TBColorPageControl *_pageControl;	// 72 = 0x48
}

+ (_Bool)isShowing;
+ (_Bool)isFirstShow;
@property(retain, nonatomic) TBColorPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) id <ETFirstAlertDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *itemsPageArray; // @synthesize itemsPageArray=_itemsPageArray;
- (void).cxx_destruct;
- (void)setFinishButtonFrame:(struct CGRect)arg1;
- (id)getImgViewByIndex:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showFinished;
- (void)loadView;
- (void)initFirstInAlertView;
- (id)initWithArray:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

