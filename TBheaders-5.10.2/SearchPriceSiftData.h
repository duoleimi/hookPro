//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchSiftData.h"

@class NSString;

@interface SearchPriceSiftData : SearchSiftData
{
    NSString *_subTitle;	// 8 = 0x8
    long long _percentage;	// 16 = 0x10
    long long _minPrice;	// 24 = 0x18
    long long _maxPrice;	// 32 = 0x20
}

@property(nonatomic) long long maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) long long minPrice; // @synthesize minPrice=_minPrice;
@property(nonatomic) long long percentage; // @synthesize percentage=_percentage;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (id)init;

@end

