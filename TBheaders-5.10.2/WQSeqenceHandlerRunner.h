//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, WQSeqenceHandler;

@interface WQSeqenceHandlerRunner : NSObject
{
    CDUnknownBlockType _retBlock;	// 8 = 0x8
    WQSeqenceHandler *_handler;	// 16 = 0x10
    NSDictionary *_params;	// 24 = 0x18
    NSDictionary *_extraParams;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) __weak WQSeqenceHandler *handler; // @synthesize handler=_handler;
@property(copy, nonatomic) CDUnknownBlockType retBlock; // @synthesize retBlock=_retBlock;
- (void).cxx_destruct;
- (id)initWithHandler:(id)arg1 retBlock:(CDUnknownBlockType)arg2 params:(id)arg3 extraParams:(id)arg4;

@end

