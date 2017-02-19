//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailRightsModel, NSMutableArray, UILabel;

@interface AliDetailRightsComponent : AliDetailComponent
{
    AliDetailRightsModel *_rightsModel;	// 8 = 0x8
    double _topGap;	// 16 = 0x10
    UILabel *_moreLabel;	// 24 = 0x18
    NSMutableArray *_itemViews;	// 32 = 0x20
    NSMutableArray *_descViews;	// 40 = 0x28
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *descViews; // @synthesize descViews=_descViews;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) double topGap; // @synthesize topGap=_topGap;
@property(nonatomic) __weak AliDetailRightsModel *rightsModel; // @synthesize rightsModel=_rightsModel;
- (void).cxx_destruct;
- (void)adjustItemForFullPresentStyle;
- (void)adjustItemForSimplePresentStyle;
- (void)layoutSubviews;
- (void)onComponentClicked;
- (id)renderRightsItem:(id)arg1 constrainedSize:(struct CGSize)arg2;
- (id)descLabelWithItemModel:(id)arg1 frame:(struct CGRect)arg2;
- (struct CGSize)constrainedSize:(_Bool)arg1;
- (void)renderWithFullPresentStyle;
- (void)renderWithSimplePresentStyle;
- (void)renderWithComponentModel:(id)arg1;
- (void)setObject:(id)arg1;

@end
