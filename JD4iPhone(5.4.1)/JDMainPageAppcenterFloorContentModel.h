//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface JDMainPageAppcenterFloorContentModel : NSObject
{
    NSArray *_data;
    NSString *_bgPic;
    NSString *_fontColor;
    NSDictionary *_poz;
    long long _ynSpace;
}

+ (id)objectClassInArray;
@property(nonatomic) long long ynSpace; // @synthesize ynSpace=_ynSpace;
@property(retain, nonatomic) NSDictionary *poz; // @synthesize poz=_poz;
@property(copy, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *bgPic; // @synthesize bgPic=_bgPic;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

