//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatBaseHander.h"

@class MDCountLimitTimer, PacketRequest;

@interface MDChatSingleHandler : MDChatBaseHander
{
    MDCountLimitTimer *readTimer;
    _Bool _isQuietCheck;
    _Bool _hiddenModelNoticeShowed;
    PacketRequest *_distanceRequest;
    PacketRequest *_relationRequest;
    PacketRequest *_specialFriendRequest;
    PacketRequest *_guideAddFriendTipRequest;
    PacketRequest *_statusRequest;
}

@property(nonatomic) _Bool hiddenModelNoticeShowed; // @synthesize hiddenModelNoticeShowed=_hiddenModelNoticeShowed;
@property(retain, nonatomic) PacketRequest *statusRequest; // @synthesize statusRequest=_statusRequest;
@property(retain, nonatomic) PacketRequest *guideAddFriendTipRequest; // @synthesize guideAddFriendTipRequest=_guideAddFriendTipRequest;
@property(retain, nonatomic) PacketRequest *specialFriendRequest; // @synthesize specialFriendRequest=_specialFriendRequest;
@property(retain, nonatomic) PacketRequest *relationRequest; // @synthesize relationRequest=_relationRequest;
@property(retain, nonatomic) PacketRequest *distanceRequest; // @synthesize distanceRequest=_distanceRequest;
@property(nonatomic) _Bool isQuietCheck; // @synthesize isQuietCheck=_isQuietCheck;
- (void).cxx_destruct;
- (void)updateSessionBeforeBack;
- (void)clearGuideAddFriendTipRequest;
- (void)getGuideAddFriendTipRequest;
- (void)didFailSpecialFriendRequest:(id)arg1;
- (void)didFinishSpecialFriendRequest:(id)arg1;
- (void)clearSpecialFriendRequest;
- (void)getSpecialFriendRequest;
- (id)statusTimeValueWithInfo:(id)arg1;
- (_Bool)checkStatusTypeShouldDisplayStatusArray:(id)arg1 currentType:(long long)arg2;
- (void)didFailStatusRequest:(id)arg1;
- (void)didFinishStatusRequest:(id)arg1;
- (void)requestChatStatus;
- (void)clearAllRequests;
- (void)didFailRelationRequest:(id)arg1;
- (void)didFinishRelationRequest:(id)arg1;
- (void)checkNeedShowHiddenModelTipNotice;
- (void)didFailDistanceRequest:(id)arg1;
- (void)didFinishDistanceRequest:(id)arg1;
- (void)getUserDistanceAndRelation;
- (void)didRecvGiftMsgPacket:(id)arg1;
- (void)didRecvMsgDistancePacket:(id)arg1;
- (void)didRecvSingleMsgPacket:(id)arg1;
- (void)didReceiveTimerMark:(id)arg1;
- (int)audioFileType;
- (long long)photoPreviewSource;
- (int)currentChatType;
- (void)clearReadTimer;
- (void)beginSendDisplay;
- (void)checkDisplayMessage:(long long)arg1;
- (id)titleString;
- (id)initWithTableView:(id)arg1 delegate:(id)arg2 msgid:(id)arg3;
- (void)dealloc;

@end

