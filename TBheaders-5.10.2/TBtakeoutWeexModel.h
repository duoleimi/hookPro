//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBtakeoutWeexModel : TBJSONModel
{
    NSString *_targetUrl;	// 8 = 0x8
    NSString *_icon;	// 16 = 0x10
    NSString *_pic;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
- (void).cxx_destruct;
- (id)initWithRecommendItem:(id)arg1;

@end
