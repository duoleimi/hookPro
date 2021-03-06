//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALRatio : NSObject
{
    long long _longSide;	// 8 = 0x8
    long long _shortSide;	// 16 = 0x10
    _Bool _isLandscape;	// 24 = 0x18
}

@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(readonly, nonatomic) double ratio;
- (struct CGSize)values;
- (id)description;
- (id)initWithValue1:(long long)arg1 value2:(long long)arg2;

@end

