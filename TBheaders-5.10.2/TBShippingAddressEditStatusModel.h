//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBShippingAddressEditStatusModel : NSObject
{
    _Bool _isLoading;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)setDefaultAddressWithDeliverId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

