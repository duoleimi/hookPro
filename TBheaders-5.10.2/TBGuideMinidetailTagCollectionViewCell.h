//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGuideMinidetailBaseCollectionViewCell.h"

@class UILabel;

@interface TBGuideMinidetailTagCollectionViewCell : TBGuideMinidetailBaseCollectionViewCell
{
    UILabel *_iconLabel;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
}

+ (struct CGSize)contentSizeWithItem:(id)arg1;
+ (double)height;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
- (void)setItem:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

