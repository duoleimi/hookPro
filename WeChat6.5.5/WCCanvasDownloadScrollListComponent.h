//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WCCanvasComponentDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMScrollView, NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface WCCanvasDownloadScrollListComponent : WCCanvasComponent <UIScrollViewDelegate, scrollViewDelegate, WCCanvasComponentDelegate>
{
    _Bool _m_isAnimating;
    _Bool _m_hasScroll;
    UIView *_m_bgMask;
    MMScrollView *_m_scrollView;
    NSMutableArray *_m_arrCanvasComponent;
    struct CGPoint _m_curOffset;
}

+ (double)calcMaxHeightWithGroup:(id)arg1 maxWidth:(double)arg2 dataItem:(id)arg3 orientation:(long long)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) NSMutableArray *m_arrCanvasComponent; // @synthesize m_arrCanvasComponent=_m_arrCanvasComponent;
@property(nonatomic) _Bool m_hasScroll; // @synthesize m_hasScroll=_m_hasScroll;
@property(nonatomic) struct CGPoint m_curOffset; // @synthesize m_curOffset=_m_curOffset;
@property(nonatomic) _Bool m_isAnimating; // @synthesize m_isAnimating=_m_isAnimating;
@property(retain, nonatomic) MMScrollView *m_scrollView; // @synthesize m_scrollView=_m_scrollView;
@property(retain, nonatomic) UIView *m_bgMask; // @synthesize m_bgMask=_m_bgMask;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)canvasComponent:(id)arg1 willShowViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willAddViewController:(id)arg2;
- (void)canvasComponent:(id)arg1 willExistAndJumpUrl:(id)arg2;
- (void)notifyAppearOrDisappearWhenScrollWithLastOffset:(struct CGPoint)arg1 curOffset:(struct CGPoint)arg2;
- (void)notifyDisappearScrollView:(struct CGPoint)arg1;
- (void)notifyWillAppearScrollView:(struct CGPoint)arg1;
- (void)notifyWhenScrollViewDidScrollOrDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentWillApperaInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)getBackGroundColorWhenLoading:(long long)arg1;
- (void)animationShowWithIndex:(unsigned long long)arg1;
- (void)resetScrollView;
- (void)clearStatus;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

