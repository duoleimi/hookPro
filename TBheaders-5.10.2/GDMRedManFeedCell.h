//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GDMFeedFooterView, GDMFeedHeaderView, GDMRedManFeedImageContentView, GDMRedManFeedModel, NSString, UILabel, UITableView, UIView;

@interface GDMRedManFeedCell : UITableViewCell
{
    UIView *_bottomLine;	// 8 = 0x8
    GDMRedManFeedModel *_model;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    id _target;	// 32 = 0x20
    NSString *_utPageName;	// 40 = 0x28
    UILabel *_desLabel;	// 48 = 0x30
    UILabel *_addressLabel;	// 56 = 0x38
    GDMFeedHeaderView *_headerView;	// 64 = 0x40
    GDMFeedFooterView *_footerView;	// 72 = 0x48
    GDMRedManFeedImageContentView *_imageContentView;	// 80 = 0x50
    UILabel *_recLabel;	// 88 = 0x58
}

+ (double)heightOfFeedForModel:(id)arg1;
@property(retain, nonatomic) UILabel *recLabel; // @synthesize recLabel=_recLabel;
@property(retain, nonatomic) GDMRedManFeedImageContentView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(retain, nonatomic) GDMFeedFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) GDMFeedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain) NSString *utPageName; // @synthesize utPageName=_utPageName;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)dispatchMessage:(SEL)arg1 toObject:(id)arg2 fromObject:(id)arg3;
- (void)routeAction:(SEL)arg1 fromObject:(id)arg2;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)initImageContentView;
- (void)initFooterView;
- (void)initAddressLabel;
- (void)initDesLabel;
- (void)initFeedHeaderView;
- (void)initStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

