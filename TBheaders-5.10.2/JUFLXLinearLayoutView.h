//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface JUFLXLinearLayoutView : UIView
{
    _Bool _dirty;	// 8 = 0x8
    _Bool _autoAdjustFrameSize;	// 9 = 0x9
    long long _layoutDirection;	// 16 = 0x10
    double _lineSpacing;	// 24 = 0x18
    NSArray *_childViews;	// 32 = 0x20
    struct UIEdgeInsets _contentInset;	// 40 = 0x28
}

@property(retain, nonatomic) NSArray *childViews; // @synthesize childViews=_childViews;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) _Bool autoAdjustFrameSize; // @synthesize autoAdjustFrameSize=_autoAdjustFrameSize;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)layout;
- (void)setNeedsReload;
- (void)setNeedsUpdateChildViews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
