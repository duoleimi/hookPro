//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBMyTaobaoSpecialInfoModel : TBJSONModel
{
    _Bool _useVipHead;	// 8 = 0x8
    NSString *_vipScore;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *vipScore; // @synthesize vipScore=_vipScore;
@property(nonatomic) _Bool useVipHead; // @synthesize useVipHead=_useVipHead;
- (void).cxx_destruct;

@end

