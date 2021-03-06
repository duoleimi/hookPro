//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACDSThreadSafeMutableDictionary;

@interface ACDSSyncContainer : NSObject
{
    _Bool _inited;	// 8 = 0x8
    ACDSThreadSafeMutableDictionary *_context;	// 16 = 0x10
    ACDSThreadSafeMutableDictionary *_consumersBuffer;	// 24 = 0x18
}

+ (id)getConsumerBySpecificDS:(id)arg1;
+ (id)getConsumer:(id)arg1;
+ (id)getProcessor:(id)arg1;
+ (void)initContainer:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool inited; // @synthesize inited=_inited;
@property(retain, nonatomic) ACDSThreadSafeMutableDictionary *consumersBuffer; // @synthesize consumersBuffer=_consumersBuffer;
@property(retain, nonatomic) ACDSThreadSafeMutableDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)initFromFile:(CDUnknownBlockType)arg1;

@end

