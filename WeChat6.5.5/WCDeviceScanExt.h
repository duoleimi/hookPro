//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSData, WCDevice;

__attribute__((visibility("hidden")))
@interface WCDeviceScanExt : MMObject
{
    WCDevice *_device;
    NSData *_extData;
    unsigned int _lastOnScanTime;
}

@property(nonatomic) unsigned int lastOnScanTime; // @synthesize lastOnScanTime=_lastOnScanTime;
@property(retain, nonatomic) NSData *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)dealloc;

@end

