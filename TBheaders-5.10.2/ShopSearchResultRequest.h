//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchBaseMtopRequest.h"

@protocol TBSDKServerDelegate;

@interface ShopSearchResultRequest : SearchBaseMtopRequest
{
    id <TBSDKServerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)getItemListByShopWithSellerId:(id)arg1 shopId:(id)arg2 sort:(id)arg3 catId:(id)arg4 keyword:(id)arg5 catmap:(id)arg6 prop:(id)arg7 filterParam:(id)arg8 itemId:(id)arg9 page:(long long)arg10 pageSize:(long long)arg11 spos:(id)arg12 delegate:(id)arg13;
- (id)init;

@end
