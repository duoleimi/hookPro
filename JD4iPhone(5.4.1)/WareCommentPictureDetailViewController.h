//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDPhotoViewDelegate.h"
#import "WareCommentVideoToastViewDelegate.h"

@class CommentVideoInfoModel, JDStoreNetwork, NSMutableArray, NSMutableSet, NSString, RateView, UIButton, UILabel, UIScrollView, UIView, WareCommentDetailModel, WareCommentVideoToastView;

@interface WareCommentPictureDetailViewController : JDViewController <JDPhotoViewDelegate, WareCommentVideoToastViewDelegate>
{
    JDStoreNetwork *_network;
    UIButton *_downLoadButton;
    UIView *_headView;
    UIView *_detailView;
    RateView *_rateView;
    UILabel *_attributeLabel;
    UIScrollView *_labelScrollView;
    UILabel *_commentLabel;
    UIView *_bottomView;
    UIButton *_usefulButton;
    UIButton *_replyButton;
    UIButton *_detailButton;
    _Bool lastScroll;
    double statusoffsetY;
    _Bool isPlayVideo;
    UILabel *_imageIndexLabel;
    _Bool _isInit;
    _Bool _isGetMore;
    _Bool _isLoading;
    _Bool _isVideoLoading;
    int _currentPage;
    id <WareCommentPictureDetailDelegate> _delegate;
    long long _selectedIndex;
    NSMutableArray *_items;
    NSString *_productId;
    long long _totalCount;
    WareCommentDetailModel *_commentModel;
    NSString *_videoUrl;
    NSString *_imageUrl;
    WareCommentVideoToastView *_videoTostView;
    UIScrollView *_contentView;
    CommentVideoInfoModel *_videoModel;
    NSMutableSet *_visibleImageViews;
    NSMutableSet *_reusedImageViews;
}

@property(retain, nonatomic) NSMutableSet *reusedImageViews; // @synthesize reusedImageViews=_reusedImageViews;
@property(retain, nonatomic) NSMutableSet *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;
@property(retain, nonatomic) CommentVideoInfoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) _Bool isVideoLoading; // @synthesize isVideoLoading=_isVideoLoading;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) WareCommentVideoToastView *videoTostView; // @synthesize videoTostView=_videoTostView;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) WareCommentDetailModel *commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <WareCommentPictureDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getVideoData:(_Bool)arg1;
- (void)playVideo;
- (void)openWebView;
- (void)didTapCheckButtonVideoToastView:(_Bool)arg1;
- (void)didTapComitVideoToastView:(_Bool)arg1;
- (void)didTapCancelVideoToastView;
- (void)playVideoClick;
- (void)gotoDetailView;
- (void)replyComment;
- (void)userfulComment;
- (void)didTapPhotoView:(id)arg1;
- (void)loadImageWithIndex:(long long)arg1;
- (void)updateIndex:(id)arg1;
- (void)popCurrentViewController;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)downloadImage;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showImageViewAtIndex:(long long)arg1;
- (void)showImages;
- (void)getPicturesData;
- (void)setUserfulData:(id)arg1;
- (void)getUsefulData;
- (void)applicationBackgroud:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)refreshReplyCount:(id)arg1;
- (void)refreshPraiseCount:(id)arg1;
- (void)configVideoUI:(id)arg1;
- (void)showCheckNetwork;
- (void)configUI:(id)arg1;
- (void)addDetailViews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

