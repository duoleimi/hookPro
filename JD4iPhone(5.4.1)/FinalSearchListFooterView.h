//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class FinalSearchBackKeyWordsView, JDFooterLoadingView, UIImageView, UILabel;

@interface FinalSearchListFooterView : JDView
{
    CDUnknownBlockType _searchForKeyword;
    JDFooterLoadingView *_loadingView;
    UIImageView *_noMoreIcon;
    UILabel *_noMoreLabel;
    FinalSearchBackKeyWordsView *_backKeywordsView;
    double _baseHeight;
}

@property(nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(retain, nonatomic) FinalSearchBackKeyWordsView *backKeywordsView; // @synthesize backKeywordsView=_backKeywordsView;
@property(retain, nonatomic) UILabel *noMoreLabel; // @synthesize noMoreLabel=_noMoreLabel;
@property(retain, nonatomic) UIImageView *noMoreIcon; // @synthesize noMoreIcon=_noMoreIcon;
@property(retain, nonatomic) JDFooterLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType searchForKeyword; // @synthesize searchForKeyword=_searchForKeyword;
- (void).cxx_destruct;
- (double)footerViewHeight;
- (void)showLoading:(_Bool)arg1 title:(id)arg2;
- (void)hideBackWords;
- (void)showBackWords:(id)arg1 withJoyHidden:(_Bool)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

