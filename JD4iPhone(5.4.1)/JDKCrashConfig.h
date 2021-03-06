//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDKCrashConfig : NSObject
{
    _Bool _enableInProcessSymbolication;
    _Bool _enableDebugMode;
    _Bool _enableJDVersion;
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_deviceID;
    NSString *_channelID;
    CDUnknownBlockType _signBlock;
    unsigned long long _signType;
    CDUnknownBlockType _specialParamsBlock;
    NSString *_cookie;
    NSString *_serverURL;
    unsigned long long _crashInfoMaxLength;
    NSString *_grayscaleFlag;
}

+ (id)defaultConfig;
@property(copy, nonatomic) NSString *grayscaleFlag; // @synthesize grayscaleFlag=_grayscaleFlag;
@property(nonatomic, getter=isJDVersionEnabled) _Bool enableJDVersion; // @synthesize enableJDVersion=_enableJDVersion;
@property(nonatomic) unsigned long long crashInfoMaxLength; // @synthesize crashInfoMaxLength=_crashInfoMaxLength;
@property(copy, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) CDUnknownBlockType specialParamsBlock; // @synthesize specialParamsBlock=_specialParamsBlock;
@property(nonatomic) unsigned long long signType; // @synthesize signType=_signType;
@property(copy, nonatomic) CDUnknownBlockType signBlock; // @synthesize signBlock=_signBlock;
@property(nonatomic, getter=isDebugModeEnabled) _Bool enableDebugMode; // @synthesize enableDebugMode=_enableDebugMode;
@property(nonatomic, getter=isInProcessSymbolicationEnabled) _Bool enableInProcessSymbolication; // @synthesize enableInProcessSymbolication=_enableInProcessSymbolication;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;

@end

