//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

@class AsyncImageView, UIImageView, UILabel, UIView, VideoReaderMessageViewModel;

__attribute__((visibility("hidden")))
@interface VideoReaderMessageCellView : ReaderMessageCellView
{
    UIView *m_containerView;
    UIImageView *m_bgImageView;
    AsyncImageView *m_coverImageView;
    UIImageView *m_coverImageBottomMaskView;
    UIImageView *m_coverImageIconView;
    UILabel *m_coverImageTimeLabel;
    UILabel *m_titleLabel;
}

- (void).cxx_destruct;
- (void)layoutTitleView;
- (void)layoutCoverImageView;
- (void)initTitleView;
- (void)initCoverImageView;
- (void)layoutForSubview;
- (void)initView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) VideoReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

