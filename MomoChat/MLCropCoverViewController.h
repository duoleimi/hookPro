//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class DTDimmingView, NSString, UIImage, UIImageView, UIScrollView;

@interface MLCropCoverViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _firstLoad;
    CDUnknownBlockType _dimissHandler;
    CDUnknownBlockType _completionHandler;
    UIImage *_image;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    DTDimmingView *_dimmingView;
}

@property _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property __weak DTDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType dimissHandler; // @synthesize dimissHandler=_dimissHandler;
- (void).cxx_destruct;
- (void)centerScrollViewContents;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)updateMinZoomScaleForSize:(struct CGSize)arg1;
- (void)didClickFinishButton:(id)arg1;
- (void)didClickCancelButton:(id)arg1;
- (void)setupDimming;
- (void)setupScrollView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

