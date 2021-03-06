//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLGeocoder, CLLocationManager, NSString;

@interface CBLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_manager;
    CLGeocoder *_geocoder;
    CDUnknownBlockType _locationInfoBlock;
    CDUnknownBlockType _locationFailBlock;
}

@property(copy, nonatomic) CDUnknownBlockType locationFailBlock; // @synthesize locationFailBlock=_locationFailBlock;
@property(copy, nonatomic) CDUnknownBlockType locationInfoBlock; // @synthesize locationInfoBlock=_locationInfoBlock;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)getCurrentCoordinateSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

