//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UIScrollView;

@interface MDAssetPreviewCell : UICollectionViewCell
{
    UIImageView *_previewImageView;
    UIScrollView *_imageScrollView;
}

@property(retain, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

