//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface HTPromotionHotModule : TBJSONModel
{
    long long _id;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_goodPic;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *goodPic; // @synthesize goodPic=_goodPic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

