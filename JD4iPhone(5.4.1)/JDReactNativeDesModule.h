//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface JDReactNativeDesModule : NSObject <RCTBridgeModule>
{
}

+ (id)__rct_export__331;
+ (id)__rct_export__190;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)desDecode:(id)arg1 successCB:(CDUnknownBlockType)arg2 errorCB:(CDUnknownBlockType)arg3;
- (void)desEncode:(id)arg1 successCB:(CDUnknownBlockType)arg2 errorCB:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

