//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSError;

@interface TBCalendarResponse : NSObject
{
    NSError *_error;	// 8 = 0x8
    NSDictionary *_result;	// 16 = 0x10
}

@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1;

@end
