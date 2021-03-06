//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveBroadCasterAppointmentInfo;

@interface TBLiveBroadCasterAccountInfo : TBJSONModel
{
    NSString *_accountId;	// 8 = 0x8
    NSString *_accountName;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_headImg;	// 32 = 0x20
    NSString *_accountDes;	// 40 = 0x28
    NSString *_accountExplain;	// 48 = 0x30
    NSString *_accountIntroduce;	// 56 = 0x38
    NSString *_typeLogo;	// 64 = 0x40
    NSString *_url;	// 72 = 0x48
    NSString *_backGroundImg;	// 80 = 0x50
    NSString *_jumpUrl;	// 88 = 0x58
    NSString *_strDes;	// 96 = 0x60
    NSString *_fansNum;	// 104 = 0x68
    NSString *_hotsNum;	// 112 = 0x70
    NSString *_status;	// 120 = 0x78
    NSString *_v;	// 128 = 0x80
    NSString *_follow;	// 136 = 0x88
    NSString *_subscribe;	// 144 = 0x90
    NSString *_wangwangLink;	// 152 = 0x98
    NSString *_hasShop;	// 160 = 0xa0
    TBLiveBroadCasterAppointmentInfo *_appointment;	// 168 = 0xa8
}

@property(retain, nonatomic) TBLiveBroadCasterAppointmentInfo *appointment; // @synthesize appointment=_appointment;
@property(copy, nonatomic) NSString *hasShop; // @synthesize hasShop=_hasShop;
@property(copy, nonatomic) NSString *wangwangLink; // @synthesize wangwangLink=_wangwangLink;
@property(copy, nonatomic) NSString *subscribe; // @synthesize subscribe=_subscribe;
@property(copy, nonatomic) NSString *follow; // @synthesize follow=_follow;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *hotsNum; // @synthesize hotsNum=_hotsNum;
@property(copy, nonatomic) NSString *fansNum; // @synthesize fansNum=_fansNum;
@property(copy, nonatomic) NSString *strDes; // @synthesize strDes=_strDes;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *backGroundImg; // @synthesize backGroundImg=_backGroundImg;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *typeLogo; // @synthesize typeLogo=_typeLogo;
@property(copy, nonatomic) NSString *accountIntroduce; // @synthesize accountIntroduce=_accountIntroduce;
@property(copy, nonatomic) NSString *accountExplain; // @synthesize accountExplain=_accountExplain;
@property(copy, nonatomic) NSString *accountDes; // @synthesize accountDes=_accountDes;
@property(copy, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;

@end

