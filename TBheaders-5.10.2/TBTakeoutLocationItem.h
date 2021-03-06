//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBTakeoutLocationItemProtocol-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface TBTakeoutLocationItem : TBJSONModel <TBTakeoutLocationItemProtocol>
{
    NSNumber *_latitude;	// 8 = 0x8
    NSNumber *_longitude;	// 16 = 0x10
    NSString *_cityCode;	// 24 = 0x18
    NSString *_cityName;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_addressID;	// 48 = 0x30
    NSString *_poiID;	// 56 = 0x38
    NSDate *_requestTime;	// 64 = 0x40
}

@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(copy, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (_Bool)isValidLocation;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)initWithLocationData:(id)arg1;
- (id)initWithPOIEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

