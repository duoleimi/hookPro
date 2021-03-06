//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class JDImageView, JDStowShopActivityModel, UILabel;

@interface JDShopDynamicModeSignCell : UICollectionViewCell
{
    UILabel *timeLabel;
    UILabel *prizeDescriptionLabel;
    JDImageView *imageView;
    UILabel *viewDetailLabel;
    id <JDShopDynamicModeSignCellDelegate> _delegate;
    JDStowShopActivityModel *_activityModel;
}

@property(retain, nonatomic) JDStowShopActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(nonatomic) __weak id <JDShopDynamicModeSignCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickSignImage;
- (void)setCellData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

