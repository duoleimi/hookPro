//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBView.h"

@class NSMutableDictionary, NSMutableParagraphStyle, NSString, UILabel, UITapGestureRecognizer;

@interface FBLabel : FBView
{
    UILabel *_label;	// 8 = 0x8
    NSString *_fontWeight;	// 16 = 0x10
    NSString *_fontFamily;	// 24 = 0x18
    NSString *_fontSize;	// 32 = 0x20
    NSString *_text_overflow;	// 40 = 0x28
    NSString *_overflow;	// 48 = 0x30
    NSString *_whiteSpace;	// 56 = 0x38
    NSString *_webkit_line_clamp;	// 64 = 0x40
    NSString *_webkit_box_orient;	// 72 = 0x48
    NSString *_display;	// 80 = 0x50
    NSString *_text;	// 88 = 0x58
    NSMutableDictionary *_fontAttr;	// 96 = 0x60
    NSMutableParagraphStyle *_paragraphStyle;	// 104 = 0x68
    UITapGestureRecognizer *_recognizer;	// 112 = 0x70
}

+ (id)parserHtml:(id)arg1 withAttr:(id)arg2;
- (void).cxx_destruct;
- (void)onClicked:(id)arg1;
- (void)updateEvent:(id)arg1 withValue:(id)arg2;
- (void)onLayout;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)updateCSS:(id)arg1 withValue:(id)arg2;
- (void)updateStandardTextAttr;
- (void)updateFontAttr;
- (void)updateTextAlignAttr:(id)arg1 withParagraphStyle:(id)arg2;
- (void)updateWebKitTextAttr;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

@end

