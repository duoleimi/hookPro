//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableSet, NSString, UIScrollView;

@interface AKMultiItemScrollView : UIView <UIScrollViewDelegate>
{
    id <AKScrollViewDelegate> _delegate;
    id <AKScrollViewDataSource> _dataSource;
    long long currentIndex;
    int style;
    UIScrollView *_contentView;
    NSMutableSet *recycledPages;
    NSMutableSet *visiblePages;
    struct CGRect calculatedFrame;
    long long pageCount;
    double pageWidth;
    double pagePadding;
    double leftMargin;
    double rightMargin;
    struct CGRect originContentViewFrame;
    id <AKScrollViewDelegate> delegate;
    id <AKScrollViewDataSource> dataSource;
}

@property(nonatomic) double pagePadding; // @synthesize pagePadding;
@property(nonatomic) double pageWidth; // @synthesize pageWidth;
@property(readonly, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex;
@property(nonatomic) id <AKScrollViewDelegate> delegate; // @synthesize delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)itemViewAtIndex:(long long)arg1;
- (void)handleTapedPage:(id)arg1;
- (_Bool)isDisplayingPageForIndex:(long long)arg1;
- (id)dequeueRecycledPage;
- (void)loadPages;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (void)getLayoutValueOfDataSource;
- (struct CGSize)contentSizeForContentView;
- (void)reloadData;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (void)dealloc;
@property(nonatomic) id <AKScrollViewDataSource> dataSource; // @synthesize dataSource;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

