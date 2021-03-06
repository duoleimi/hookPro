//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUAlertBarModel.h"

@class NSString;

@interface MUAt8AlertBarModel : MUAlertBarModel
{
    int _anchorType;
    NSString *_title;
    CDUnknownBlockType _closeBlock;
    double _anchorOffset;
    struct CGPoint _anchorPoint;
    struct CGRect _maskFrame;
}

@property(nonatomic) double anchorOffset; // @synthesize anchorOffset=_anchorOffset;
@property(nonatomic) int anchorType; // @synthesize anchorType=_anchorType;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic) struct CGRect maskFrame; // @synthesize maskFrame=_maskFrame;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

