//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface TBRKVOProxy : NSObject
{
    NSMapTable *_trampolines;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedProxy;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMapTable *trampolines; // @synthesize trampolines=_trampolines;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forContext:(void *)arg2;
- (void)addObserver:(id)arg1 forContext:(void *)arg2;
- (id)init;

@end

