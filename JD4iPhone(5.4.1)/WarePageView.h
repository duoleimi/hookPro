//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;

@interface WarePageView : UIView <UIScrollViewDelegate>
{
    _Bool _canScroll;
    NSArray *_pageViewArray;
    id <WarePageViewDelegate> _delegate;
    UIScrollView *_pageScrollView;
    NSMutableArray *_cellArray;
    long long _currentPageIndex;
}

@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) __weak id <WarePageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *pageViewArray; // @synthesize pageViewArray=_pageViewArray;
- (void).cxx_destruct;
- (long long)getPageIndex;
- (void)setPageIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

