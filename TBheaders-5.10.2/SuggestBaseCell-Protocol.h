//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SuggestBaseCellDelegate;

@protocol SuggestBaseCell <NSObject>
@property(nonatomic) __weak id <SuggestBaseCellDelegate> delegate;
- (void)configWithData:(id)arg1 WithSuggestQuery:(NSString *)arg2;
@end
