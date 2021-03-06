//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDGuestAnimateBottomLeftLine, MDGuestAnimateTopRightLine, NSMutableArray, UIImageView, UILabel;

@interface MDGuestAnimateView : UIView
{
    UIImageView *_centerImgView;
    UIImageView *_helloImgView;
    UILabel *_label1;
    UILabel *_label2;
    NSMutableArray *_circles;
    NSMutableArray *_circleCenters;
    MDGuestAnimateTopRightLine *_guestTopLine;
    MDGuestAnimateBottomLeftLine *_guestBottomLine;
    NSMutableArray *_stars;
    NSMutableArray *_starCenters;
}

@property(retain, nonatomic) NSMutableArray *starCenters; // @synthesize starCenters=_starCenters;
@property(retain, nonatomic) NSMutableArray *stars; // @synthesize stars=_stars;
@property(retain, nonatomic) MDGuestAnimateBottomLeftLine *guestBottomLine; // @synthesize guestBottomLine=_guestBottomLine;
@property(retain, nonatomic) MDGuestAnimateTopRightLine *guestTopLine; // @synthesize guestTopLine=_guestTopLine;
@property(retain, nonatomic) NSMutableArray *circleCenters; // @synthesize circleCenters=_circleCenters;
@property(retain, nonatomic) NSMutableArray *circles; // @synthesize circles=_circles;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) UIImageView *helloImgView; // @synthesize helloImgView=_helloImgView;
@property(retain, nonatomic) UIImageView *centerImgView; // @synthesize centerImgView=_centerImgView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

