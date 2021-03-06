//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMJClientDelegate.h"

@class DevicePacketProvider, IMJBizClient, IMJClientLocationManager, IMJClientMessageManager, IMJClientReconnectManager, NSString, PacketRequest;

@interface IMJClientConnectionManager : NSObject <IMJClientDelegate>
{
    IMJBizClient *client;
    IMJClientReconnectManager *reconnectManager;
    IMJClientLocationManager *locationManager;
    IMJClientMessageManager *msgManager;
    id <ClientConnectionDelegate> delegate;
    DevicePacketProvider *deviceProvider;
    _Bool isDoingLogin;
    long long eType;
    unsigned long long encryptKey;
    NSString *cflag;
    PacketRequest *connRequest;
    PacketRequest *authRequest;
    PacketRequest *sauthRequest;
    _Bool isGoingOnline;
    long long goOnlineTimeout;
    unsigned long long failedCount;
    Class decodingLogClass;
    _Bool _isFirstLogin;
    _Bool _isGuest;
    _Bool _authing;
    NSString *_groupId;
}

@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic, getter=isAuthing) _Bool authing; // @synthesize authing=_authing;
@property(nonatomic) _Bool isGuest; // @synthesize isGuest=_isGuest;
@property(nonatomic) _Bool isFirstLogin; // @synthesize isFirstLogin=_isFirstLogin;
@property(nonatomic) IMJClientMessageManager *msgManager; // @synthesize msgManager;
@property(nonatomic) IMJClientLocationManager *locationManager; // @synthesize locationManager;
@property(nonatomic) IMJClientReconnectManager *reconnectManager; // @synthesize reconnectManager;
@property(nonatomic) long long goOnlineTimeout; // @synthesize goOnlineTimeout;
@property(readonly, nonatomic) _Bool isGoingOnline; // @synthesize isGoingOnline;
@property(readonly, nonatomic) NSString *cflag; // @synthesize cflag;
@property(nonatomic) id <ClientConnectionDelegate> delegate; // @synthesize delegate;
- (void)didRecvDisconnPacket:(id)arg1;
- (void)didFailOfflinePacket:(id)arg1;
- (void)didFinishOfflinePacket:(id)arg1;
- (void)sendOfflinePacket;
- (void)didFailOnlinePacket:(id)arg1;
- (void)didFinishOnlinePacket:(id)arg1;
- (void)sendOnlinePacket;
- (void)didFailSauthPacket:(id)arg1;
- (void)didFinishSauthPacket:(id)arg1;
- (void)sendSauthPacket;
- (void)handleSauthFailedWithPacket:(id)arg1;
- (void)handleResendCommand;
- (void)handleClientDidAuth;
- (void)didFailSauth2Packet:(id)arg1;
- (void)didFinishSauth2Packet:(id)arg1;
- (void)sendSauth2Packet;
- (void)imjClient:(id)arg1 stateChanged:(int)arg2 error:(id)arg3;
- (void)resetConn;
- (void)goOffline;
- (void)goOnline;
- (void)startLogin;
- (void)registerDecodingFailedLogClass:(Class)arg1;
- (id)deviceProvider;
- (void)dealloc;
- (id)initWithClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

