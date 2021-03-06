//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXASLayoutSpec.h"

@interface NXASCenterLayoutSpec : NXASLayoutSpec
{
    unsigned long long _centeringOptions;	// 8 = 0x8
    unsigned long long _sizingOptions;	// 16 = 0x10
}

+ (id)centerLayoutSpecWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3;
@property(nonatomic) unsigned long long sizingOptions; // @synthesize sizingOptions=_sizingOptions;
@property(nonatomic) unsigned long long centeringOptions; // @synthesize centeringOptions=_centeringOptions;
- (id)children;
- (void)setChildren:(id)arg1;
- (id)measureWithSizeRange:(CDStruct_42a63532)arg1;
- (id)initWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3;

@end

