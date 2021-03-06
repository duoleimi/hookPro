//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMMessageServiceBase.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"
#import "TBIMQueryItemServiceAdapter-Protocol.h"
#import "TBWangXinManagerDelegate-Protocol.h"
#import "WXRoamingBizLogicV2Delegate-Protocol.h"

@class NSDate, NSFetchedResultsController, NSString;
@protocol TBIMSessionAdapter, TBTradeDetailServiceProtocol;

@interface TBIMMessageServiceWangxin : TBIMMessageServiceBase <NSFetchedResultsControllerDelegate, WXRoamingBizLogicV2Delegate, TBWangXinManagerDelegate, TBIMQueryItemServiceAdapter>
{
    id <TBIMSessionAdapter> _session;	// 8 = 0x8
    long long _wantedMessageNum;	// 16 = 0x10
    NSFetchedResultsController *_fetchedResultsController;	// 24 = 0x18
    long long _nToalCount;	// 32 = 0x20
    id <TBTradeDetailServiceProtocol> _tradeDetailService;	// 40 = 0x28
    NSDate *_lastMessageTime;	// 48 = 0x30
    long long _count;	// 56 = 0x38
}

+ (id)shareService;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSDate *lastMessageTime; // @synthesize lastMessageTime=_lastMessageTime;
@property(retain, nonatomic) id <TBTradeDetailServiceProtocol> tradeDetailService; // @synthesize tradeDetailService=_tradeDetailService;
@property(nonatomic) long long nToalCount; // @synthesize nToalCount=_nToalCount;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(nonatomic) long long wantedMessageNum; // @synthesize wantedMessageNum=_wantedMessageNum;
@property(retain, nonatomic) id <TBIMSessionAdapter> session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)saveMsgImage:(id)arg1;
- (void)loginSuccess;
- (void)wangxinOffineMsgFinished;
- (void)generateWWSession;
- (_Bool)queryItemWithItemId:(id)arg1 forSession:(id)arg2;
- (void)insertNeedSendMessages:(id)arg1;
- (void)reportNewMessages;
- (void)getMoreMessageByRoaming;
- (_Bool)checkOnlineMessagePassword:(id)arg1;
- (void)didCheckPasswordOfQueryChatLogWithError:(id)arg1;
- (void)didRoamP2PChatLogExForBuyerWithError:(id)arg1 otherInfo:(id)arg2;
- (id)getUnreadWWMessage:(unsigned long long)arg1 withSessionId:(id)arg2;
- (id)getMessageDateOffset;
- (id)_getAllMessage;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)changeTBItemLink2Summary:(id)arg1 originMessage:(id)arg2;
- (_Bool)loadImageMessage:(id)arg1 currentMessage:(id)arg2 count:(unsigned long long)arg3 isFront:(_Bool)arg4;
- (void)loadUnreadMessagesBySession:(id)arg1 unreadMessageCount:(unsigned long long)arg2;
- (_Bool)loadMessage:(id)arg1 lastMessage:(id)arg2 count:(unsigned long long)arg3;
- (void)leaveSession:(id)arg1;
- (void)enterSession:(id)arg1;
- (void)checkMessageUniqueId:(id)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (_Bool)resendMessage:(id)arg1;
- (id)generateVideoWihtLocalUrl:(id)arg1 previewImage:(id)arg2 duration:(long long)arg3 width:(double)arg4 height:(double)arg5 session:(id)arg6;
- (id)generateVoiceMessage:(id)arg1 withLocalAudio:(id)arg2 duration:(long long)arg3 session:(id)arg4;
- (_Bool)failedMessage:(id)arg1;
- (id)generateImageMessage:(id)arg1 session:(id)arg2;
- (id)generateTextMessage:(id)arg1 session:(id)arg2 withAiTaUserIdList:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

