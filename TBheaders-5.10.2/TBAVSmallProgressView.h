//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TBAVSmallProgressView : UIView
{
    double _progress;	// 8 = 0x8
    double _maxProgress;	// 16 = 0x10
    UIView *_frontView;	// 24 = 0x18
    UIImageView *_gifImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *gifImageView; // @synthesize gifImageView=_gifImageView;
@property(retain, nonatomic) UIView *frontView; // @synthesize frontView=_frontView;
@property(readonly, nonatomic) double maxProgress; // @synthesize maxProgress=_maxProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

