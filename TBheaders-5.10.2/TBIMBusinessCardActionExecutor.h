//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MUKSearchCommonViewContollerDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"

@class NSMutableArray, NSString, TBIMBusinessCardSelectedModel, UIViewController;
@protocol TBIMRelationServiceAdapter;

@interface TBIMBusinessCardActionExecutor : NSObject <TBIMRelationServiceDelegate, MUKSearchCommonViewContollerDelegate>
{
    CDUnknownBlockType _sendBlock;	// 8 = 0x8
    CDUnknownBlockType _closeBlock;	// 16 = 0x10
    UIViewController *_associateViewController;	// 24 = 0x18
    NSMutableArray *_friends;	// 32 = 0x20
    NSMutableArray *_searchResultList;	// 40 = 0x28
    TBIMBusinessCardSelectedModel *_needSendBusinessCardSelectedModel;	// 48 = 0x30
    id <TBIMRelationServiceAdapter> _relationService;	// 56 = 0x38
}

@property(retain, nonatomic) id <TBIMRelationServiceAdapter> relationService; // @synthesize relationService=_relationService;
@property(retain, nonatomic) TBIMBusinessCardSelectedModel *needSendBusinessCardSelectedModel; // @synthesize needSendBusinessCardSelectedModel=_needSendBusinessCardSelectedModel;
@property(retain, nonatomic) NSMutableArray *searchResultList; // @synthesize searchResultList=_searchResultList;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
@property(nonatomic) __weak UIViewController *associateViewController; // @synthesize associateViewController=_associateViewController;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
- (void).cxx_destruct;
- (void)cellDidSelecte:(id)arg1 withCellModel:(id)arg2;
- (void)cellReused:(id)arg1 withCellModel:(id)arg2;
- (id)cellWithCellModel:(id)arg1 tableView:(id)arg2 isShowTableView:(_Bool)arg3;
- (id)sectionHeaderViewForSection:(long long)arg1 isShowTableView:(_Bool)arg2;
- (double)sectionHeaderViewHeightForSection:(long long)arg1 isShowTableView:(_Bool)arg2;
- (void)selectDataVCCancel:(id)arg1;
- (id)navgationBarCenterTitle;
- (id)searchDataWithKey:(id)arg1;
- (id)showData;
- (void)taoFriendDataUpdate:(id)arg1;
- (id)emptyTitleText;
- (_Bool)needToShowEmptyView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertViewWithBusinessCardSelectedModel:(id)arg1;
- (void)showBusinessCardSelectedViewControllerWithFriends:(id)arg1;
- (void)showBusinessCardSelectedViewControllerWithCloseBlock:(CDUnknownBlockType)arg1 sendBlock:(CDUnknownBlockType)arg2 associateViewController:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

