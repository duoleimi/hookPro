//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchJsonModel.h"

@class NSString;

@interface TMCIconStyle : SearchJsonModel
{
    NSString *_backgroundColor;	// 8 = 0x8
    NSString *_fontColor;	// 16 = 0x10
    NSString *_textValue;	// 24 = 0x18
    NSString *_height;	// 32 = 0x20
    NSString *_url;	// 40 = 0x28
    NSString *_width;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
@property(copy, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;

@end

