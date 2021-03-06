//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDShippingAddressModel, NSString;

@interface DeliveryInfoModel : NSObject
{
    NSString *deliverytype;
    NSString *name;
    NSString *mobile;
    NSString *address;
    NSString *bookdelivdate;
    NSString *bookdelivtime;
    long long travelSkyId;
    NSString *tele;
    NSString *email;
    NSString *fax;
    NSString *province;
    NSString *city;
    NSString *district;
    NSString *postcode;
    NSString *_dispatchId;
    JDShippingAddressModel *_shipAddress;
}

@property(retain, nonatomic) JDShippingAddressModel *shipAddress; // @synthesize shipAddress=_shipAddress;
@property(retain, nonatomic) NSString *dispatchId; // @synthesize dispatchId=_dispatchId;
@property(retain, nonatomic) NSString *postcode; // @synthesize postcode;
@property(retain, nonatomic) NSString *district; // @synthesize district;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(retain, nonatomic) NSString *fax; // @synthesize fax;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(retain, nonatomic) NSString *tele; // @synthesize tele;
@property(nonatomic) long long travelSkyId; // @synthesize travelSkyId;
@property(retain, nonatomic) NSString *bookdelivtime; // @synthesize bookdelivtime;
@property(retain, nonatomic) NSString *bookdelivdate; // @synthesize bookdelivdate;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *deliverytype; // @synthesize deliverytype;
- (void)setModelWithAddress:(id)arg1;
- (void)dealloc;
- (id)init;

@end

