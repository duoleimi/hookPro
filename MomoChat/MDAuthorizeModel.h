//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface MDAuthorizeModel : NSObject
{
    NSString *_thirdpartImg;
    NSString *_name;
    NSString *_title;
    NSString *_client_secret;
    NSArray *_scopeModels;
    NSArray *_advancedScopeModels;
    NSMutableArray *_scopeResultArray;
}

@property(retain, nonatomic) NSMutableArray *scopeResultArray; // @synthesize scopeResultArray=_scopeResultArray;
@property(retain, nonatomic) NSArray *advancedScopeModels; // @synthesize advancedScopeModels=_advancedScopeModels;
@property(retain, nonatomic) NSArray *scopeModels; // @synthesize scopeModels=_scopeModels;
@property(copy, nonatomic) NSString *client_secret; // @synthesize client_secret=_client_secret;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *thirdpartImg; // @synthesize thirdpartImg=_thirdpartImg;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

