//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class TBRateAuctionInfo, UIImageView, UILabel;

@interface TBRateDetailAuctionView : UIButton
{
    UIImageView *_pictureView;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    TBRateAuctionInfo *_info;	// 24 = 0x18
}

@property(retain, nonatomic) TBRateAuctionInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

