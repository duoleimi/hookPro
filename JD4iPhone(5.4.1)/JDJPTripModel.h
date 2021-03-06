//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlightClassInfoModel, FlightInfoModel, NSMutableDictionary, NSString, TgqRuleResponseModel;

@interface JDJPTripModel : NSObject
{
    NSString *beginDepCityName;
    NSString *beginArrCityName;
    NSMutableDictionary *beginDepDateDic;
    FlightInfoModel *beginFlightInfoModel;
    FlightClassInfoModel *beginFlightClassInfoModel;
    TgqRuleResponseModel *beginTgqRuleModel;
    NSString *beginDepAirportCode;
    NSString *endDepCityName;
    NSString *endArrCityName;
    NSMutableDictionary *endDepDateDic;
    FlightInfoModel *endFlightInfoModel;
    FlightClassInfoModel *endFlightClassInfoModel;
    TgqRuleResponseModel *endTgqRuleModel;
}

@property(retain, nonatomic) TgqRuleResponseModel *endTgqRuleModel; // @synthesize endTgqRuleModel;
@property(retain, nonatomic) FlightClassInfoModel *endFlightClassInfoModel; // @synthesize endFlightClassInfoModel;
@property(retain, nonatomic) FlightInfoModel *endFlightInfoModel; // @synthesize endFlightInfoModel;
@property(retain, nonatomic) NSMutableDictionary *endDepDateDic; // @synthesize endDepDateDic;
@property(retain, nonatomic) NSString *endArrCityName; // @synthesize endArrCityName;
@property(retain, nonatomic) NSString *endDepCityName; // @synthesize endDepCityName;
@property(retain, nonatomic) NSString *beginDepAirportCode; // @synthesize beginDepAirportCode;
@property(retain, nonatomic) TgqRuleResponseModel *beginTgqRuleModel; // @synthesize beginTgqRuleModel;
@property(retain, nonatomic) FlightClassInfoModel *beginFlightClassInfoModel; // @synthesize beginFlightClassInfoModel;
@property(retain, nonatomic) FlightInfoModel *beginFlightInfoModel; // @synthesize beginFlightInfoModel;
@property(retain, nonatomic) NSMutableDictionary *beginDepDateDic; // @synthesize beginDepDateDic;
@property(retain, nonatomic) NSString *beginArrCityName; // @synthesize beginArrCityName;
@property(retain, nonatomic) NSString *beginDepCityName; // @synthesize beginDepCityName;
- (void)dealloc;
- (void)resetModel;

@end

