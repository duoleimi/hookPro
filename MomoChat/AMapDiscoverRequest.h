//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapDiscoverPoint;

@interface AMapDiscoverRequest : NSObject
{
    long long _limit;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _requestBlock;
    AMapDiscoverPoint *_location;
}

@property(copy, nonatomic) AMapDiscoverPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)init;

@end
