//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MUAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDPersonalSetting, MDSettingApiHelper, NSArray, NSString, UITableView, UIView;

@interface MDMoreSettingController : MDViewController <UITableViewDelegate, UITableViewDataSource, MUAlertViewDelegate>
{
    UITableView *_moreMessageSettingTableView;
    NSArray *_dataSourceArray;
    MDPersonalSetting *_personalSetting;
    MDSettingApiHelper *_apiHelper;
    UIView *_nightContentView;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIView *nightContentView; // @synthesize nightContentView=_nightContentView;
@property(retain, nonatomic) MDSettingApiHelper *apiHelper; // @synthesize apiHelper=_apiHelper;
@property(retain, nonatomic) MDPersonalSetting *personalSetting; // @synthesize personalSetting=_personalSetting;
@property(copy, nonatomic) NSArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) UITableView *moreMessageSettingTableView; // @synthesize moreMessageSettingTableView=_moreMessageSettingTableView;
- (void).cxx_destruct;
- (id)messageSettingTableView;
- (id)dataSource;
- (id)getCustomDateWithHour:(long long)arg1;
- (_Bool)isBetweenFromHour:(long long)arg1 toHour:(long long)arg2;
- (void)refreshView;
- (void)addNavigationBar;
- (void)savePersonalSetting;
- (void)restoreOldPersonalSetting;
- (void)backupOldPersonalSetting;
- (void)removeHud;
- (void)showHud;
- (void)back;
- (void)recommendedClick;
- (void)momentCommentdClick;
- (void)momentLikeClick;
- (void)giftsClick;
- (void)circleClick;
- (void)groupClick;
- (void)strangerClick;
- (void)friendNoticeClick;
- (void)commentClick;
- (void)agreementClick;
- (void)receiveNoticePrivateMethod;
- (void)receiveNoticeClick:(id)arg1;
- (void)alertViewManagerClickedGrayView:(id)arg1;
- (void)alertViewManagerClickedEnsureButton:(id)arg1;
- (void)alertViewManagerClickedCancelButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
