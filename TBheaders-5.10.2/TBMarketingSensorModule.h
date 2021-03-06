//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBMarketingModuleProtocol-Protocol.h"

@class NSMutableDictionary, NSString, TBMarketingSensorService;

@interface TBMarketingSensorModule : NSObject <TBMarketingModuleProtocol>
{
    TBMarketingSensorService *_service;	// 8 = 0x8
    NSMutableDictionary *_sensorObjList;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *sensorObjList; // @synthesize sensorObjList=_sensorObjList;
@property(retain, nonatomic) TBMarketingSensorService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)getServiceWithRequest:(struct NSString *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

