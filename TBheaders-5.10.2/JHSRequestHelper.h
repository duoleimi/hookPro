//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface JHSRequestHelper : NSObject
{
    NSString *_throughParams;	// 8 = 0x8
}

+ (void)addUserBehaviorParameterToMtopRequest:(id)arg1;
+ (id)globalMtopRequestUserBehaviorParameter;
+ (void)addThroughParametersToMtopRequest:(id)arg1;
+ (id)globalMtopRequestThroughParameters;
+ (void)addGlobalParametersToMtopRequest:(id)arg1;
+ (id)globalMtopRequestBizParameters;
+ (id)globalMtopRequestProtocolParameters;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *throughParams; // @synthesize throughParams=_throughParams;
- (void).cxx_destruct;

@end

