//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TableIndexViewDelegate;

@interface TBSNSTableIndexView : UIView
{
    id <TableIndexViewDelegate> _delegate;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    unsigned long long _numberOfSections;	// 32 = 0x20
    unsigned long long _currentSection;	// 40 = 0x28
    double _lineHeight;	// 48 = 0x30
}

@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) unsigned long long currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) unsigned long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <TableIndexViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hide;
- (void)show;
- (void)didRelease:(id)arg1;
- (void)didTap:(id)arg1;
- (void)dealloc;
- (id)initWithTableView:(id)arg1;

@end

