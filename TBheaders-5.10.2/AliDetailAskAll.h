//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailAskAll : TBJSONModel
{
    NSString *_askText;	// 8 = 0x8
    NSString *_askIcon;	// 16 = 0x10
    NSString *_answerIcon;	// 24 = 0x18
    NSString *_answerText;	// 32 = 0x20
    NSString *_linkUrl;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *answerText; // @synthesize answerText=_answerText;
@property(copy, nonatomic) NSString *answerIcon; // @synthesize answerIcon=_answerIcon;
@property(copy, nonatomic) NSString *askIcon; // @synthesize askIcon=_askIcon;
@property(copy, nonatomic) NSString *askText; // @synthesize askText=_askText;
- (void).cxx_destruct;

@end

