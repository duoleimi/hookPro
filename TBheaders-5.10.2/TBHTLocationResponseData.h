//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBHTLocationResponseData : TBJSONModel
{
    NSString *_countryId;	// 8 = 0x8
    NSString *_countryName;	// 16 = 0x10
    NSString *_cityName;	// 24 = 0x18
    NSString *_cityId;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(retain, nonatomic) NSString *countryId; // @synthesize countryId=_countryId;
- (void).cxx_destruct;

@end

