//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSObject, NSRunLoop;
@protocol OS_dispatch_group;

@interface _ASRRunLoopThread : NSThread
{
    NSObject<OS_dispatch_group> *_waitGroup;	// 64 = 0x40
    NSRunLoop *_runLoop;	// 72 = 0x48
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)main;
- (id)init;
- (void)dealloc;

@end
