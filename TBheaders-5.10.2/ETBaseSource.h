//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ETBaseSource : NSObject
{
    struct CGSize _baseSize;	// 8 = 0x8
    double _widthForHeight;	// 24 = 0x18
}

+ (id)cellForIdentifier;
+ (Class)cellForClass;
@property(readonly, nonatomic) double widthForHeight; // @synthesize widthForHeight=_widthForHeight;
@property(nonatomic) struct CGSize baseSize; // @synthesize baseSize=_baseSize;
- (void)reset;
- (double)heightForSource:(double)arg1;

@end

