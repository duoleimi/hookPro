//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDSecurityCodeViewDelegate.h"
#import "JDShopCouponSingleViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDShopInfoBaseModel, JDShopReceiveCouponManager, JDStoreNetwork, NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface JDShopNewCouponListViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, JDShopCouponSingleViewDelegate, JDSecurityCodeViewDelegate>
{
    JDShopReceiveCouponManager *receiveCouponMng;
    JDStoreNetwork *netWork;
    _Bool bSendingReceiveCouponReq;
    _Bool bNeedShowSecurityCodeView;
    NSString *_pageSource;
    CDUnknownBlockType _takeSuccessBlock;
    long long _selectedDiscountIndex;
    NSMutableArray *_couponModelArray;
    UITableView *_discountTable;
    JDShopInfoBaseModel *_shopInfoBaseModel;
    NSMutableDictionary *_securityDic;
}

@property(retain, nonatomic) NSMutableDictionary *securityDic; // @synthesize securityDic=_securityDic;
@property(retain, nonatomic) JDShopInfoBaseModel *shopInfoBaseModel; // @synthesize shopInfoBaseModel=_shopInfoBaseModel;
@property(retain, nonatomic) UITableView *discountTable; // @synthesize discountTable=_discountTable;
@property(retain, nonatomic) NSMutableArray *couponModelArray; // @synthesize couponModelArray=_couponModelArray;
@property(nonatomic) long long selectedDiscountIndex; // @synthesize selectedDiscountIndex=_selectedDiscountIndex;
@property(copy) CDUnknownBlockType takeSuccessBlock; // @synthesize takeSuccessBlock=_takeSuccessBlock;
@property(retain, nonatomic) NSString *pageSource; // @synthesize pageSource=_pageSource;
- (void).cxx_destruct;
- (void)getNativeVendorInfo;
- (void)goToReceiveCoupon;
- (void)receiveCouponByStatus:(long long)arg1;
- (void)clickCouponView:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshViewToTaked:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initControllerWithMoreDiscountTickets:(id)arg1 shopInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

