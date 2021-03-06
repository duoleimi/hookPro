//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MatchParser, NSString;

@interface HBCoreLabel : UILabel <UIActionSheetDelegate, UIGestureRecognizerDelegate>
{
    MatchParser *_match;
    _Bool touch;
    id <MatchParserDelegate> _data;
    NSString *_linkStr;
    NSString *_linkType;
    _Bool _copyEnableAlready;
    _Bool _attributed;
    _Bool linesLimit;
    id <HBCoreLabelDelegate> _delegate;
}

@property(retain, nonatomic) id <HBCoreLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool linesLimit; // @synthesize linesLimit;
@property(retain, nonatomic) MatchParser *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tapEnd;
- (void)tapBegin:(struct CGPoint)arg1;
- (void)longPressAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)registerCopyAction;
- (void)setText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

