//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface OrderUsedYueModel : JDModel
{
    NSNumber *_MoneyBalance;
    NSNumber *_IsUseBalance;
    NSString *_BalanceMessage;
}

@property(copy, nonatomic) NSString *BalanceMessage; // @synthesize BalanceMessage=_BalanceMessage;
@property(retain, nonatomic) NSNumber *IsUseBalance; // @synthesize IsUseBalance=_IsUseBalance;
@property(retain, nonatomic) NSNumber *MoneyBalance; // @synthesize MoneyBalance=_MoneyBalance;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
