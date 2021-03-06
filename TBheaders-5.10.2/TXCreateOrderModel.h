//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TXCreateOrderItemModel;

@interface TXCreateOrderModel : TBJSONModel
{
    NSString *_cnDesc;	// 8 = 0x8
    NSString *_desc;	// 16 = 0x10
    NSString *_result;	// 24 = 0x18
    NSString *_simplePay;	// 32 = 0x20
    NSString *_createOrderSid;	// 40 = 0x28
    NSArray<TXCreateOrderItemModel> *_orderList;	// 48 = 0x30
}

+ (id)deepCopy:(id)arg1;
@property(retain, nonatomic) NSArray<TXCreateOrderItemModel> *orderList; // @synthesize orderList=_orderList;
@property(copy, nonatomic) NSString *createOrderSid; // @synthesize createOrderSid=_createOrderSid;
@property(copy, nonatomic) NSString *simplePay; // @synthesize simplePay=_simplePay;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *cnDesc; // @synthesize cnDesc=_cnDesc;
- (void).cxx_destruct;

@end

