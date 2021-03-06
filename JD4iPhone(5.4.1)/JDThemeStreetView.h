//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDImageView, JDThemeStreetModel, UIImageView, UILabel;

@interface JDThemeStreetView : UIView
{
    id <JDThemeStreetViewDelegate> _delegate;
    long long _style;
    JDThemeStreetModel *_themeStreet;
    JDImageView *_streetImageView;
    UIView *_maskView;
    UILabel *_streetNameLabel;
    UILabel *_streetHeatLabel;
    UIImageView *_streetTagImageView;
    UILabel *_streetTagNameLabel;
}

@property(retain, nonatomic) UILabel *streetTagNameLabel; // @synthesize streetTagNameLabel=_streetTagNameLabel;
@property(retain, nonatomic) UIImageView *streetTagImageView; // @synthesize streetTagImageView=_streetTagImageView;
@property(retain, nonatomic) UILabel *streetHeatLabel; // @synthesize streetHeatLabel=_streetHeatLabel;
@property(retain, nonatomic) UILabel *streetNameLabel; // @synthesize streetNameLabel=_streetNameLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) JDImageView *streetImageView; // @synthesize streetImageView=_streetImageView;
@property(retain, nonatomic) JDThemeStreetModel *themeStreet; // @synthesize themeStreet=_themeStreet;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <JDThemeStreetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeStreetViewClicked:(id)arg1;
- (void)configureViewWithThemeStreet:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

