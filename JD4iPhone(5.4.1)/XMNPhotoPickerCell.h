//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel, UIView, UIWindow;

@interface XMNPhotoPickerCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_tempView;
    UILabel *_tempTipsLabel;
    UIImageView *_tempImageView;
    CDUnknownBlockType _sendAssetStateDidChange;
    struct CGPoint _startCenter;
}

@property(copy, nonatomic) CDUnknownBlockType sendAssetStateDidChange; // @synthesize sendAssetStateDidChange=_sendAssetStateDidChange;
@property(nonatomic) struct CGPoint startCenter; // @synthesize startCenter=_startCenter;
@property(nonatomic) __weak UIImageView *tempImageView; // @synthesize tempImageView=_tempImageView;
@property(nonatomic) __weak UILabel *tempTipsLabel; // @synthesize tempTipsLabel=_tempTipsLabel;
@property(retain, nonatomic) UIView *tempView; // @synthesize tempView=_tempView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIWindow *keyWindow;
- (void)_handleLongPress:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

