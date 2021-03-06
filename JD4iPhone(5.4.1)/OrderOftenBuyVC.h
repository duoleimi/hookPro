//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "NewRefreshTableHeaderViewDelegate.h"
#import "OOBItemDelegate.h"
#import "OOBListCellDelegate.h"
#import "OOBRecommendItemViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDStoreNetwork, NSMutableArray, NSString, NewRefreshTableHeaderView, OrderOftenBuyCartBarButtonItem, UITableView;

@interface OrderOftenBuyVC : JDViewController <OOBItemDelegate, OOBRecommendItemViewDelegate, OOBListCellDelegate, NewRefreshTableHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
{
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reconnect;
- (void)refreshData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateCartNumber;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)network_cancel;
- (void)_handleComponentsForDeleteOftenBuyItem:(id)arg1 indexPath:(id)arg2;
- (void)network_deleteOftenBuyItemIndexPath:(id)arg1;
- (void)_handleComponentsForRequestDataLists:(id)arg1;
- (void)network_requestDataLists;
- (id)setupdateModel:(id)arg1 param:(id)arg2;
@property(retain, nonatomic) JDStoreNetwork *network;
@property(retain, nonatomic) OrderOftenBuyCartBarButtonItem *cartBarButtonItem;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeader;
@property(retain, nonatomic) UITableView *tableView;
- (_Bool)_checkModel:(id)arg1;
- (void)jumpBuyNow:(id)arg1;
- (void)jumpGoodsDetail:(id)arg1;
- (void)jumpCart;
- (void)addCartResult:(id)arg1;
- (void)removeNotifi;
- (void)addNotifi;
- (_Bool)_checkModel:(id)arg1;
- (void)mta_recommendAddCart:(id)arg1;
- (void)mta_clickRecommendItem:(id)arg1;
- (void)mta_oftenBuyDeleteItem:(id)arg1;
- (void)mta_oftenBuyBuyNow:(id)arg1;
- (void)mta_oftenBuyAddCart:(id)arg1;
- (void)mta_oftenBuyItemClick:(id)arg1;
- (void)mta_goCart;
- (void)mta_pv;
@property(retain, nonatomic) NSString *sourceValue;
- (_Bool)swipeCell:(id)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3;
- (id)swipeCell:(id)arg1 swipeButtonsForDirection:(long long)arg2 swipeSettings:(id)arg3;
- (_Bool)swipeCell:(id)arg1 canSwipe:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addCartAnimation:(id)arg1 startPoint:(struct CGPoint)arg2;
- (void)clickedRecommendAddCart:(id)arg1;
- (void)clickedRecommendItem:(id)arg1;
- (void)clickedAddCart:(id)arg1;
- (void)clickedBuyNow:(id)arg1;
- (void)clickedListItem:(id)arg1;
- (void)goToCartClicked;
- (id)tempLayer;
- (void)setTempLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

