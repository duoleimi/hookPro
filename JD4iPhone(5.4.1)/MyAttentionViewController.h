//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SecKillBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MyAttentionKillModel, NSArray, NSDate, NSString, SecKillRequestManager, UITableView;

@interface MyAttentionViewController : SecKillBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_skuIDArray;
    UITableView *_tableView;
    MyAttentionKillModel *_attFloorModel;
    SecKillRequestManager *_requestManger;
    NSDate *_loadDateTime;
}

@property(retain, nonatomic) NSDate *loadDateTime; // @synthesize loadDateTime=_loadDateTime;
@property(retain, nonatomic) SecKillRequestManager *requestManger; // @synthesize requestManger=_requestManger;
@property(retain, nonatomic) MyAttentionKillModel *attFloorModel; // @synthesize attFloorModel=_attFloorModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *skuIDArray; // @synthesize skuIDArray=_skuIDArray;
- (void).cxx_destruct;
- (void)requestData;
- (void)removeHeaderView;
- (void)addNoneHeaderView;
- (void)initUI;
- (void)initData;
- (void)reloadData;
- (void)reconnect;
- (id)getPageName;
- (double)getInterval;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

