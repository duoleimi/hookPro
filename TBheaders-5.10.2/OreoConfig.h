//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSDKServerDelegate-Protocol.h"

@class NSCache, NSMutableDictionary, NSString, OreoEvictCheckRequest;

@interface OreoConfig : NSObject <TBSDKServerDelegate>
{
    NSCache *_cache;	// 8 = 0x8
    NSString *_timeStamp;	// 16 = 0x10
    NSMutableDictionary *_requests;	// 24 = 0x18
    OreoEvictCheckRequest *_evictCheckRequest;	// 32 = 0x20
}

+ (id)shareInstance;
+ (void)getConfigByName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)load;
- (void).cxx_destruct;
- (void)getConfigByName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)applicationDidLaunch;
- (void)updateConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

