//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol NXLayoutSubViewsDelegate;

@interface NXUILayoutSubView : UIView
{
    id <NXLayoutSubViewsDelegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <NXLayoutSubViewsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;

@end

