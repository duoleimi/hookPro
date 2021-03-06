//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBVRVideoModel : TBJSONModel
{
    _Bool _splitEnable;	// 8 = 0x8
    long long _videoId;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSArray *_sources;	// 40 = 0x28
}

+ (id)modelContainerClassMapDictioanry;
+ (id)modelKeyMapper;
@property(nonatomic, getter=isSplitEnable) _Bool splitEnable; // @synthesize splitEnable=_splitEnable;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (_Bool)isMotionEnable;
- (_Bool)isSwitchable;
- (_Bool)isPanoramaVideo;
- (int)renderType;
- (id)init;

@end

