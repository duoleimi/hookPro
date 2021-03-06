//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WareFavoriteNewItemDelegate.h"

@class NSString, iCarousel;

@interface WareFavoriteNewView : UIView <WareFavoriteNewItemDelegate>
{
    iCarousel *_contentView;
    int _itemSpace;
    float _itemSpace2;
    int pageNum;
    int pageViewX;
    float pageViewBottomY;
    long long lastViewIndex;
    long long currentPageNum;
    _Bool _shouldWrap;
    float viewpointOffset;
    id <WareFavoriteNewViewDelegate> _delegate;
    long long _itemCount;
    long long lineNumber;
    long long needRollToTop;
    struct CGSize _itemSize;
}

@property(nonatomic) long long needRollToTop; // @synthesize needRollToTop;
@property(nonatomic) long long currentPageNum; // @synthesize currentPageNum;
@property(nonatomic) long long lineNumber; // @synthesize lineNumber;
@property(nonatomic) float viewpointOffset; // @synthesize viewpointOffset;
@property(nonatomic) int itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) __weak id <WareFavoriteNewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) _Bool shouldWrap; // @synthesize shouldWrap=_shouldWrap;
- (void).cxx_destruct;
- (void)didSelectedItemAtIndex:(long long)arg1;
- (void)carouselDidEndScrollingAnimation:(id)arg1;
- (_Bool)carouselShouldWrap:(id)arg1;
- (double)carouselItemWidth:(id)arg1;
- (unsigned long long)numberOfPlaceholdersInCarousel:(id)arg1;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfVisibleItemsInCarousel:(id)arg1;
- (unsigned long long)numberOfItemsInCarousel:(id)arg1;
- (long long)getCellsTotalNum;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

