//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSBoxModel.h"

@class JHSBoxJrxbDataModel;

@interface JHSBoxJrxbModel : JHSBoxModel
{
    float _width;	// 48 = 0x30
    float _height;	// 52 = 0x34
    JHSBoxJrxbDataModel *_data;	// 56 = 0x38
}

@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) JHSBoxJrxbDataModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isEqualToBoxModel:(id)arg1;

@end
