//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSDate, NSString, TBOCircularProgressView;
@protocol SDWebImageOperation;

@interface TBOImageView : UIImageView
{
    _Bool _needlessAnimation;	// 8 = 0x8
    TBOCircularProgressView *_progressView;	// 16 = 0x10
    id <SDWebImageOperation> _operation;	// 24 = 0x18
    unsigned long long _requestCount;	// 32 = 0x20
    NSDate *_startDate;	// 40 = 0x28
    NSString *_downloadURL;	// 48 = 0x30
    NSString *_imageURL;	// 56 = 0x38
}

@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) _Bool needlessAnimation; // @synthesize needlessAnimation=_needlessAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

