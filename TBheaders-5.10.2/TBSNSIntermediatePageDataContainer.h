//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardListDataContainer.h"

@class NSArray;

@interface TBSNSIntermediatePageDataContainer : TBSNSCardListDataContainer
{
    NSArray *_topItems;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray *topItems; // @synthesize topItems=_topItems;
- (void).cxx_destruct;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (id)init;

@end

