//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBSNSBasicServiceDelegate-Protocol.h"

@class NSString, TBSNSMyCollectShopCancelCollectService, TBSNSMyCollectShopSetTopShopService;

@interface TBSNSMyCollectShopItemMenuTool : NSObject <TBSNSBasicServiceDelegate>
{
    CDUnknownBlockType _complete;	// 8 = 0x8
    long long _operationFlag;	// 16 = 0x10
    TBSNSMyCollectShopSetTopShopService *_setTopService;	// 24 = 0x18
    TBSNSMyCollectShopCancelCollectService *_cancelCollectService;	// 32 = 0x20
}

@property(retain, nonatomic) TBSNSMyCollectShopCancelCollectService *cancelCollectService; // @synthesize cancelCollectService=_cancelCollectService;
@property(retain, nonatomic) TBSNSMyCollectShopSetTopShopService *setTopService; // @synthesize setTopService=_setTopService;
@property(nonatomic) long long operationFlag; // @synthesize operationFlag=_operationFlag;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)cancelCollectForAccountId:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)setTopForShopItem:(id)arg1 complete:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

