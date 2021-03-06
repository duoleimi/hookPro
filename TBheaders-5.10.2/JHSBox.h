//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIView;
@protocol JHSBoxModel, JHSBoxView;

@interface JHSBox : NSObject
{
    NSArray *_models;	// 8 = 0x8
    NSArray *_boxViews;	// 16 = 0x10
    id <JHSBoxModel> _model;	// 24 = 0x18
    UIView<JHSBoxView> *_boxView;	// 32 = 0x20
    CDUnknownBlockType _boxViewGenerator;	// 40 = 0x28
}

+ (id)boxWithModelObject:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType boxViewGenerator; // @synthesize boxViewGenerator=_boxViewGenerator;
@property(readonly, nonatomic) UIView<JHSBoxView> *boxView; // @synthesize boxView=_boxView;
@property(readonly, nonatomic) id <JHSBoxModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) NSArray *boxViews; // @synthesize boxViews=_boxViews;
@property(readonly, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (id)generateAllBoxViews;
- (id)generateBoxViewWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithModels:(id)arg1;

@end

