//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDSTQLTreeNode.h"

@class ACDSTPath, ACDSTQLTreeContext, ACDSTQueryOptions;

@interface ACDSTQueryTree : ACDSTQLTreeNode
{
    ACDSTPath *_path;	// 8 = 0x8
    ACDSTQueryOptions *_querys;	// 16 = 0x10
    ACDSTQLTreeContext *_context;	// 24 = 0x18
}

@property(readonly, nonatomic) ACDSTQLTreeContext *context; // @synthesize context=_context;
@property(retain, nonatomic) ACDSTQueryOptions *querys; // @synthesize querys=_querys;
@property(retain, nonatomic) ACDSTPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)toSqlJson;
- (id)toODataStr;
- (id)init;

@end

