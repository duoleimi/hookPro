//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRecursiveLock;

@interface MirrorMakeUpCenter : NSObject
{
    _Bool _initialized;	// 8 = 0x8
    NSRecursiveLock *_dataLock;	// 16 = 0x10
    struct CGSize _bufferSize;	// 24 = 0x18
    struct CCosmetic3DTryonEngine *p_cosmetic_engine;	// 40 = 0x28
    struct {
        struct CosmeticTemplateData *_field1;
        float *_field2;
        int _field3;
        int _field4;
    } *p_cosmetic_param;	// 48 = 0x30
    struct {
        char *_field1;
        char *_field2;
        int _field3;
        int _field4;
        int _field5;
        int _field6;
    } *p_glass_param;	// 56 = 0x38
    struct {
        struct FaceBeautifyParam *_field1;
        int _field2;
        int _field3;
    } *p_cosmetic_beauty_param;	// 64 = 0x40
    struct {
        struct PlasticBeautiyParam *_field1;
        int _field2;
        int _field3;
    } *p_plastic_beauty_param;	// 72 = 0x48
    int _referenceCount;	// 80 = 0x50
    unsigned int uBeautyFlags;	// 84 = 0x54
    unsigned int uPlasticBeautyFlags;	// 88 = 0x58
}

+ (id)sharedCenter;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedMirrorMakeUpCenter;
@property(nonatomic) struct CGSize bufferSize; // @synthesize bufferSize=_bufferSize;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (char *)mirrorImage2YUVData:(id)arg1;
- (id)takePhotoWithImg:(id)arg1;
- (_Bool)setPlasticBeautyArray:(id)arg1;
- (_Bool)setFaceBeautyArray:(id)arg1;
- (_Bool)setBeautyArray:(id)arg1;
- (id)getColorList:(id)arg1;
- (_Bool)setMakeUpArray:(id)arg1;
- (int)intFromColor:(id)arg1;
- (_Bool)inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)clear;
- (void)clearGlass;
- (void)clearPlasticBeauty;
- (void)clearFaceBeauty;
- (void)clearCosmetic;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)initializer:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

