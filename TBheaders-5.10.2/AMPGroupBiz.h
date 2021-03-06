//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "AMPGroupBiz-Protocol.h"

@class NSString;
@protocol AMPModuleManager;

@interface AMPGroupBiz : AMPMsgBusHelp <AMPGroupBiz>
{
    _Bool _memCacheGroupUser;	// 8 = 0x8
    double _groupInfoExpiredTime;	// 16 = 0x10
    id <AMPModuleManager> _moduleManager;	// 24 = 0x18
}

@property(retain, nonatomic) id <AMPModuleManager> moduleManager; // @synthesize moduleManager=_moduleManager;
@property(nonatomic) _Bool memCacheGroupUser; // @synthesize memCacheGroupUser=_memCacheGroupUser;
- (void).cxx_destruct;
- (void)ampSyncDataCheckGroupUserInfo:(id)arg1 userId:(id)arg2 modifyTime:(id)arg3;
- (void)ampSyncDataCheckGroupInfo:(id)arg1 modifyTime:(id)arg2;
- (void)ampFriendUpdated:(id)arg1 userId:(id)arg2;
- (void)ampCheckMessagesIncome:(id)arg1 bFromMsgIdCheck:(id)arg2;
- (void)ampHistroyMessagesIncome:(id)arg1 messageList:(id)arg2 hasMore:(id)arg3;
- (void)saveUserInfoFromGroupMessage:(id)arg1;
- (void)groupUsersUpdated:(id)arg1;
- (void)groupInfoUpdated:(id)arg1;
- (void)joinedGroupList;
- (void)saveGroupUserInfoList:(id)arg1 needNotify:(_Bool)arg2;
- (void)saveGroupUserInfoList:(id)arg1;
- (void)saveGroupInfoDirect:(id)arg1;
- (void)groupQRCodeInGroupWithGroupUserInfo:(id)arg1 QRCodeKey:(id)arg2;
- (void)sendChatroomHeartbeat:(id)arg1;
- (void)getGroupQRCodeInfoWithCcode:(id)arg1;
- (void)invalidatesGroupInfo:(id)arg1;
- (void)invalidatesGroupUser:(id)arg1 userId:(id)arg2;
- (void)invalidatesGroupUserNameWithUserId:(id)arg1;
- (void)updateGroupUserName:(id)arg1 withUserId:(id)arg2;
- (void)ampUserUpdated:(id)arg1;
- (void)ProcessModifyGroupUserUpdate:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupUserIdentity:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupUserIsBlackStr:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupUserName:(id)arg1 withUserId:(id)arg2 withGroupId:(id)arg3;
- (void)deleteGroupUsers:(id)arg1 withGroupId:(id)arg2;
- (void)addGroupUsers:(id)arg1 withGroupId:(id)arg2;
- (void)setGroupName:(id)arg1 andGroupPic:(id)arg2 withGroupId:(id)arg3;
- (void)updateGroupName:(id)arg1 withGroupId:(id)arg2;
- (void)initInfo;
- (id)joinedGroupListFromLocal;
- (id)groupUserListByGroupId:(id)arg1;
- (void)cacheGroupUser:(id)arg1;
- (void)asyncBatchGroupUserForUserId:(id)arg1 andGroupId:(id)arg2;
- (id)inerBatchGroupUserForUserId:(id)arg1 andGroupId:(id)arg2 strategy:(long long)arg3;
- (id)batchGroupUserForUserId:(id)arg1 andGroupId:(id)arg2;
- (void)BatchGetGroupNotify:(id)arg1;
- (void)processExitAndDeleteGroupUpdate:(id)arg1 groupId:(id)arg2;
- (void)deleteGroupByGroupId:(id)arg1;
- (void)exitGroupByGroupId:(id)arg1;
- (void)NotifyGroupUpdate:(id)arg1;
- (void)batchGroupInfoListWithCCodeListFromServer:(id)arg1;
- (id)inerGetGroupInfoById:(id)arg1 strategy:(long long)arg2;
- (id)groupInfoById:(id)arg1;
- (id)createGroupWithUserIds:(id)arg1 andType:(unsigned long long)arg2;
@property(nonatomic) double groupInfoExpiredTime; // @synthesize groupInfoExpiredTime=_groupInfoExpiredTime;
- (void)registerPacketParse:(id)arg1;
- (void)stopBiz;
- (void)resetBiz;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

