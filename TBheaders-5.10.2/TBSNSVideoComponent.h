//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBSNSVideoPlayerDelegate-Protocol.h"
#import "TBShadowInteractiveViewDelegate-Protocol.h"

@class NSString, TBSNSVideoPlayer;

@interface TBSNSVideoComponent : WXComponent <TBShadowInteractiveViewDelegate, TBSNSVideoPlayerDelegate>
{
    _Bool _videoappear;	// 8 = 0x8
    _Bool _videodisappear;	// 9 = 0x9
    _Bool _tabimg;	// 10 = 0xa
    _Bool _isPlayComplete;	// 11 = 0xb
    _Bool _isVideoWindowOpen;	// 12 = 0xc
    NSString *_videopath;	// 16 = 0x10
    NSString *_videoid;	// 24 = 0x18
    NSString *_interactivevideoid;	// 32 = 0x20
    double _videowidth;	// 40 = 0x28
    double _videoheight;	// 48 = 0x30
    NSString *_videoimg;	// 56 = 0x38
    NSString *_accountid;	// 64 = 0x40
    NSString *_shopid;	// 72 = 0x48
    NSString *_feedid;	// 80 = 0x50
    NSString *_feedtype;	// 88 = 0x58
    NSString *_scm;	// 96 = 0x60
    long long _index;	// 104 = 0x68
    long long _playerId;	// 112 = 0x70
    TBSNSVideoPlayer *_player;	// 120 = 0x78
    long long _listId;	// 128 = 0x80
    double _currentTime;	// 136 = 0x88
}

@property(nonatomic) _Bool isVideoWindowOpen; // @synthesize isVideoWindowOpen=_isVideoWindowOpen;
@property(nonatomic) _Bool isPlayComplete; // @synthesize isPlayComplete=_isPlayComplete;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) long long listId; // @synthesize listId=_listId;
@property(nonatomic) __weak TBSNSVideoPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long playerId; // @synthesize playerId=_playerId;
@property(nonatomic) _Bool tabimg; // @synthesize tabimg=_tabimg;
@property(nonatomic) _Bool videodisappear; // @synthesize videodisappear=_videodisappear;
@property(nonatomic) _Bool videoappear; // @synthesize videoappear=_videoappear;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *feedtype; // @synthesize feedtype=_feedtype;
@property(copy, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
@property(copy, nonatomic) NSString *shopid; // @synthesize shopid=_shopid;
@property(copy, nonatomic) NSString *accountid; // @synthesize accountid=_accountid;
@property(copy, nonatomic) NSString *videoimg; // @synthesize videoimg=_videoimg;
@property(nonatomic) double videoheight; // @synthesize videoheight=_videoheight;
@property(nonatomic) double videowidth; // @synthesize videowidth=_videowidth;
@property(copy, nonatomic) NSString *interactivevideoid; // @synthesize interactivevideoid=_interactivevideoid;
@property(copy, nonatomic) NSString *videoid; // @synthesize videoid=_videoid;
@property(copy, nonatomic) NSString *videopath; // @synthesize videopath=_videopath;
- (void).cxx_destruct;
- (void)shadowInteractiveView:(id)arg1 didCloseAtPlayerTime:(double)arg2 isPlaying:(_Bool)arg3 isComplete:(_Bool)arg4 dwInstance:(id)arg5;
- (void)removeFromMgr;
- (void)addToMgr;
- (void)onPlayComplete;
- (void)onClickWithTime:(double)arg1;
- (void)startPlayer:(id)arg1 needInit:(_Bool)arg2;
- (void)removePlayer;
- (void)dealloc;
- (void)viewDidUnload;
- (id)loadView;
- (void)updateAttributes:(id)arg1;
- (void)fillAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

