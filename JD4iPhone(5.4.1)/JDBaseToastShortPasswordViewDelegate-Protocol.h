//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDBaseToastViewDelegate.h"
#import "NSObject.h"

@class JDBaseToastView, NSString;

@protocol JDBaseToastShortPasswordViewDelegate <NSObject, JDBaseToastViewDelegate>

@optional
- (void)toastView:(JDBaseToastView *)arg1 beginLoadingWithPassword:(NSString *)arg2;
- (void)clickedForgetPasswordInToastView:(JDBaseToastView *)arg1;
@end

