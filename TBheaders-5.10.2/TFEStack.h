//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TFEStack : NSObject
{
    long long _maxCapacity;	// 8 = 0x8
    NSMutableArray *_store;	// 16 = 0x10
}

@property(retain) NSMutableArray *store; // @synthesize store=_store;
@property long long maxCapacity; // @synthesize maxCapacity=_maxCapacity;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)head;
- (id)pop;
- (id)push:(id)arg1;
- (id)init;

@end

