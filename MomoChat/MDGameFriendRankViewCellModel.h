//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDGameFriendRankViewCellModel : NSObject
{
    NSString *_momoId;
    NSString *_avatarUrl;
    NSString *_name;
    NSString *_subDes;
    long long _rank;
}

@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *subDes; // @synthesize subDes=_subDes;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *momoId; // @synthesize momoId=_momoId;
- (void)dealloc;

@end

