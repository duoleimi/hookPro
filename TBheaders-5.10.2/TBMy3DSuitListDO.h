//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;
@protocol TBMy3DClothDO;

@interface TBMy3DSuitListDO : TBJSONModel
{
    _Bool _success;	// 8 = 0x8
    NSArray<TBMy3DClothDO> *_suitList;	// 16 = 0x10
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSArray<TBMy3DClothDO> *suitList; // @synthesize suitList=_suitList;
- (void).cxx_destruct;

@end

