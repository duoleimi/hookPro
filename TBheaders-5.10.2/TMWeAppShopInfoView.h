//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponent.h"

@class ShopInfoView;

@interface TMWeAppShopInfoView : WeAppComponent
{
    ShopInfoView *_shopInfoView;	// 8 = 0x8
}

- (void).cxx_destruct;
- (double)scale;
- (struct CGRect)convertToRect:(id)arg1;
- (void)delegateChanged:(id)arg1;
- (id)createView;
- (void)refreshData;
- (void)setCss;
- (void)dealloc;
- (id)init;

@end

