//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface sopOtherShipment : JDModel
{
    NSString *descriptionString;
    NSString *name;
    NSNumber *Id;
}

@property(retain, nonatomic) NSNumber *Id; // @synthesize Id;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;
- (void)modelWithDic:(id)arg1;

@end

