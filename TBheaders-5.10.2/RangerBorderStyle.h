//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class RangerCssNumber, UIColor;

@interface RangerBorderStyle : NSObject
{
    RangerCssNumber *_width;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

@property unsigned long long type; // @synthesize type=_type;
@property(retain) UIColor *color; // @synthesize color=_color;
@property(retain) RangerCssNumber *width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)initBorderStyleFromStr:(id)arg1;

@end

