//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDSwipeCell;

@protocol MDSwipeCellDelegate <NSObject>
- (void)tapedCell:(MDSwipeCell *)arg1;
- (void)touchEndCell:(MDSwipeCell *)arg1 direction:(long long)arg2;
- (void)touchMovedCell:(MDSwipeCell *)arg1 direction:(long long)arg2 translation:(struct CGPoint)arg3;
- (void)touchBeganCell:(MDSwipeCell *)arg1;
@end

