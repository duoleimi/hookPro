//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDContentItem, JDContentView, UIView;

@protocol JDContentViewDataSource <NSObject>
- (long long)numberOfSectionsInConentView:(JDContentView *)arg1;
- (JDContentItem *)contentView:(JDContentView *)arg1 sectionAtIndex:(long long)arg2;

@optional
- (UIView *)separatorViewWithTopSection:(long long)arg1;
- (UIView *)separatorViewOfSection:(long long)arg1;
- (double)contentView:(JDContentView *)arg1 heightOfSection:(long long)arg2;
@end

