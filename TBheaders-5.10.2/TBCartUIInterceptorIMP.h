//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCartUIInterceptorProtocol-Protocol.h"

@class NSString, TBCartUIInterceptorContext, TBTradeRecmdEngine;

@interface TBCartUIInterceptorIMP : NSObject <TBCartUIInterceptorProtocol>
{
    _Bool _recmdNeedDelayQuery;	// 8 = 0x8
    TBTradeRecmdEngine *_recmdEngine;	// 16 = 0x10
    unsigned long long _customSectionStart;	// 24 = 0x18
    TBCartUIInterceptorContext *_context;	// 32 = 0x20
}

@property(retain, nonatomic) TBCartUIInterceptorContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool recmdNeedDelayQuery; // @synthesize recmdNeedDelayQuery=_recmdNeedDelayQuery;
@property(nonatomic) unsigned long long customSectionStart; // @synthesize customSectionStart=_customSectionStart;
@property(retain, nonatomic) TBTradeRecmdEngine *recmdEngine; // @synthesize recmdEngine=_recmdEngine;
- (void).cxx_destruct;
- (id)recmdCartConfig;
- (id)tmCartEngine;
- (id)cartEngine;
- (void)registCartRecmdEngine:(id)arg1;
- (void)queryRecom;
- (void)interceptorDidNeedClean;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)cartSectionStartIndexWithNeedLength:(unsigned long long)arg1;
- (void)cartQueryEndPageDataSuccess;
- (void)cartQueryData;
- (_Bool)hasAdditionalData;
- (_Bool)isNeedShowAdditionalData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

