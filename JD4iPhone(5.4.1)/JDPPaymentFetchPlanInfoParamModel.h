//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBPaymentBaseParamModel.h"

@class NSString;

@interface JDPPaymentFetchPlanInfoParamModel : CBPaymentBaseParamModel
{
    NSString *_couponId;
    NSString *_couponPayInfo;
    NSString *_planId;
}

@property(copy, nonatomic) NSString *planId; // @synthesize planId=_planId;
@property(copy, nonatomic) NSString *couponPayInfo; // @synthesize couponPayInfo=_couponPayInfo;
@property(copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
- (void).cxx_destruct;

@end

