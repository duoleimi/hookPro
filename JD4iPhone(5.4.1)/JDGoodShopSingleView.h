//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDShopDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDFooterLoadingView, JDGoodShopFootView, JDRankReloadView, NSMutableArray, NSObject<JDGoodShopSingleViewDelegate>, NSString, UITableView;

@interface JDGoodShopSingleView : UIView <UITableViewDataSource, UITableViewDelegate, JDShopDelegate>
{
    JDFooterLoadingView *loadingView;
    JDRankReloadView *reloadView;
    double startOffset;
    JDGoodShopFootView *footerView;
    _Bool isMoving;
    _Bool isAnamation;
    _Bool isEndAnamation;
    _Bool _isPicked;
    _Bool _isEndTag;
    UITableView *_mTableView;
    NSString *_footTitle;
    NSObject<JDGoodShopSingleViewDelegate> *_singleDelegate;
    NSMutableArray *_shopArray;
    NSString *_cid;
    NSString *_stestId;
    NSString *_delDoc;
    long long _selectedCellIndex;
    UIView *_loginView;
}

@property(retain, nonatomic) UIView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) long long selectedCellIndex; // @synthesize selectedCellIndex=_selectedCellIndex;
@property(nonatomic) _Bool isEndTag; // @synthesize isEndTag=_isEndTag;
@property(retain, nonatomic) NSString *delDoc; // @synthesize delDoc=_delDoc;
@property(retain, nonatomic) NSString *stestId; // @synthesize stestId=_stestId;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(retain, nonatomic) NSMutableArray *shopArray; // @synthesize shopArray=_shopArray;
@property(nonatomic) __weak NSObject<JDGoodShopSingleViewDelegate> *singleDelegate; // @synthesize singleDelegate=_singleDelegate;
@property(retain, nonatomic) NSString *footTitle; // @synthesize footTitle=_footTitle;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
- (void).cxx_destruct;
- (void)clickWareImageInGoodShop:(long long)arg1 imageTag:(long long)arg2;
- (void)goToShopActivityPage:(id)arg1;
- (void)willDealWithShopCard:(id)arg1 withTag:(long long)arg2 withIndex:(long long)arg3;
- (void)willShieldUnlikeShop:(long long)arg1 login:(_Bool)arg2;
- (void)shiledLoginViewWithShop:(long long)arg1 alreadyLogin:(_Bool)arg2;
- (void)beforFollowOrShieldShopWhenUnLogin;
- (void)clickButtonInReloadView:(id)arg1;
- (void)delayMethod;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewTop;
- (void)reloadAllData;
- (void)layoutSubviews;
- (void)toLoginView:(id)arg1;
- (void)showLoginView;
- (void)createFooterView;
- (void)createTableView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

