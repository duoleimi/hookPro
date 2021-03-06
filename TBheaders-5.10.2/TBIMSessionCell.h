//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, TBMessageCenterRedMarkView, UIImageView, UILabel;

@interface TBIMSessionCell : UITableViewCell
{
    UILabel *_rightArrow;	// 8 = 0x8
    UILabel *_contentPrefixLabel;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_contentLabel;	// 32 = 0x20
    UILabel *_timeLabel;	// 40 = 0x28
    UILabel *_notifyIcon;	// 48 = 0x30
    TBMessageCenterRedMarkView *_badgeView;	// 56 = 0x38
    UIImageView *_typeImageView;	// 64 = 0x40
    NSString *_headUrl;	// 72 = 0x48
    UIImageView *_headImageView;	// 80 = 0x50
}

+ (double)heightForCell;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)setSessionData:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

