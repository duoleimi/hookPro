//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel;

@interface WanderShopActivityDownwardTimingView : UIView
{
    long long totalSeconds;
    NSTimer *_timer;
    UILabel *hourLabel;
    UILabel *minuteLabel;
    UILabel *secondsLabel;
    int _end;
}

@property(readonly, nonatomic) int end; // @synthesize end=_end;
- (void).cxx_destruct;
- (void)invalidTimer;
- (void)setDisplayValue:(long long)arg1;
- (void)stopDownwoardTiming;
- (void)startDownwoardTiming;
- (void)setStartValue:(long long)arg1;
- (void)refreshDownwardTiming;
- (void)configTimer;
- (void)setupSubviews:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

