//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSMutableDictionary, NSString;

@interface TBOrderEventTemplate : TBOrderObject
{
    NSString *_eventId;	// 8 = 0x8
    NSMutableDictionary *_map;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)setMapParam:(id)arg1 forKey:(id)arg2;
- (void)setParam:(id)arg1 forKey:(id)arg2;
- (void)setParams:(id)arg1;
- (id)nextEventId;
- (_Bool)hasNextEvent;
- (id)title;
- (id)msg;
- (id)v;
- (id)api;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)params;
- (int)eventType;

@end

