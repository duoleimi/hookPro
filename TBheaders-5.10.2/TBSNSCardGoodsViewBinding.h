//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSShopCardViewBinding.h"

@class TBSNSCard3ImageWithPrice;

@interface TBSNSCardGoodsViewBinding : TBSNSShopCardViewBinding
{
    TBSNSCard3ImageWithPrice *_body;	// 8 = 0x8
}

+ (_Bool)hasNewFeedInteraction;
+ (_Bool)hasFeedStress;
@property(nonatomic) __weak TBSNSCard3ImageWithPrice *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (void)setBkColor:(id)arg1;
- (_Bool)refresh;
- (_Bool)bindingView;

@end
