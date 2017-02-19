//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface TBDetailDebugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isExisting;	// 8 = 0x8
    _Bool _itemIdLocked;	// 9 = 0x9
    _Bool _IPLocked;	// 10 = 0xa
    _Bool _paramLocked;	// 11 = 0xb
    _Bool _mockLocked;	// 12 = 0xc
    NSString *_currentItemId;	// 16 = 0x10
    NSString *_currentIP;	// 24 = 0x18
    NSMutableDictionary *_currentParams;	// 32 = 0x20
    NSString *_currentRequestURL;	// 40 = 0x28
    NSString *_currentResponse;	// 48 = 0x30
    NSString *_currentMockResponse;	// 56 = 0x38
    UITableView *_debugTableView;	// 64 = 0x40
    NSMutableArray *_sectionHeaderTips;	// 72 = 0x48
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *sectionHeaderTips; // @synthesize sectionHeaderTips=_sectionHeaderTips;
@property(retain, nonatomic) UITableView *debugTableView; // @synthesize debugTableView=_debugTableView;
@property(nonatomic) __weak NSString *currentMockResponse; // @synthesize currentMockResponse=_currentMockResponse;
@property(nonatomic) __weak NSString *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(nonatomic) __weak NSString *currentRequestURL; // @synthesize currentRequestURL=_currentRequestURL;
@property(retain, nonatomic) NSMutableDictionary *currentParams; // @synthesize currentParams=_currentParams;
@property(retain, nonatomic) NSString *currentIP; // @synthesize currentIP=_currentIP;
@property(retain, nonatomic) NSString *currentItemId; // @synthesize currentItemId=_currentItemId;
@property(nonatomic, getter=isMockLocked) _Bool mockLocked; // @synthesize mockLocked=_mockLocked;
@property(nonatomic, getter=isParamLocked) _Bool paramLocked; // @synthesize paramLocked=_paramLocked;
@property(nonatomic, getter=isIPLocked) _Bool IPLocked; // @synthesize IPLocked=_IPLocked;
@property(nonatomic, getter=isItemIdLocked) _Bool itemIdLocked; // @synthesize itemIdLocked=_itemIdLocked;
@property(nonatomic) _Bool isExisting; // @synthesize isExisting=_isExisting;
- (void).cxx_destruct;
- (id)cellIdentifierAtRow:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)viewFromAriderLogManagerWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
