//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface JDQBAndGameChargeAccountHistoryCellTableViewCell : UITableViewCell
{
    UILabel *_accountLable;
    UIButton *_clearBtn;
    UIImageView *_sepLine;
}

@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UILabel *accountLable; // @synthesize accountLable=_accountLable;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
