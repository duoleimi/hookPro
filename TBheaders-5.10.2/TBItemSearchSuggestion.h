//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBItemSearchSuggestion : NSObject
{
    NSString *_title;	// 8 = 0x8
    long long _resultCount;	// 16 = 0x10
    NSString *_uiType;	// 24 = 0x18
    NSMutableArray *_magic;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
    NSString *_suggestRN;	// 48 = 0x30
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *suggestRN; // @synthesize suggestRN=_suggestRN;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *magic; // @synthesize magic=_magic;
@property(retain, nonatomic) NSString *uiType; // @synthesize uiType=_uiType;
@property(nonatomic) long long resultCount; // @synthesize resultCount=_resultCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

