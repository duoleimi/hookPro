//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TBSearchExpandOrContractScrollViewDelegate;

@interface TBScrollViewCompensator : NSObject
{
    _Bool _isExpand;	// 8 = 0x8
    float _startHeight;	// 12 = 0xc
    float _lastHeight;	// 16 = 0x10
    id <TBSearchExpandOrContractScrollViewDelegate> _delegate;	// 24 = 0x18
    double _lastContentOffset;	// 32 = 0x20
    double _startContentOffset;	// 40 = 0x28
}

@property(nonatomic) double startContentOffset; // @synthesize startContentOffset=_startContentOffset;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) float lastHeight; // @synthesize lastHeight=_lastHeight;
@property(nonatomic) float startHeight; // @synthesize startHeight=_startHeight;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(nonatomic) id <TBSearchExpandOrContractScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resetState;

@end

