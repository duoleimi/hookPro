//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TXQueryContactModel : TBJSONModel
{
    NSString *_id;	// 8 = 0x8
    NSString *_phoneNum;	// 16 = 0x10
    NSString *_userName;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

