//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CCCMarketListHeaderView, CCCMyAssignmentCouponView, CCCNoAssignmentCouponView;

@interface CCCAssignmentCouponView : UIView
{
    CCCNoAssignmentCouponView *_noAssignmentCouponView;
    CCCMyAssignmentCouponView *_myAssignmentCouponView;
    CCCMarketListHeaderView *_listHeaderView;
}

@property(retain, nonatomic) CCCMarketListHeaderView *listHeaderView; // @synthesize listHeaderView=_listHeaderView;
@property(retain, nonatomic) CCCMyAssignmentCouponView *myAssignmentCouponView; // @synthesize myAssignmentCouponView=_myAssignmentCouponView;
@property(retain, nonatomic) CCCNoAssignmentCouponView *noAssignmentCouponView; // @synthesize noAssignmentCouponView=_noAssignmentCouponView;
- (void).cxx_destruct;
- (void)updateOnAssignCount:(long long)arg1 readyAssignCount:(long long)arg2 ynShowMore:(_Bool)arg3;
- (void)reloadViewWithItems:(id)arg1;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

