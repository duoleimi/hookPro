//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface _FBKVOSharedController : NSObject
{
    NSHashTable *_infos;	// 8 = 0x8
    int _lock;	// 16 = 0x10
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unobserve:(id)arg1 infos:(id)arg2;
- (void)unobserve:(id)arg1 info:(id)arg2;
- (void)observe:(id)arg1 info:(id)arg2;
- (id)debugDescription;
- (id)init;

@end

