//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TangramLayoutProtocol-Protocol.h"

@class NSArray, NSString, UIImageView;

@interface TangramFixLayout : UIView <TangramLayoutProtocol>
{
    NSArray *_itemModels;	// 8 = 0x8
    NSArray *_margin;	// 16 = 0x10
    double _offsetX;	// 24 = 0x18
    double _offsetY;	// 32 = 0x20
    long long _alignType;	// 40 = 0x28
    long long _showType;	// 48 = 0x30
    double _showY;	// 56 = 0x38
    NSString *_layoutIdentifier;	// 64 = 0x40
    NSString *_bgImgURL;	// 72 = 0x48
    UIImageView *_bgImageView;	// 80 = 0x50
    struct CGPoint _originPoint;	// 88 = 0x58
}

@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSString *bgImgURL; // @synthesize bgImgURL=_bgImgURL;
@property(retain, nonatomic) NSString *layoutIdentifier; // @synthesize layoutIdentifier=_layoutIdentifier;
@property(nonatomic) double showY; // @synthesize showY=_showY;
@property(nonatomic) struct CGPoint originPoint; // @synthesize originPoint=_originPoint;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(nonatomic) long long alignType; // @synthesize alignType=_alignType;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(retain, nonatomic) NSArray *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
- (void).cxx_destruct;
- (void)configLayoutPropertyWithDict:(id)arg1;
- (void)heightChangedWithElement:(id)arg1 model:(id)arg2;
- (double)marginLeft;
- (double)marginBottom;
- (double)marginRight;
- (double)marginTop;
- (void)addSubview:(id)arg1;
- (id)position;
- (void)setFrame:(struct CGRect)arg1;
- (void)calculateLayout;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (struct NSString *)layoutType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

