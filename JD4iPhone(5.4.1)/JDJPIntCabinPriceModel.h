//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface JDJPIntCabinPriceModel : JDModel
{
    NSArray *physicalCabins;
    NSArray *cabinGroup;
    NSArray *flightCabinGroup;
    NSArray *airPriceList;
    NSString *seats;
    NSString *ticketingCarrier;
    NSString *totalAmount;
    NSString *secretKey;
    NSString *sourceId;
}

@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey;
@property(retain, nonatomic) NSString *totalAmount; // @synthesize totalAmount;
@property(retain, nonatomic) NSString *ticketingCarrier; // @synthesize ticketingCarrier;
@property(retain, nonatomic) NSString *seats; // @synthesize seats;
@property(retain, nonatomic) NSArray *airPriceList; // @synthesize airPriceList;
@property(retain, nonatomic) NSArray *flightCabinGroup; // @synthesize flightCabinGroup;
@property(retain, nonatomic) NSArray *cabinGroup; // @synthesize cabinGroup;
@property(retain, nonatomic) NSArray *physicalCabins; // @synthesize physicalCabins;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;
- (id)init;

@end
