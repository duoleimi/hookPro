//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class FDKDecoration, FDKFaceWarpFilter, NSArray;

@interface FDKDecorationFilter : GPUImageFilterGroup
{
    float _audioVolume;
    FDKDecoration *_decoration;
    id <FDKFaceWarper> _faceWarper;
    NSArray *_layerFilters;
    FDKFaceWarpFilter *_warpFilter;
}

@property(retain, nonatomic) FDKFaceWarpFilter *warpFilter; // @synthesize warpFilter=_warpFilter;
@property(copy, nonatomic) NSArray *layerFilters; // @synthesize layerFilters=_layerFilters;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(retain, nonatomic) id <FDKFaceWarper> faceWarper; // @synthesize faceWarper=_faceWarper;
@property(copy, nonatomic) FDKDecoration *decoration; // @synthesize decoration=_decoration;
- (void).cxx_destruct;
- (void)setFaceFeature:(id)arg1 facialExpressionState:(unsigned long long)arg2 inputFrameSize:(struct CGSize)arg3;
- (void)setFaceFeature:(id)arg1 facialExpressionState:(unsigned long long)arg2 objectFeature:(id)arg3 inputFrameSize:(struct CGSize)arg4;
- (id)initWithDecoration:(id)arg1;

@end

