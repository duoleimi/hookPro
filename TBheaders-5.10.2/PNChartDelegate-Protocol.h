//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol PNChartDelegate <NSObject>

@optional
- (void)userClickedOnBarAtIndex:(long long)arg1;
- (void)userClickedOnLineKeyPoint:(struct CGPoint)arg1 lineIndex:(long long)arg2 pointIndex:(long long)arg3;
- (void)userClickedOnLinePoint:(struct CGPoint)arg1 lineIndex:(long long)arg2;
@end
