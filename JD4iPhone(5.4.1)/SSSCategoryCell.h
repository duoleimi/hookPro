//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASCellNode.h"

@class SSSCategoryMenuItemModel, SSSCategoryShadeTextNode;

@interface SSSCategoryCell : ASCellNode
{
    _Bool _isSelectCategory;
    SSSCategoryMenuItemModel *_model;
    SSSCategoryShadeTextNode *_textNode;
}

+ (id)stringColor:(id)arg1 fontSize:(double)arg2 textAlignment:(long long)arg3;
@property(retain, nonatomic) SSSCategoryShadeTextNode *textNode; // @synthesize textNode=_textNode;
@property(nonatomic) _Bool isSelectCategory; // @synthesize isSelectCategory=_isSelectCategory;
@property(retain, nonatomic) SSSCategoryMenuItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)adjustNodeBlackTextAlpha:(double)arg1 redTextAlpha:(double)arg2;
- (id)initWithModel:(id)arg1;

@end

