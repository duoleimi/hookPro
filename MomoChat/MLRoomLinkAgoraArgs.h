//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSString;

@interface MLRoomLinkAgoraArgs : EtaModel
{
    NSString *_masterMomoId;
    NSString *_roomId;
    NSString *_slaveMomoId;
    long long _pushType;
    long long _pullType;
    NSString *_currentMomoId;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(copy, nonatomic) NSString *currentMomoId; // @synthesize currentMomoId=_currentMomoId;
@property(nonatomic) long long pullType; // @synthesize pullType=_pullType;
@property(nonatomic) long long pushType; // @synthesize pushType=_pushType;
@property(copy, nonatomic) NSString *slaveMomoId; // @synthesize slaveMomoId=_slaveMomoId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *masterMomoId; // @synthesize masterMomoId=_masterMomoId;
- (void).cxx_destruct;

@end

