//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBTakeoutShopFilterService : NSObject
{
    NSArray *_sortList;	// 8 = 0x8
    NSArray *_boltList;	// 16 = 0x10
}

+ (id)defaultService;
@property(retain, nonatomic) NSArray *boltList; // @synthesize boltList=_boltList;
@property(retain, nonatomic) NSArray *sortList; // @synthesize sortList=_sortList;
- (void).cxx_destruct;
- (id)shopFilterPath:(id)arg1;
- (id)shopFilterDir;
- (void)setupFilterDir;
- (void)updateRemoteData:(id)arg1;

@end

