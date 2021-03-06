//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIColor;

@interface WareMenuView : UIView
{
    _Bool _canChange;
    NSArray *_titleArray;
    id <WareMenuViewDelegate> _delegate;
    UIView *_bottomLine;
    long long _currentPageIndex;
    UIColor *_selectedTextColor;
    UIColor *_normalTextColor;
    NSMutableArray *_buttonArr;
    UIView *_buttonSuperView;
}

@property(retain, nonatomic) UIView *buttonSuperView; // @synthesize buttonSuperView=_buttonSuperView;
@property(retain, nonatomic) NSMutableArray *buttonArr; // @synthesize buttonArr=_buttonArr;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool canChange; // @synthesize canChange=_canChange;
@property(nonatomic) __weak id <WareMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
- (void).cxx_destruct;
- (long long)getPageIndex;
- (void)setPageIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)changeSkin:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)createButtons;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

