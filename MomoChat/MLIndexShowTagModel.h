//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MLIndexShowTagModel : NSObject
{
    int _tagType;
    NSString *_emoji;
    NSString *_title;
    NSString *_bgUrl;
    long long _bg;
}

@property(nonatomic) int tagType; // @synthesize tagType=_tagType;
@property(nonatomic) long long bg; // @synthesize bg=_bg;
@property(retain, nonatomic) NSString *bgUrl; // @synthesize bgUrl=_bgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
- (void).cxx_destruct;

@end

