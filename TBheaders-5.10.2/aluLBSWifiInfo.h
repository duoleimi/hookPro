//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface aluLBSWifiInfo : NSObject
{
    int _rssi;	// 8 = 0x8
    NSString *_ssid;	// 16 = 0x10
    NSString *_mac;	// 24 = 0x18
}

@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;

@end

