//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol TXPayViewProtocol <NSObject>
- (void)setPayInfo:(id)arg1 useCoupon:(NSString *)arg2;

@optional
- (void)setIconImageOfPayBtn:(UIImage *)arg1;
- (void)setIconUrlOfPayBtn:(NSString *)arg1;
- (void)setBgImageOfPayBtn:(UIImage *)arg1;
- (void)setBgImageUrlOfPayBtn:(NSString *)arg1;
@end

