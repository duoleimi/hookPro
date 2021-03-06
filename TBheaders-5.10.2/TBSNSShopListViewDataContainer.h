//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardListDataContainer.h"

@class NSArray, NSMutableDictionary, NSNull, TBSNSShopListEmptyData;

@interface TBSNSShopListViewDataContainer : TBSNSCardListDataContainer
{
    NSArray *_bannerItems;	// 8 = 0x8
    NSMutableDictionary *_bannerRedPointTitles;	// 16 = 0x10
    NSNull *_seprator;	// 24 = 0x18
    TBSNSShopListEmptyData *_emptyInfo;	// 32 = 0x20
}

@property(retain, nonatomic) TBSNSShopListEmptyData *emptyInfo; // @synthesize emptyInfo=_emptyInfo;
@property(retain, nonatomic) NSNull *seprator; // @synthesize seprator=_seprator;
@property(retain, nonatomic) NSMutableDictionary *bannerRedPointTitles; // @synthesize bannerRedPointTitles=_bannerRedPointTitles;
@property(retain, nonatomic) NSArray *bannerItems; // @synthesize bannerItems=_bannerItems;
- (void).cxx_destruct;
- (void)setNewChannelReddPointVisable:(_Bool)arg1;
- (long long)caculateItemCountAfterTime:(unsigned long long)arg1;
- (void)removeData:(id)arg1;
- (void)removeDataAtIndex:(long long)arg1;
- (id)getDataInTimelineSection:(long long)arg1;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (void)setContainerDataList:(id)arg1 service:(id)arg2;
- (id)init;

@end

