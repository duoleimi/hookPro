//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBTaoPasswordShareItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_taoPassword;	// 16 = 0x10
    NSString *_leftButtonText;	// 24 = 0x18
    NSString *_rightButtonText;	// 32 = 0x20
    CDUnknownBlockType _leftButtonTapBlock;	// 40 = 0x28
    CDUnknownBlockType _rightButtonTapBlock;	// 48 = 0x30
}

@property(copy, nonatomic) CDUnknownBlockType rightButtonTapBlock; // @synthesize rightButtonTapBlock=_rightButtonTapBlock;
@property(copy, nonatomic) CDUnknownBlockType leftButtonTapBlock; // @synthesize leftButtonTapBlock=_leftButtonTapBlock;
@property(retain, nonatomic) NSString *rightButtonText; // @synthesize rightButtonText=_rightButtonText;
@property(retain, nonatomic) NSString *leftButtonText; // @synthesize leftButtonText=_leftButtonText;
@property(retain, nonatomic) NSString *taoPassword; // @synthesize taoPassword=_taoPassword;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

