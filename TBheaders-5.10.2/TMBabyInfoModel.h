//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TMBabyInfoModel : TBJSONModel
{
    _Bool _isMarkedPrimary;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_gender;	// 24 = 0x18
    NSString *_birthdayStr;	// 32 = 0x20
    NSString *_avatar;	// 40 = 0x28
    NSString *_id;	// 48 = 0x30
    NSString *_picData;	// 56 = 0x38
    NSString *_source;	// 64 = 0x40
    NSString *_babyType;	// 72 = 0x48
}

@property(nonatomic) _Bool isMarkedPrimary; // @synthesize isMarkedPrimary=_isMarkedPrimary;
@property(copy, nonatomic) NSString *babyType; // @synthesize babyType=_babyType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *picData; // @synthesize picData=_picData;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *birthdayStr; // @synthesize birthdayStr=_birthdayStr;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end

