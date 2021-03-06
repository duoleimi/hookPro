//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSArray, NSMutableArray, UIColor;

@interface MDLineChartView : UIView
{
    int _yValueMax;
    int _maxValueIndex;
    NSArray *_xStringArray;
    NSArray *_yValues;
    double _xLabelWidth;
    CAShapeLayer *_chartLine;
    UIColor *_strokeColor;
    NSMutableArray *_pointMarkViewArray;
}

@property(retain, nonatomic) NSMutableArray *pointMarkViewArray; // @synthesize pointMarkViewArray=_pointMarkViewArray;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) CAShapeLayer *chartLine; // @synthesize chartLine=_chartLine;
@property(nonatomic) int maxValueIndex; // @synthesize maxValueIndex=_maxValueIndex;
@property(nonatomic) int yValueMax; // @synthesize yValueMax=_yValueMax;
@property(nonatomic) double xLabelWidth; // @synthesize xLabelWidth=_xLabelWidth;
@property(retain, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
@property(retain, nonatomic) NSArray *xStringArray; // @synthesize xStringArray=_xStringArray;
- (_Bool)checkPointValidWithPoint:(struct CGPoint)arg1;
- (id)lengthStringWithMB:(double)arg1;
- (void)addPointTipWithPoint:(struct CGPoint)arg1 atIndex:(int)arg2;
- (void)drawCoordinateLine;
- (void)addPointViewWithCenter:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)lineViewWithFrame:(struct CGRect)arg1;
- (void)resetYLabels;
- (int)findMaxValueWithMaxNumber:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

