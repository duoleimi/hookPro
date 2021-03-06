//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "SSSDisplayProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CAShapeLayer, NSString, SSSGroupFloorModel, UICollectionView, UIView;

@interface SSSSuperValueTabView : UITableViewHeaderFooterView <SSSDisplayProtocol, UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _click;
    long long _selectIndex;
    UICollectionView *_collectionView;
    UIView *_moveLineView;
    CAShapeLayer *_lineLayer;
    double _interitemSpacing;
    double _sectionPadding;
    SSSGroupFloorModel *_floorModel;
}

@property(retain, nonatomic) SSSGroupFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(nonatomic) double sectionPadding; // @synthesize sectionPadding=_sectionPadding;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(retain, nonatomic) CAShapeLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UIView *moveLineView; // @synthesize moveLineView=_moveLineView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(copy, nonatomic) CDUnknownBlockType click; // @synthesize click=_click;
- (void).cxx_destruct;
- (void)updateOldCellStatus;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)moveLineToX:(double)arg1;
- (void)moveToIndex:(unsigned long long)arg1;
- (void)adjustCateCollectionViewPadding;
- (void)selectToIndex:(long long)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

