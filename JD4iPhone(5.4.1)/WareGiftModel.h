//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface WareGiftModel : JDModel
{
    NSString *imgUrl;
    int num;
    NSString *price;
    NSString *name;
    long long skuID;
    NSString *stockStateDesc;
    int stockStateId;
    NSString *typeName;
    int type;
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName;
@property(nonatomic) int stockStateId; // @synthesize stockStateId;
@property(retain, nonatomic) NSString *stockStateDesc; // @synthesize stockStateDesc;
@property(nonatomic) long long skuID; // @synthesize skuID;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *price; // @synthesize price;
@property(nonatomic) int num; // @synthesize num;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
- (void)dealloc;
- (id)init;
- (void)setDataWithDic:(id)arg1;
- (void)updateStockWithModel:(id)arg1;

@end

