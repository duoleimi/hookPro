//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCDNImageConfigProtocol-Protocol.h"

@class NSString;

@interface ConfigCenterDefault : NSObject <TBCDNImageConfigProtocol>
{
    NSString *_configFileName;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *configFileName; // @synthesize configFileName=_configFileName;
- (void).cxx_destruct;
- (id)init;
- (id)initWithGroupFileName:(id)arg1;
- (id)getConfigUpdateNoticeName;
- (id)getConfigContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

