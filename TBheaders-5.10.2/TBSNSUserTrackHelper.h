//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBUserTrackHelper.h"

@class NSMutableDictionary;

@interface TBSNSUserTrackHelper : TBUserTrackHelper
{
    NSMutableDictionary *_dataUserTrackerArgs;	// 8 = 0x8
}

+ (void)clearDataUserTrackerArgs;
+ (void)removeEventWithKey:(id)arg1;
+ (void)addEventObject:(id)arg1 withKey:(id)arg2;
+ (void)effectEventWithArgs:(id)arg1;
+ (void)ctrlClicked:(id)arg1 args:(id)arg2 withDefaultData:(_Bool)arg3;
+ (void)ctrlClicked:(id)arg1 args:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dataUserTrackerArgs; // @synthesize dataUserTrackerArgs=_dataUserTrackerArgs;
- (void).cxx_destruct;
- (void)clearDataUserTrackerArgs;
- (id)allKeys;
- (void)setUserTrackerArgs:(id)arg1;
- (void)removeEventWithKey:(id)arg1;
- (void)addEventObject:(id)arg1 withKey:(id)arg2;
- (id)init;

@end

