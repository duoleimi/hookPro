//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailJHSMarketingItemButtonActionModel, NSString;

@interface AliDetailJHSMarketingItemButtonModel : TBJSONModel
{
    _Bool _status;	// 8 = 0x8
    NSString *_link;	// 16 = 0x10
    NSString *_msgDisplay;	// 24 = 0x18
    AliDetailJHSMarketingItemButtonActionModel *_action;	// 32 = 0x20
}

@property(retain, nonatomic) AliDetailJHSMarketingItemButtonActionModel *action; // @synthesize action=_action;
@property(nonatomic) _Bool status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *msgDisplay; // @synthesize msgDisplay=_msgDisplay;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
- (void).cxx_destruct;

@end

