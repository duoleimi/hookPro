//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, NSTimer, TBModelStatusHandler, TBModelStatusInfo, TBSNSCardListDataContainer, TBSNSCardListDataMapper, TBSNSCardListDataRequest, TBSNSCardListParam, UICardListView, UITableView;
@protocol TBSNSCardListDelegate;

@interface TBSNSCardListViewController : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    double oldTime;	// 8 = 0x8
    double oldOffset;	// 16 = 0x10
    long long scrollOrientation;	// 24 = 0x18
    long long lastRow;	// 32 = 0x20
    _Bool _templateLoaded;	// 40 = 0x28
    _Bool _isRendingNetData;	// 41 = 0x29
    _Bool _isNeedEmptyView;	// 42 = 0x2a
    _Bool _justDoManulRefresh;	// 43 = 0x2b
    int _currentPage;	// 44 = 0x2c
    unsigned long long _state;	// 48 = 0x30
    TBSNSCardListDataRequest *_dataRequset;	// 56 = 0x38
    TBSNSCardListDataContainer *_dataContainer;	// 64 = 0x40
    TBSNSCardListParam *_cardListParam;	// 72 = 0x48
    TBSNSCardListDataMapper *_dataMapper;	// 80 = 0x50
    UICardListView *_cardListView;	// 88 = 0x58
    UITableView *_tableView;	// 96 = 0x60
    id <TBSNSCardListDelegate> _delegate;	// 104 = 0x68
    TBModelStatusHandler *_emptyStatusHandler;	// 112 = 0x70
    TBModelStatusInfo *_emptyStatusInfo;	// 120 = 0x78
    CDUnknownBlockType _selectorForEmptyBlock;	// 128 = 0x80
    CDUnknownBlockType _dfleFirstPageFinishBlock;	// 136 = 0x88
    NSTimer *_myLoadingTimer;	// 144 = 0x90
    double _scrollingSpeed;	// 152 = 0x98
    struct UIEdgeInsets _contentInset;	// 160 = 0xa0
}

@property(nonatomic) _Bool justDoManulRefresh; // @synthesize justDoManulRefresh=_justDoManulRefresh;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
@property(nonatomic) NSTimer *myLoadingTimer; // @synthesize myLoadingTimer=_myLoadingTimer;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) CDUnknownBlockType dfleFirstPageFinishBlock; // @synthesize dfleFirstPageFinishBlock=_dfleFirstPageFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType selectorForEmptyBlock; // @synthesize selectorForEmptyBlock=_selectorForEmptyBlock;
@property(retain, nonatomic) TBModelStatusInfo *emptyStatusInfo; // @synthesize emptyStatusInfo=_emptyStatusInfo;
@property(retain, nonatomic) TBModelStatusHandler *emptyStatusHandler; // @synthesize emptyStatusHandler=_emptyStatusHandler;
@property(nonatomic) _Bool isNeedEmptyView; // @synthesize isNeedEmptyView=_isNeedEmptyView;
@property(nonatomic) _Bool isRendingNetData; // @synthesize isRendingNetData=_isRendingNetData;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak id <TBSNSCardListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UICardListView *cardListView; // @synthesize cardListView=_cardListView;
@property(retain, nonatomic) TBSNSCardListDataMapper *dataMapper; // @synthesize dataMapper=_dataMapper;
@property(retain, nonatomic) TBSNSCardListParam *cardListParam; // @synthesize cardListParam=_cardListParam;
@property(retain, nonatomic) TBSNSCardListDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(retain, nonatomic) TBSNSCardListDataRequest *dataRequset; // @synthesize dataRequset=_dataRequset;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)cacheKeyForAPI:(id)arg1;
- (void)itemCount:(long long)arg1 newItemCount:(long long)arg2 state:(long long)arg3 error:(id)arg4 forAPI:(id)arg5;
- (id)serviceParameters:(long long)arg1 forService:(id)arg2;
- (Class)cardListItemClass;
- (id)apiVersion;
- (id)apiString;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)ItemSelected:(int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)cardUICellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)autoPullRefreshWithState:(unsigned long long)arg1;
- (void)nextPageNetData;
- (void)resetNetData;
- (void)refreshNetData;
- (void)reloadNetData;
- (void)loadCacheData;
- (_Bool)checkEmpty;
- (void)serviceFinish:(_Bool)arg1 withError:(id)arg2;
- (void)scrollToTop;
- (void)reloadData;
- (id)getValueWithParams:(id)arg1;
- (void)refreshVisibleCells;
- (void)refreshCell:(long long)arg1;
- (_Bool)canStartToLoadResource;
- (id)getService;
- (_Bool)isListScrolling;
- (_Bool)isListScrollEnabled;
- (void)enableListScroll:(_Bool)arg1;
- (id)getCellByIndex:(long long)arg1;
- (void)setListContentInset:(struct UIEdgeInsets)arg1;
- (id)getLastItem;
- (id)getFirstItem;
- (id)getDataAtIndex:(int)arg1;
- (int)getDataCount;
- (void)dealloc;
- (id)createCardListWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

