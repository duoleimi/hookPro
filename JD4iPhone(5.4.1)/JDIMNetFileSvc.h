//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDIMJSSConfig;

@interface JDIMNetFileSvc : NSObject
{
    JDIMJSSConfig *_jssConfig;
}

+ (id)sharedJDIMNetFileSvc;
@property(retain, nonatomic) JDIMJSSConfig *jssConfig; // @synthesize jssConfig=_jssConfig;
- (void).cxx_destruct;
- (void)downloadFailed:(id)arg1;
- (void)downloadSuccess:(id)arg1;
- (void)downLoadVoice:(id)arg1;
- (void)uploadDidFailed:(id)arg1;
- (void)uploadSuccess:(id)arg1;
- (void)uploadFileEx:(id)arg1 Message:(id)arg2;
- (void)uploadFile:(id)arg1 Message:(id)arg2;
- (void)uploadWithImageServer:(id)arg1 Message:(id)arg2;
- (void)uploadWithImageServerEx:(id)arg1 Message:(id)arg2;
- (id)createOutLink:(id)arg1 expiresTime:(double)arg2 fileExtendsion:(int)arg3;
- (id)createUploadParams:(id)arg1 data:(id)arg2 fileExtendsion:(int)arg3;
- (id)createUploadUrl:(id)arg1 fileExtendsion:(int)arg2;

@end
