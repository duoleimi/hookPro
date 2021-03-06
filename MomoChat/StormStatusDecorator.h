//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatStatusBaseDecorator.h"

@class ChatStatusView, NSMutableArray;

@interface StormStatusDecorator : ChatStatusBaseDecorator
{
    NSMutableArray *_dropArray;
    NSMutableArray *_bigDropArray;
    ChatStatusView *_chatStatusView;
}

@property(nonatomic) __weak ChatStatusView *chatStatusView; // @synthesize chatStatusView=_chatStatusView;
@property(retain, nonatomic) NSMutableArray *bigDropArray; // @synthesize bigDropArray=_bigDropArray;
@property(retain, nonatomic) NSMutableArray *dropArray; // @synthesize dropArray=_dropArray;
- (void).cxx_destruct;
- (void)startStormAnimate;
- (void)dealloc;
- (void)animationDisapper;
- (void)wrapper:(id)arg1;

@end

