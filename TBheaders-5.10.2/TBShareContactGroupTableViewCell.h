//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface TBShareContactGroupTableViewCell : UITableViewCell
{
    UIImageView *_logoImageView;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    UILabel *_peopleNumberLabel;	// 24 = 0x18
    UIView *_bottomLine;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *peopleNumberLabel; // @synthesize peopleNumberLabel=_peopleNumberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configCell:(id)arg1;
- (void)layoutSubviews;

@end

