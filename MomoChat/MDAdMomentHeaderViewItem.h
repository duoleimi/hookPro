//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDAdMomentHeaderViewItem : NSObject
{
    _Bool _hideFollowBtn;
    NSString *_avatarUrlStr;
    NSString *_title;
    NSString *_desc;
    NSString *_followText;
}

@property(nonatomic, getter=isHideFollowBtn) _Bool hideFollowBtn; // @synthesize hideFollowBtn=_hideFollowBtn;
@property(copy, nonatomic) NSString *followText; // @synthesize followText=_followText;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *avatarUrlStr; // @synthesize avatarUrlStr=_avatarUrlStr;
- (void).cxx_destruct;

@end
