//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDMobileOrderInfo : NSObject
{
    NSString *m_orderId;
    NSString *m_chargeNum;
    NSString *m_phoneNumber;
    NSString *m_phoneAddr;
    NSString *m_payType;
    float m_orderPrice;
}

@property(retain, nonatomic) NSString *payType; // @synthesize payType=m_payType;
@property(nonatomic) float orderPrice; // @synthesize orderPrice=m_orderPrice;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=m_phoneNumber;
@property(retain, nonatomic) NSString *chargeNum; // @synthesize chargeNum=m_chargeNum;
@property(retain, nonatomic) NSString *phoneAddr; // @synthesize phoneAddr=m_phoneAddr;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=m_orderId;
- (void)dealloc;

@end
