//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomePageChannelAction, NSArray;

@protocol HomePageChannelTabBarItemGroup <NSObject>
@property(nonatomic) long long selectedTabBarItemIndex;
@property(readonly, nonatomic) NSArray *tabBarItems;
- (HomePageChannelAction *)actionForTabBarItemAtIndex:(long long)arg1;
@end

