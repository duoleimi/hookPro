//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MDPhoneVerificationManager : NSObject
{
    NSMutableDictionary *_verifiedDict;
}

@property(retain, nonatomic) NSMutableDictionary *verifiedDict; // @synthesize verifiedDict=_verifiedDict;
- (_Bool)userHasVerified:(id)arg1;
- (void)setUserVerified:(id)arg1;
- (void)dealloc;
- (id)init;

@end

