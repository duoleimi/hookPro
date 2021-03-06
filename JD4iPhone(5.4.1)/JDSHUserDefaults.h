//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue, NSTimer;

@interface JDSHUserDefaults : NSObject
{
    _Bool _writeSuc;
    NSMutableDictionary *_dataDictionary;
    NSOperationQueue *_persistenceQueue;
    NSTimer *_saveTimer;
}

+ (id)getDataStorePath;
+ (id)standardUserDefaults;
@property(retain, nonatomic) NSTimer *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(nonatomic) _Bool writeSuc; // @synthesize writeSuc=_writeSuc;
@property(retain, nonatomic) NSOperationQueue *persistenceQueue; // @synthesize persistenceQueue=_persistenceQueue;
@property(retain, nonatomic) NSMutableDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
- (void).cxx_destruct;
- (void)autoSaveMethod:(id)arg1;
- (void)asynchronize;
- (_Bool)synchronize;
- (_Bool)setURL:(id)arg1 forKey:(id)arg2;
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)setDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)setFloat:(float)arg1 forKey:(id)arg2;
- (_Bool)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)writeValidateValue:(id)arg1 forKey:(id)arg2;
- (_Bool)removeObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)resetSaveTimer;
- (void)safeResetStandardUserDefaults;
- (void)resetStandardUserDefaults;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)addObserver;
- (void)dealloc;
- (id)initUniqueInstance;

@end

