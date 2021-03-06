//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class ASTextNode, NSString;

@interface JDSHHdxTripleColorTextNode : ASDisplayNode
{
    ASTextNode *_whiteText;
    ASTextNode *_redText;
    ASTextNode *_grayText;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ASTextNode *grayText; // @synthesize grayText=_grayText;
@property(retain, nonatomic) ASTextNode *redText; // @synthesize redText=_redText;
@property(retain, nonatomic) ASTextNode *whiteText; // @synthesize whiteText=_whiteText;
- (void).cxx_destruct;
- (void)layout;
- (void)didLoad;
- (id)initWithTitle:(id)arg1;
- (void)adjustWhiteAlpha:(double)arg1 redAlpha:(double)arg2 grayAlpha:(double)arg3;

@end

