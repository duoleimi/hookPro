//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer, YHMuticastDelegate;
@protocol TBOfficalCenterDelegate;

@interface TBOfficalCenter : NSObject
{
    TBSDKMTOPServer *_officalMsgMtopSer;	// 8 = 0x8
    YHMuticastDelegate<TBOfficalCenterDelegate> *_mutiCastDelegate;	// 16 = 0x10
}

+ (id)saveOfficailAccountTOAMP:(id)arg1;
+ (id)sharedCenter;
@property(retain, nonatomic) YHMuticastDelegate<TBOfficalCenterDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
@property(retain, nonatomic) TBSDKMTOPServer *officalMsgMtopSer; // @synthesize officalMsgMtopSer=_officalMsgMtopSer;
- (void).cxx_destruct;
- (void)clearPublicAccountUnreaded:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)clearOfficalUnreadedAccount:(id)arg1;
- (void)getOfficalMessageByID:(id)arg1 lastMsgID:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getOffcialRecentContactList;
- (void)onPushMessageArrived:(id)arg1;
- (void)proccessRecentOfficalSessions:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (void)resetCenter;
- (id)init;

@end

