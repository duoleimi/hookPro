//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UILabel;

@interface PhoneContactCell : UITableViewCell
{
    UILabel *labelName;
    UIButton *buttonRight;
    int nowType;
    NSString *strHint;
    id <PhoneContactCellDelegate> delegate;
    NSString *_phone;
}

@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(nonatomic) id <PhoneContactCellDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *strHint; // @synthesize strHint;
@property(nonatomic) int nowType; // @synthesize nowType;
@property(retain, nonatomic) UIButton *buttonRight; // @synthesize buttonRight;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellDetails:(id)arg1 needToshowImg:(_Bool)arg2;
- (void)setCellDetailsWhenFromInviteFriendPage:(id)arg1 needToshowImg:(_Bool)arg2;
- (void)buttonRightClick;
- (void)delayClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

