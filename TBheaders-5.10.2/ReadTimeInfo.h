//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ReadTimeInfo : NSObject
{
    long long sessionType;	// 8 = 0x8
    NSString *sessionId;	// 16 = 0x10
    unsigned long long timeStamp;	// 24 = 0x18
    unsigned long long unreadCount;	// 32 = 0x20
    long long lastMsgTime;	// 40 = 0x28
    NSDictionary *dictMsgInfo;	// 48 = 0x30
    NSDictionary *extData;	// 56 = 0x38
}

@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData;
@property(retain, nonatomic) NSDictionary *dictMsgInfo; // @synthesize dictMsgInfo;
@property(nonatomic) long long lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(nonatomic) long long sessionType; // @synthesize sessionType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

