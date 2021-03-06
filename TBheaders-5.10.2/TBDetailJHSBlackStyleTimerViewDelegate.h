//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBDetailJHSTimerViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel;

@interface TBDetailJHSBlackStyleTimerViewDelegate : NSObject <TBDetailJHSTimerViewDelegate>
{
    UILabel *_hhLabel;	// 8 = 0x8
    UILabel *_mmLabel;	// 16 = 0x10
    UILabel *_ssLabel;	// 24 = 0x18
    UILabel *_msLabel;	// 32 = 0x20
    NSArray *_bkgViews;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *bkgViews; // @synthesize bkgViews=_bkgViews;
@property(retain, nonatomic) UILabel *msLabel; // @synthesize msLabel=_msLabel;
@property(retain, nonatomic) UILabel *ssLabel; // @synthesize ssLabel=_ssLabel;
@property(retain, nonatomic) UILabel *mmLabel; // @synthesize mmLabel=_mmLabel;
@property(retain, nonatomic) UILabel *hhLabel; // @synthesize hhLabel=_hhLabel;
- (void).cxx_destruct;
- (void)timerViewUpdateThemeColor:(id)arg1;
- (void)timerViewUpdateTimer:(double)arg1;
- (double)timerViewScheduleInterval;
- (void)timerViewLayoutSubviews;
- (void)timerViewAddSubviews:(id)arg1;
- (struct CGSize)timerViewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

