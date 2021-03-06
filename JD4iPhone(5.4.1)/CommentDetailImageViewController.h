//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDPhotoViewDelegate.h"

@class NSArray, NSMutableSet, UILabel, UIScrollView, UIView;

@interface CommentDetailImageViewController : JDViewController <JDPhotoViewDelegate>
{
    UIScrollView *_contentView;
    UIView *_headView;
    UILabel *_imageIndexLabel;
    _Bool _isExitSuperNavBar;
    _Bool _isInit;
    long long _selectedIndex;
    NSArray *_items;
    NSMutableSet *_visibleImageViews;
    NSMutableSet *_reusedImageViews;
}

@property(retain, nonatomic) NSMutableSet *reusedImageViews; // @synthesize reusedImageViews=_reusedImageViews;
@property(retain, nonatomic) NSMutableSet *visibleImageViews; // @synthesize visibleImageViews=_visibleImageViews;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)popView;
- (void)didTapPhotoView:(id)arg1;
- (void)loadImageWithIndex:(long long)arg1;
- (void)updateIndex:(id)arg1;
- (void)showImageViewAtIndex:(long long)arg1;
- (void)showImages;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithExitSuperNavBar:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end

