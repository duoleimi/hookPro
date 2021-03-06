//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSDRouter : NSObject
{
    NSString *_url;
    NSString *_redirectUrl;
    long long _statusCode;
    PSDRouter *_previousRouter;
    PSDRouter *_nextRouter;
    PSDRouter *_lastRouter;
}

@property(nonatomic) __weak PSDRouter *lastRouter; // @synthesize lastRouter=_lastRouter;
@property(retain, nonatomic) PSDRouter *nextRouter; // @synthesize nextRouter=_nextRouter;
@property(retain, nonatomic) PSDRouter *previousRouter; // @synthesize previousRouter=_previousRouter;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (void)nextRouter:(id)arg1;
- (id)initWithUrl:(id)arg1 statusCode:(long long)arg2 redirectUrl:(id)arg3;

@end

