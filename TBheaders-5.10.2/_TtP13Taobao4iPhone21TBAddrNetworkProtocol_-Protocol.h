//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol _TtP13Taobao4iPhone21TBAddrNetworkProtocol_
- (void)startFetch;
- (void)cancel;
@property(nonatomic, copy) CDUnknownBlockType dataErrorHandler;
@property(nonatomic, copy) CDUnknownBlockType cacheHandler;
@property(nonatomic, copy) CDUnknownBlockType failureHandler;
@property(nonatomic, copy) CDUnknownBlockType successHandler;
@property(nonatomic) _Bool isUsePost;
@property(nonatomic) _Bool isNeedLogin;
@property(nonatomic) _Bool isNeedLoadCache;
@property(nonatomic, copy) NSDictionary *queryParam;
@property(nonatomic, copy) NSString *APIVersion;
@property(nonatomic, copy) NSString *APIMethod;
@end

