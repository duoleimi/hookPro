//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink, UIImageView;

@interface MDLeftArrowAnimView : UIView
{
    UIImageView *_firstArrowView;
    UIImageView *_secondArrowView;
    CADisplayLink *_displayLink;
}

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIImageView *secondArrowView; // @synthesize secondArrowView=_secondArrowView;
@property(retain, nonatomic) UIImageView *firstArrowView; // @synthesize firstArrowView=_firstArrowView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)displayDidRefresh:(id)arg1;
- (void)configUI;
- (id)init;

@end

