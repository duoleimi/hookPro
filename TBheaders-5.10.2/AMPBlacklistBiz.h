//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "AMPBlacklistBiz-Protocol.h"

@class NSString;

@interface AMPBlacklistBiz : AMPMsgBusHelp <AMPBlacklistBiz>
{
}

- (void)modifyStatus:(_Bool)arg1 withModifyUserId:(id)arg2 forUserId:(id)arg3;
- (void)blacklistPageNo:(long long)arg1 pageSize:(long long)arg2 forUserId:(id)arg3;
- (void)initInfo;
- (void)stopBiz;
- (void)resetBiz;
- (void)startBiz;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

