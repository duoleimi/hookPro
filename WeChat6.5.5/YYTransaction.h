//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface YYTransaction : NSObject
{
    id _target;
    SEL _selector;
}

+ (id)transactionWithTarget:(id)arg1 selector:(SEL)arg2;
+ (void)load;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)commit;

@end

