//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MKMapViewDelegate-Protocol.h"

@class MKMapView, NSNumber, NSString, TBLCWeakTimer, UIButton;

@interface TBLCRiderLocationManager : NSObject <MKMapViewDelegate>
{
    _Bool _firstRequest;	// 8 = 0x8
    double _cycleInterval;	// 16 = 0x10
    double _timeInterval;	// 24 = 0x18
    double _resignActiveTimeStamp;	// 32 = 0x20
    double _becomeActiveTimeStamp;	// 40 = 0x28
    TBLCWeakTimer *_timer;	// 48 = 0x30
    MKMapView *_mapView;	// 56 = 0x38
    NSNumber *_riderStatus;	// 64 = 0x40
    NSNumber *_riderLatitude;	// 72 = 0x48
    NSNumber *_riderLongitude;	// 80 = 0x50
    NSNumber *_lastUpdateTime;	// 88 = 0x58
    NSString *_riderName;	// 96 = 0x60
    NSString *_riderPhone;	// 104 = 0x68
    NSString *_deliverLatitude;	// 112 = 0x70
    NSString *_deliverLongitude;	// 120 = 0x78
    NSString *_elemeOrderID;	// 128 = 0x80
    NSString *_storeLatitude;	// 136 = 0x88
    NSString *_storeLongitude;	// 144 = 0x90
    NSString *_storeName;	// 152 = 0x98
    UIButton *_toRiderPositionButton;	// 160 = 0xa0
    CDUnknownBlockType _riderStatusBlock;	// 168 = 0xa8
}

@property(copy, nonatomic) CDUnknownBlockType riderStatusBlock; // @synthesize riderStatusBlock=_riderStatusBlock;
@property(nonatomic) _Bool firstRequest; // @synthesize firstRequest=_firstRequest;
@property(retain, nonatomic) UIButton *toRiderPositionButton; // @synthesize toRiderPositionButton=_toRiderPositionButton;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSString *storeLongitude; // @synthesize storeLongitude=_storeLongitude;
@property(retain, nonatomic) NSString *storeLatitude; // @synthesize storeLatitude=_storeLatitude;
@property(retain, nonatomic) NSString *elemeOrderID; // @synthesize elemeOrderID=_elemeOrderID;
@property(retain, nonatomic) NSString *deliverLongitude; // @synthesize deliverLongitude=_deliverLongitude;
@property(retain, nonatomic) NSString *deliverLatitude; // @synthesize deliverLatitude=_deliverLatitude;
@property(retain, nonatomic) NSString *riderPhone; // @synthesize riderPhone=_riderPhone;
@property(retain, nonatomic) NSString *riderName; // @synthesize riderName=_riderName;
@property(retain, nonatomic) NSNumber *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSNumber *riderLongitude; // @synthesize riderLongitude=_riderLongitude;
@property(retain, nonatomic) NSNumber *riderLatitude; // @synthesize riderLatitude=_riderLatitude;
@property(retain, nonatomic) NSNumber *riderStatus; // @synthesize riderStatus=_riderStatus;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) TBLCWeakTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double becomeActiveTimeStamp; // @synthesize becomeActiveTimeStamp=_becomeActiveTimeStamp;
@property(nonatomic) double resignActiveTimeStamp; // @synthesize resignActiveTimeStamp=_resignActiveTimeStamp;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setupMapViewIfError:(_Bool)arg1;
- (void)toRiderPositionAction:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)requestRiderLocation:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithStoreLatitude:(id)arg1 storeLongitude:(id)arg2 storeName:(id)arg3 deliverLatitude:(id)arg4 deliverLongitude:(id)arg5 ElemeOrderID:(id)arg6 view:(id)arg7 frame:(struct CGRect)arg8 riderStatusBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

