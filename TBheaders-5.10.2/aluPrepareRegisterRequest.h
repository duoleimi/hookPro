//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "aluBaseRequest.h"

@class NSDictionary, aluPrepareRegisterInfo, aluRiskControlInfo;

@interface aluPrepareRegisterRequest : aluBaseRequest
{
    aluPrepareRegisterInfo *_info;	// 8 = 0x8
    aluRiskControlInfo *_riskInfo;	// 16 = 0x10
    NSDictionary *_extra;	// 24 = 0x18
}

+ (id)requestWithInfo:(id)arg1 riskInfo:(id)arg2 extra:(id)arg3;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) aluRiskControlInfo *riskInfo; // @synthesize riskInfo=_riskInfo;
@property(retain, nonatomic) aluPrepareRegisterInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1 riskInfo:(id)arg2 extra:(id)arg3;

@end

