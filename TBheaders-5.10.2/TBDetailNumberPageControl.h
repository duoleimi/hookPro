//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TBDetailNumberPageControl : UIView
{
    _Bool _hidesForSinglePage;	// 8 = 0x8
    long long _currentPage;	// 16 = 0x10
    long long _numberOfPages;	// 24 = 0x18
    UIButton *_pageIndicatorButton;	// 32 = 0x20
}

@property(retain, nonatomic) UIButton *pageIndicatorButton; // @synthesize pageIndicatorButton=_pageIndicatorButton;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

