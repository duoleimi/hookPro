//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, NSString, UIView;

@interface OMKRangerTableViewCell : UITableViewCell
{
    UIView *_contentView;	// 8 = 0x8
    NSString *_cellFilePath;	// 16 = 0x10
    unsigned long long _numberPerRow;	// 24 = 0x18
    NSMutableArray *_cellItemArray;	// 32 = 0x20
    CDUnknownBlockType _block;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)updateCellWithBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)rangerSubViewById:(id)arg1;
- (void)setRangerClickBlock:(CDUnknownBlockType)arg1;
- (id)initWithReuseIdentifier:(id)arg1 cssFile:(id)arg2 htmlFile:(id)arg3 numberPerRow:(unsigned long long)arg4 withABSupport:(_Bool)arg5;
- (id)contentView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

