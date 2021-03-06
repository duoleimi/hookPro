//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MTabbarAPIImplSetterProtocol-Protocol.h"
#import "MTabbarApiProtocol-Protocol.h"

@class NSString;
@protocol MTabbarAPIImplProtocol;

@interface MTabbarH5ApiImpl : NSObject <MTabbarAPIImplSetterProtocol, MTabbarApiProtocol>
{
    id <MTabbarAPIImplProtocol> _impl;	// 8 = 0x8
    CDUnknownBlockType _tabbarItemClickBlock;	// 16 = 0x10
    id _caller;	// 24 = 0x18
}

@property(nonatomic) __weak id caller; // @synthesize caller=_caller;
@property(copy, nonatomic) CDUnknownBlockType tabbarItemClickBlock; // @synthesize tabbarItemClickBlock=_tabbarItemClickBlock;
@property(nonatomic) __weak id <MTabbarAPIImplProtocol> impl; // @synthesize impl=_impl;
- (void).cxx_destruct;
- (id)tabbarItemModels;
- (id)tabItemModelWithIndex:(long long)arg1;
- (id)currentTabItemModel;
- (void)sendTabItemClickEventToCaller:(id)arg1;
- (void)bringMTabbarToFront;
- (void)updateTabbarBadgeWithItemId:(id)arg1 badgeValue:(id)arg2;
- (void)switchToTabIndex:(long long)arg1;
- (void)showTabbar:(_Bool)arg1;
- (void)hideTabbar:(_Bool)arg1;
- (void)removeTabbarItem:(id)arg1;
- (void)updateTabbarItem:(id)arg1;
- (void)addTabbarItem:(id)arg1;
- (void)initTabbar:(id)arg1;
- (void)tabbarItemClickedWithTabItem:(id)arg1;
- (void)registerApiWithCaller:(id)arg1;
- (id)initWithApiCaller:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

