//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TXPhoneFlowMsg : NSObject
{
    id _data;	// 8 = 0x8
    NSString *_tipMsg;	// 16 = 0x10
    long long _event;	// 24 = 0x18
}

@property(nonatomic) long long event; // @synthesize event=_event;
@property(retain, nonatomic) NSString *tipMsg; // @synthesize tipMsg=_tipMsg;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

