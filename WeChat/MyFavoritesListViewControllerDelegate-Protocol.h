//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesItem, NSString;

@protocol MyFavoritesListViewControllerDelegate <NSObject>

@optional
- (NSString *)canFavoritesItemBeForward:(FavoritesItem *)arg1;
- (void)onSelectedFavoritesItem:(FavoritesItem *)arg1;
@end

