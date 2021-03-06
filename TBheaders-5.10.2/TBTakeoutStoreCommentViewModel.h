//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutViewModel.h"

@class NSArray, NSMutableArray, NSString, TBTakeoutCommentApi;

@interface TBTakeoutStoreCommentViewModel : TBTakeoutViewModel
{
    _Bool _isChangeQueryType;	// 8 = 0x8
    _Bool _isLoadCommentFinished;	// 9 = 0x9
    NSString *_storeId;	// 16 = 0x10
    long long _offset;	// 24 = 0x18
    long long _queryType;	// 32 = 0x20
    long long _limit;	// 40 = 0x28
    TBTakeoutCommentApi *_commentApi;	// 48 = 0x30
    NSMutableArray *_commentCategoryList;	// 56 = 0x38
    NSMutableArray *_allCommentList;	// 64 = 0x40
    NSMutableArray *_satisfyList;	// 72 = 0x48
    NSMutableArray *_unsatisfyList;	// 80 = 0x50
    NSMutableArray *_addCommentList;	// 88 = 0x58
    NSMutableArray *_addSatisfyCommentList;	// 96 = 0x60
    NSMutableArray *_addUnSatisfyCommentList;	// 104 = 0x68
}

@property(nonatomic) _Bool isLoadCommentFinished; // @synthesize isLoadCommentFinished=_isLoadCommentFinished;
@property(retain, nonatomic) NSMutableArray *addUnSatisfyCommentList; // @synthesize addUnSatisfyCommentList=_addUnSatisfyCommentList;
@property(retain, nonatomic) NSMutableArray *addSatisfyCommentList; // @synthesize addSatisfyCommentList=_addSatisfyCommentList;
@property(retain, nonatomic) NSMutableArray *addCommentList; // @synthesize addCommentList=_addCommentList;
@property(retain, nonatomic) NSMutableArray *unsatisfyList; // @synthesize unsatisfyList=_unsatisfyList;
@property(retain, nonatomic) NSMutableArray *satisfyList; // @synthesize satisfyList=_satisfyList;
@property(retain, nonatomic) NSMutableArray *allCommentList; // @synthesize allCommentList=_allCommentList;
@property(retain, nonatomic) NSMutableArray *commentCategoryList; // @synthesize commentCategoryList=_commentCategoryList;
@property(retain, nonatomic) TBTakeoutCommentApi *commentApi; // @synthesize commentApi=_commentApi;
@property(nonatomic) _Bool isChangeQueryType; // @synthesize isChangeQueryType=_isChangeQueryType;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) long long queryType; // @synthesize queryType=_queryType;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
- (void)onError:(id)arg1;
- (void)onSuccess;
- (void)parseResult:(id)arg1;
- (id)serviceApi;
@property(readonly, nonatomic) _Bool isLoadFinished;
@property(readonly, nonatomic) NSArray *addUnSatisfyDataList;
@property(readonly, nonatomic) NSArray *addSatisfyDataList;
@property(readonly, nonatomic) NSArray *addDataList;
@property(readonly, nonatomic) NSArray *unsatisfyDataList;
@property(readonly, nonatomic) NSArray *satisfyDataList;
@property(readonly, nonatomic) NSArray *allDataList;
@property(readonly, nonatomic) NSArray *categoryList;
- (id)init;

@end

