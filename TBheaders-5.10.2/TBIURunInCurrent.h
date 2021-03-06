//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSThread;
@protocol OS_dispatch_queue;

@interface TBIURunInCurrent : NSObject
{
    _Bool _isMainThread;	// 8 = 0x8
    NSOperationQueue *_currentOperationQueue;	// 16 = 0x10
    NSThread *_currentThread;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_currentQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *currentQueue; // @synthesize currentQueue=_currentQueue;
@property(retain, nonatomic) NSThread *currentThread; // @synthesize currentThread=_currentThread;
@property(retain, nonatomic) NSOperationQueue *currentOperationQueue; // @synthesize currentOperationQueue=_currentOperationQueue;
- (void).cxx_destruct;
- (void)runBlock:(CDUnknownBlockType)arg1;
- (void)runInType:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)run:(CDUnknownBlockType)arg1 inType:(int)arg2;
- (void)run:(CDUnknownBlockType)arg1;
- (id)init;

@end

