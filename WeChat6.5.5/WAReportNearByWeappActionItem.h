//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WAReportNearByWeappActionItem : WAReportBaseItem
{
    unsigned int _appCount;
    unsigned int _clicktime;
    unsigned long long _enterScene;
    NSString *_nearbyListID;
}

@property(nonatomic) unsigned int clicktime; // @synthesize clicktime=_clicktime;
@property(copy, nonatomic) NSString *nearbyListID; // @synthesize nearbyListID=_nearbyListID;
@property(nonatomic) unsigned int appCount; // @synthesize appCount=_appCount;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (void).cxx_destruct;
- (id)reportString;

@end

