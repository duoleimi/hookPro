//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBThemeKitService : NSObject
{
    NSMutableDictionary *_contextMapOld;	// 8 = 0x8
}

+ (_Bool)cancelContextWithModuleName:(id)arg1;
+ (id)contextWithModuleName:(id)arg1;
+ (_Bool)registerThemeWithContext:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *contextMapOld; // @synthesize contextMapOld=_contextMapOld;
- (void).cxx_destruct;
- (_Bool)cancelContextWithModuleName:(id)arg1;
- (id)contextWithModuleName:(id)arg1;
- (_Bool)registerThemeWithContext:(id)arg1;
- (id)init;

@end

