//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, MomoLocationFileUtility, NSDate, NSError, NSString, NSTimer;

@interface MomoLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *locManager;
    CLLocation *location;
    CLLocation *reviseLocation;
    CLLocation *fakeLocation;
    _Bool correctLocation;
    NSTimer *timer;
    _Bool isLocationing;
    NSDate *beginDate;
    NSDate *lastLocTime;
    CLLocation *_coarseLocation;
    MomoLocationFileUtility *_fileUtility;
    CDUnknownBlockType _locationCallbackBlock;
    NSError *_locationError;
    NSString *_locationErrorType;
    NSDate *_lastUpdateLocationFailTime;
}

+ (void)resetLocationAccuracy;
+ (id)shareMomoLocationManager;
@property(retain, nonatomic) NSDate *lastUpdateLocationFailTime; // @synthesize lastUpdateLocationFailTime=_lastUpdateLocationFailTime;
@property(retain, nonatomic) NSString *locationErrorType; // @synthesize locationErrorType=_locationErrorType;
@property(retain, nonatomic) NSError *locationError; // @synthesize locationError=_locationError;
@property(copy, nonatomic) CDUnknownBlockType locationCallbackBlock; // @synthesize locationCallbackBlock=_locationCallbackBlock;
@property(retain, nonatomic) MomoLocationFileUtility *fileUtility; // @synthesize fileUtility=_fileUtility;
@property(retain, nonatomic) CLLocation *coarseLocation; // @synthesize coarseLocation=_coarseLocation;
@property(retain, nonatomic) CLLocation *fakeLocation; // @synthesize fakeLocation;
@property(copy, nonatomic) NSDate *lastLocTime; // @synthesize lastLocTime;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate;
@property(retain, nonatomic) CLLocation *reviseLocation; // @synthesize reviseLocation;
@property(retain) CLLocation *location; // @synthesize location;
@property(retain, nonatomic) CLLocationManager *locManager; // @synthesize locManager;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)locationErrorAlertWithBlock:(CDUnknownBlockType)arg1;
- (id)distanceBetweenLocationDictionary:(id)arg1;
- (_Bool)isOriginLocationValid;
- (_Bool)isReviseLocationValid;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)updateNewLoacation:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)cleanUserLocation;
- (id)getUserLocationArray;
- (_Bool)refreshLocationIfExceedLimit;
- (void)HandleTimer;
- (void)updateServerLocation;
- (void)locationFail;
- (void)locationFinish;
- (void)updateSelfLocation:(id)arg1;
- (void)cancelLocation;
- (void)reviseLocationToError:(id)arg1;
- (void)reviseLocationToFail:(id)arg1;
- (void)reviseLocationToSuccess:(id)arg1;
- (void)reviseLocationTo;
- (void)stoplocation;
- (void)locationTimeOut;
- (void)startUpdatingLocation;
- (void)delayTimeOut;
- (void)cancelLocationTimeOutAction;
- (void)starLocationAndCorrectLocation:(_Bool)arg1;
- (id)getLatestLocationWithInterval:(double)arg1;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

