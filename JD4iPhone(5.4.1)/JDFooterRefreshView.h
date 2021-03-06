//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CustomActivityIndicatorView, NSString, UILabel;

@interface JDFooterRefreshView : UIView
{
    UILabel *_txtLabel;
    CustomActivityIndicatorView *_indicator;
    int _state;
    id <JDFooterRefreshViewDelegate> _delegate;
    NSString *_pullingTxt;
    NSString *_normalTxt;
    NSString *_loadingTxt;
}

@property(copy, nonatomic) NSString *loadingTxt; // @synthesize loadingTxt=_loadingTxt;
@property(copy, nonatomic) NSString *normalTxt; // @synthesize normalTxt=_normalTxt;
@property(copy, nonatomic) NSString *pullingTxt; // @synthesize pullingTxt=_pullingTxt;
@property(nonatomic) __weak id <JDFooterRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (void)footerRefreshViewScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)footerRefreshViewScrollViewDidEndDragging:(id)arg1;
- (void)footerRefreshViewScrollViewDidScroll:(id)arg1;
- (void)setNormalTxt:(id)arg1 pullingTxt:(id)arg2 loadingTxt:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

@end

