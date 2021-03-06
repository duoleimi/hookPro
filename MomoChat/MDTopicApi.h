//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDApiBase.h"

@interface MDTopicApi : MDApiBase
{
}

- (void)topicListWithMomoId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topicGuideWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)topicProfileWithTopicId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedLikeUserListWithFeedid:(id)arg1 index:(long long)arg2 requestUrl:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)topicFeedLikeOrUnLikeWithid:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topicFeedWithID:(id)arg1 topicFeedType:(int)arg2 index:(long long)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)topicFollowsWithids:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topicUnfollowWithId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topicFollowWithid:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topicFromFeedWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)topicMyWithIndex:(long long)arg1 count:(long long)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)topicHotWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)topicSearchWithKeyword:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)dealloc;

@end

