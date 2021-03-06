//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface WSAssetViewColumn : UIView
{
    _Bool _selected;
    _Bool _canPreview;
    unsigned long long _column;
    UIImageView *_selectedView;
    UIImageView *_imageView;
    CDUnknownBlockType _shouldSelectItem;
    CDUnknownBlockType _previewBlock;
}

+ (id)assetViewWithImage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType previewBlock; // @synthesize previewBlock=_previewBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldSelectItem; // @synthesize shouldSelectItem=_shouldSelectItem;
@property(nonatomic) _Bool canPreview; // @synthesize canPreview=_canPreview;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
- (void).cxx_destruct;
- (void)goPreviewAction;
- (void)checkAction;
- (void)userDidTapAction:(id)arg1;
- (void)setGotoPreviewBlock:(CDUnknownBlockType)arg1;
- (void)setShouldSelectItemBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithImage:(id)arg1;

@end

