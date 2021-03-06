//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSMutableDictionary, NSString;

@protocol FlyDelegate <NSObject>
- (void)flyShowVideoWithUrl:(NSString *)arg1;
- (void)flyShowImagesWithUrls:(NSArray *)arg1 index:(long long)arg2;
- (void)flyPostHttpRequestWithUrl:(NSString *)arg1 requestIdentifier:(NSString *)arg2 params:(NSMutableDictionary *)arg3 targetId:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;

@optional
- (void)flyLoadFailedWithError:(NSError *)arg1;
@end

