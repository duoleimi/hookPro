//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, UIImage;

@interface TBHLTagModel : TBJSONModel
{
    NSString *_catId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_pic;	// 24 = 0x18
    UIImage *_picImage;	// 32 = 0x20
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) UIImage *picImage; // @synthesize picImage=_picImage;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *catId; // @synthesize catId=_catId;
- (void).cxx_destruct;

@end

