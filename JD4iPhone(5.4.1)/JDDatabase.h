//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSString;

@interface JDDatabase : NSObject
{
    FMDatabase *db;
    NSString *tableName_;
}

@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=tableName_;
- (void)dealloc;
- (long long)getCountByCriteria:(id)arg1;
- (_Bool)deleteByCriteria:(id)arg1;
- (void)checkTable;
- (void)addColumn:(id)arg1 type:(int)arg2;
- (id)init;

@end

