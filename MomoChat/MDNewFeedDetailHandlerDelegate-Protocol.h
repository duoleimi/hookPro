//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDFeedComment, NSString;

@protocol MDNewFeedDetailHandlerDelegate <NSObject>
- (void)sendCommentToComment:(MDFeedComment *)arg1 showKeyBoard:(_Bool)arg2;
- (void)sendCommentToFeed:(_Bool)arg1;
- (void)beginHandleCommentActions:(NSString *)arg1 andSelectedRowIndex:(long long)arg2;

@optional
- (void)refreshTableView;
@end

