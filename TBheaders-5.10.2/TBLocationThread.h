//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TBLocationThread : NSObject
{
    NSObject<OS_dispatch_queue> *_locationQueue;	// 8 = 0x8
}

+ (id)shareLocationThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *locationQueue; // @synthesize locationQueue=_locationQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getLocationThreadQueue;
- (id)init;

@end

