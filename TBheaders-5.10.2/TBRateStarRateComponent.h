//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class NSArray, NSString;

@interface TBRateStarRateComponent : TBRateComponent
{
    NSString *_commitId;	// 8 = 0x8
    NSString *_showName;	// 16 = 0x10
    NSArray *_starValues;	// 24 = 0x18
    NSArray *_starNames;	// 32 = 0x20
    NSString *_value;	// 40 = 0x28
    NSString *_defaultValue;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *starNames; // @synthesize starNames=_starNames;
@property(retain, nonatomic) NSArray *starValues; // @synthesize starValues=_starValues;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *commitId; // @synthesize commitId=_commitId;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

