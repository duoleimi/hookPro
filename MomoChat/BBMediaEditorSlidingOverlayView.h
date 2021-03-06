//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UICollectionView;

@interface BBMediaEditorSlidingOverlayView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _didAppear;
    id <BBMediaEditorSlidingOverlayViewDelegate> _delegate;
    double _currentOffset;
    UICollectionView *_collectionView;
    NSArray *_filters;
    long long _scrollStartIndex;
}

@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) long long scrollStartIndex; // @synthesize scrollStartIndex=_scrollStartIndex;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property(nonatomic) __weak id <BBMediaEditorSlidingOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollToNextPage;
@property(nonatomic) long long currentPageIndex;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)filterAtPageIndex:(long long)arg1;
- (void)didMoveToWindow;
- (void)setupMediaEditorSlidingOverlayView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

