//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TMSearchTestSharedInstance : NSObject
{
    _Bool _useSearchDebug;	// 8 = 0x8
    _Bool _showSearchParams;	// 9 = 0x9
    NSString *_searchBucketid;	// 16 = 0x10
    NSString *_suggestBucketid;	// 24 = 0x18
    NSArray *_blackTable;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *blackTable; // @synthesize blackTable=_blackTable;
@property(nonatomic) _Bool showSearchParams; // @synthesize showSearchParams=_showSearchParams;
@property(nonatomic) _Bool useSearchDebug; // @synthesize useSearchDebug=_useSearchDebug;
@property(copy, nonatomic) NSString *suggestBucketid; // @synthesize suggestBucketid=_suggestBucketid;
@property(copy, nonatomic) NSString *searchBucketid; // @synthesize searchBucketid=_searchBucketid;
- (void).cxx_destruct;
- (void)getSearchReuqestParams:(id)arg1;
- (void)resetDebug;
- (void)dealloc;
- (id)init;

@end

