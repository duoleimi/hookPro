//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDContactBase.h"

@class NSString;

@interface MDContactDiscuss : MDContactBase
{
    NSString *_d_id;
    NSString *_d_name;
    NSString *_name_py;
    NSString *_name_range;
}

+ (id)eta_drop;
+ (void)eta_create:(id)arg1;
+ (id)eta_modelFromDictionary:(id)arg1;
+ (id)eta_dbStoreProperty;
+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) NSString *name_range; // @synthesize name_range=_name_range;
@property(retain, nonatomic) NSString *name_py; // @synthesize name_py=_name_py;
@property(retain, nonatomic) NSString *d_name; // @synthesize d_name=_d_name;
@property(retain, nonatomic) NSString *d_id; // @synthesize d_id=_d_id;
- (void).cxx_destruct;

@end
