//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UTShareContent;

@interface UTShareResponse : NSObject
{
    int _type;	// 8 = 0x8
    UTShareContent *_content;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    NSString *_errorCode;	// 32 = 0x20
    NSString *_errorMessage;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UTShareContent *content; // @synthesize content=_content;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

