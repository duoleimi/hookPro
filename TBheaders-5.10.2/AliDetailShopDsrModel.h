//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray;
@protocol AliDetailShopDsrItemModel;

@interface AliDetailShopDsrModel : AliDetailComponentModel
{
    NSArray<AliDetailShopDsrItemModel> *_dsrList;	// 8 = 0x8
}

+ (_Bool)childFilter:(id)arg1 layoutModel:(id)arg2;
@property(retain, nonatomic) NSArray<AliDetailShopDsrItemModel> *dsrList; // @synthesize dsrList=_dsrList;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

