//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class UILabel;

@interface FinderArticleDetailRelevantChannelCell : JDFinderTableViewCell
{
    CDUnknownBlockType _clickLabel;
    UILabel *_articleRelevantChannelLabel;
}

@property(retain, nonatomic) UILabel *articleRelevantChannelLabel; // @synthesize articleRelevantChannelLabel=_articleRelevantChannelLabel;
@property(copy, nonatomic) CDUnknownBlockType clickLabel; // @synthesize clickLabel=_clickLabel;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)tapRelevantLabel:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

