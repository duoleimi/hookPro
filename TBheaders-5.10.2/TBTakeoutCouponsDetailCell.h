//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBTakeoutBuyCouponsDetailModel, UILabel;

@interface TBTakeoutCouponsDetailCell : UITableViewCell
{
    UILabel *_expires;	// 8 = 0x8
    TBTakeoutBuyCouponsDetailModel *_detail;	// 16 = 0x10
}

@property(retain, nonatomic) TBTakeoutBuyCouponsDetailModel *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

