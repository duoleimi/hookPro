//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIButton, UIImageView;

@interface TBMoreDataTableViewCell : UITableViewCell
{
    UIActivityIndicatorView *_activityIndicatorView;	// 8 = 0x8
    UIButton *_loadMoreButton;	// 16 = 0x10
    UIImageView *_narrowImageView;	// 24 = 0x18
    CDUnknownBlockType _loadMoreBlock;	// 32 = 0x20
}

+ (id)cell;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
@property(nonatomic) UIImageView *narrowImageView; // @synthesize narrowImageView=_narrowImageView;
@property(nonatomic) UIButton *loadMoreButton; // @synthesize loadMoreButton=_loadMoreButton;
@property(nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showBlank;
- (void)normalConfig;
- (void)showLoadMoreDataLabel;
- (void)showActivityAnimation;
- (void)loadMore:(id)arg1;

@end

