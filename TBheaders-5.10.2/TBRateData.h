//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TBRateData : NSObject
{
    NSMutableArray *_rateHQComponents;	// 8 = 0x8
    NSMutableArray *_interactRateIds;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableArray *interactRateIds; // @synthesize interactRateIds=_interactRateIds;
@property(retain, nonatomic) NSMutableArray *rateHQComponents; // @synthesize rateHQComponents=_rateHQComponents;
- (void).cxx_destruct;
- (id)init;

@end

