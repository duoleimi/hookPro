//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDChatBaseSession, NSString;

@protocol MDChatSessionCellDelegate <NSObject>
@property(retain, nonatomic) NSString *sessionKey;
- (void)bindModel:(MDChatBaseSession *)arg1;

@optional
@property(nonatomic) int showCate;
@end
