//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JIMIBaseCell.h"

@class JIMIAskModel, JIMIBubbleImageView, JIMIRichTextView;

@interface JIMIAskCell : JIMIBaseCell
{
    JIMIAskModel *_askModel;
    JIMIBubbleImageView *_bubbleImageView;
    JIMIRichTextView *_bubbleText;
}

+ (float)getCellHeight:(id)arg1;
@property(retain, nonatomic) JIMIRichTextView *bubbleText; // @synthesize bubbleText=_bubbleText;
@property(retain, nonatomic) JIMIBubbleImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) JIMIAskModel *askModel; // @synthesize askModel=_askModel;
- (void).cxx_destruct;
- (void)initUI;
- (void)setModelInfo:(id)arg1 parentVC:(id)arg2;

@end
