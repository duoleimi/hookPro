//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class ASImageNode;

@interface JDSHNavSearchView : ASDisplayNode
{
    ASImageNode *_searchButton;
    CDUnknownBlockType _handleBlock;
}

@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
@property(retain, nonatomic) ASImageNode *searchButton; // @synthesize searchButton=_searchButton;
- (void).cxx_destruct;
- (void)p_button:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withHandleBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

