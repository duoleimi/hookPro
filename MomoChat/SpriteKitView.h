//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSNumber, NSString, SKSpriteNode, SKView;

@interface SpriteKitView : UIView
{
    double _time;
    _Bool _isRunning;
    _Bool _isHover;
    float _delta;
    NSString *_fileName;
    NSNumber *_type;
    SKView *_skview;
    SKSpriteNode *_sprite;
    long long _repeatCount;
    NSMutableArray *_textures;
}

@property(nonatomic) _Bool isHover; // @synthesize isHover=_isHover;
@property(retain, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) float delta; // @synthesize delta=_delta;
@property(retain, nonatomic) SKSpriteNode *sprite; // @synthesize sprite=_sprite;
@property(retain, nonatomic) SKView *skview; // @synthesize skview=_skview;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)onNotificationSKViewRun;
- (void)onNotificationSKViewPause;
- (void)resetHover:(_Bool)arg1;
- (double)getDuration;
- (void)runFadeCircleColor:(id)arg1 bgFadedColor:(id)arg2 duration:(double)arg3;
- (void)runAnimation:(CDUnknownBlockType)arg1;
- (id)loadTextureAtlas:(id)arg1;
- (id)scene:(struct CGRect)arg1;
- (void)resetSceneSize;
- (void)preloadResource:(id)arg1;
@property(nonatomic, getter=isPaused) _Bool paused;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

