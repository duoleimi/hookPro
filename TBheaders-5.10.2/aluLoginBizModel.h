//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseBizModel.h"

@class NSDictionary;

@interface aluLoginBizModel : aluBaseBizModel
{
    _Bool _autoLoginAfterH5;	// 8 = 0x8
    _Bool _showLoginId;	// 9 = 0x9
    CDUnknownBlockType _callback;	// 16 = 0x10
    id _context;	// 24 = 0x18
    NSDictionary *_extraInfo;	// 32 = 0x20
}

@property(nonatomic) _Bool showLoginId; // @synthesize showLoginId=_showLoginId;
@property(nonatomic) _Bool autoLoginAfterH5; // @synthesize autoLoginAfterH5=_autoLoginAfterH5;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)dealloc;

@end

