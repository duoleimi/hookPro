//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PRTweenLerpPeriod.h"

#import "PRTweenLerpPeriod.h"

@interface PRTweenCGRectLerpPeriod : PRTweenLerpPeriod <PRTweenLerpPeriod>
{
}

+ (id)periodWithStartCGRect:(struct CGRect)arg1 endCGRect:(struct CGRect)arg2 duration:(double)arg3;
- (void)setProgress:(double)arg1;
- (id)tweenedValueForProgress:(double)arg1;
- (struct CGRect)endCGRect;
- (struct CGRect)tweenedCGRect;
- (struct CGRect)startCGRect;

@end

