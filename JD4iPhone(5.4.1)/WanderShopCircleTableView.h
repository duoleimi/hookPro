//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDReloadViewDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WanderShopCircleDelegate.h"

@class JDFooterLoadingView, JDStoreNetwork, NSString, NewRefreshTableHeaderView, UITableView, WanderShopCircleModel, WanderShopCircleTableViewRecommendCell;

@interface WanderShopCircleTableView : UIView <UITableViewDelegate, UITableViewDataSource, NewRefreshTableHeaderViewDelegate, WanderShopCircleDelegate, JDReloadViewDelegate>
{
    _Bool _isJoinRequesting;
    _Bool _isSelectRecommend;
    _Bool _isLoading;
    _Bool _isGetMore;
    _Bool _isFirstLoaded;
    _Bool _isStackSelectedRecommend;
    id <WanderShopCircleListDelegate> _delegate;
    long long _rowsCount;
    UITableView *_circleTableview;
    NewRefreshTableHeaderView *_refreshHeaderView;
    JDFooterLoadingView *_footerView;
    JDStoreNetwork *_myCircleDao;
    JDStoreNetwork *_recommendCircleDao;
    JDStoreNetwork *_joinDao;
    WanderShopCircleTableViewRecommendCell *_tempCircleCell;
    WanderShopCircleModel *_tempJoinModel;
}

@property(retain, nonatomic) WanderShopCircleModel *tempJoinModel; // @synthesize tempJoinModel=_tempJoinModel;
@property(retain, nonatomic) WanderShopCircleTableViewRecommendCell *tempCircleCell; // @synthesize tempCircleCell=_tempCircleCell;
@property(nonatomic) _Bool isStackSelectedRecommend; // @synthesize isStackSelectedRecommend=_isStackSelectedRecommend;
@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(retain, nonatomic) JDStoreNetwork *joinDao; // @synthesize joinDao=_joinDao;
@property(retain, nonatomic) JDStoreNetwork *recommendCircleDao; // @synthesize recommendCircleDao=_recommendCircleDao;
@property(retain, nonatomic) JDStoreNetwork *myCircleDao; // @synthesize myCircleDao=_myCircleDao;
@property(retain, nonatomic) JDFooterLoadingView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NewRefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) UITableView *circleTableview; // @synthesize circleTableview=_circleTableview;
@property(nonatomic) long long rowsCount; // @synthesize rowsCount=_rowsCount;
@property(nonatomic) _Bool isSelectRecommend; // @synthesize isSelectRecommend=_isSelectRecommend;
@property(nonatomic) _Bool isJoinRequesting; // @synthesize isJoinRequesting=_isJoinRequesting;
@property(nonatomic) __weak id <WanderShopCircleListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)openCircle:(id)arg1;
- (void)joinCircle:(id)arg1;
- (void)reloadData;
- (void)removeCircle:(id)arg1 CircleMode:(id)arg2;
- (void)finishLogin;
- (void)joinCircle:(id)arg1 CircleCell:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)getCircleCount:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadMoreData;
- (void)loginJoinCircle;
- (void)refreshTableView;
- (void)refreshData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finishLoading;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)reconnect;
- (void)removeReloadView;
- (void)showLoadErrorView;
- (id)initWithFrame:(struct CGRect)arg1 isSelectRecommend:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

