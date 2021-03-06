//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSString, TTTJumpModel;

@interface TTThemeArticleModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_content;
    NSString *_browseNum;
    NSString *_pictureUrl;
    NSString *_name;
    TTTJumpModel *_jump;
}

@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(copy, nonatomic) NSString *browseNum; // @synthesize browseNum=_browseNum;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

