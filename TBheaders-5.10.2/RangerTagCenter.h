//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface RangerTagCenter : NSObject
{
    NSMutableDictionary *_tagConfigDict;	// 8 = 0x8
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)tagClassFromTagName:(id)arg1;
- (_Bool)registerClass:(Class)arg1 forTag:(id)arg2;
- (id)tagNameForClass:(Class)arg1;
- (id)init;

@end

