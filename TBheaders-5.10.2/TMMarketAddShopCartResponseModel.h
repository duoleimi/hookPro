//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TMMarketAddShopCartResponseModel : NSObject
{
    _Bool _isSuccess;	// 8 = 0x8
    int _errorType;	// 12 = 0xc
    NSString *_errorCode;	// 16 = 0x10
}

@property(nonatomic) int errorType; // @synthesize errorType=_errorType;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end

