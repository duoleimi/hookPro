//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZDMRequest.h"

@class ZDMUser;

@interface ZDMFollowUserRequest : ZDMRequest
{
    _Bool _follows;
    ZDMUser *_user;
}

@property(readonly, nonatomic) _Bool follows; // @synthesize follows=_follows;
@property(readonly, nonatomic) ZDMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)responseFollowUser:(CDUnknownBlockType)arg1;
- (id)initWithUser:(id)arg1 follows:(_Bool)arg2;

@end

