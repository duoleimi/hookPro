//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol CBPaymentProtocal <NSObject>

@optional
- (void)paymentDidRefreshWithDict:(NSDictionary *)arg1;
- (void)paymentDidFinished;
- (void)paymentDidFailedWithCode:(NSString *)arg1;
- (void)paymentDidCancelled;
- (void)paymentDidNone;
@end

