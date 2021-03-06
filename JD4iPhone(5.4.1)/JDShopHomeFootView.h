//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class CustomActivityIndicatorView, NSString, UIImageView, UILabel, UIView;

@interface JDShopHomeFootView : JDView
{
    UILabel *_headLabel;
    UIView *_leftLine;
    UIView *_rightLine;
    UIImageView *_rocketImView;
    NSString *_floorStr;
    CustomActivityIndicatorView *_loadView;
}

@property(retain, nonatomic) CustomActivityIndicatorView *loadView; // @synthesize loadView=_loadView;
@property(copy, nonatomic) NSString *floorStr; // @synthesize floorStr=_floorStr;
- (void)stopLoading;
- (void)startLoading;
- (void)setTitleLabel:(id)arg1;
- (void)setUI:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

