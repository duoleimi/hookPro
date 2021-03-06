//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface customSegment : UIView
{
    NSMutableArray *titleArray;
    long long selectedSegmentIndex;
    id <customSegmentDelegate> delegate;
}

@property(nonatomic) id <customSegmentDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray;
- (void)onClicked:(id)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)addTitle:(id)arg1 frame:(struct CGRect)arg2;
- (void)setSelect:(long long)arg1;
- (void)show;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

