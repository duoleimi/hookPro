//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class InvoicePutTypeModel, UIButton, UITextField, UITextView, UIView;

@protocol InvoiceNormalDelegate <NSObject>
- (void)normalInvoiceMakeWayWithModel:(InvoicePutTypeModel *)arg1;
- (void)normalReceiveInfoViewTextViewBeginEdit:(UITextView *)arg1;
- (void)normalReceiveInfoViewTextFieldBeginEdit:(UITextField *)arg1;
- (void)normalReceiveInfoViewUpdateTextViewHeight:(UITextView *)arg1;
- (void)normalReceiveInfoViewButtonTaped:(UIButton *)arg1;
- (void)resetNormalHeight;
- (void)normalTitleTextFieldBeginEdit:(UITextField *)arg1;
- (void)normalDistributeTextViewBeginEdit:(UITextView *)arg1;
- (void)normalDistributeTextFieldBeginEdit:(UITextField *)arg1;
- (void)distributeUpdateTextViewHeight:(UITextView *)arg1;
- (void)distributeAreaButtonTaped:(UIButton *)arg1;
- (void)resetNormalHeightWithDistributeViewHeightChange;
- (void)checkViewSelected;
- (void)normalInvoiceCheckViewSolidCardBottomBtnTaped:(UIButton *)arg1;
- (void)normalInvoiceSolidCardCheckViewSelected:(UIView *)arg1;
@end

