//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMRelationServiceDelegate-Protocol.h"

@class NSString, UILabel, UISwitch, UIView;
@protocol TBIMRelationServiceAdapter;

@interface TBIMPrivacySettingViewController : TBViewController <TBIMRelationServiceDelegate>
{
    UILabel *_phoneTip;	// 16 = 0x10
    UISwitch *_phoneSwitch;	// 24 = 0x18
    UILabel *_phoneContent;	// 32 = 0x20
    UILabel *_nickTip;	// 40 = 0x28
    UISwitch *_nickSwitch;	// 48 = 0x30
    UILabel *_nickContent;	// 56 = 0x38
    UILabel *_blackTip;	// 64 = 0x40
    UILabel *_blackArrow;	// 72 = 0x48
    UIView *_maskFirst;	// 80 = 0x50
    UIView *_maskSecond;	// 88 = 0x58
    UIView *_maskThird;	// 96 = 0x60
    id <TBIMRelationServiceAdapter> _tbService;	// 104 = 0x68
}

@property(retain, nonatomic) id <TBIMRelationServiceAdapter> tbService; // @synthesize tbService=_tbService;
@property(retain, nonatomic) UIView *maskThird; // @synthesize maskThird=_maskThird;
@property(retain, nonatomic) UIView *maskSecond; // @synthesize maskSecond=_maskSecond;
@property(retain, nonatomic) UIView *maskFirst; // @synthesize maskFirst=_maskFirst;
@property(retain, nonatomic) UILabel *blackArrow; // @synthesize blackArrow=_blackArrow;
@property(retain, nonatomic) UILabel *blackTip; // @synthesize blackTip=_blackTip;
@property(retain, nonatomic) UILabel *nickContent; // @synthesize nickContent=_nickContent;
@property(retain, nonatomic) UISwitch *nickSwitch; // @synthesize nickSwitch=_nickSwitch;
@property(retain, nonatomic) UILabel *nickTip; // @synthesize nickTip=_nickTip;
@property(retain, nonatomic) UILabel *phoneContent; // @synthesize phoneContent=_phoneContent;
@property(retain, nonatomic) UISwitch *phoneSwitch; // @synthesize phoneSwitch=_phoneSwitch;
@property(retain, nonatomic) UILabel *phoneTip; // @synthesize phoneTip=_phoneTip;
- (void).cxx_destruct;
- (void)tapBlackOption:(id)arg1;
- (void)switchConfigChange:(int)arg1 value:(_Bool)arg2;
- (void)setupNavigationBar;
- (void)nickAction:(id)arg1;
- (void)phoneAction:(id)arg1;
- (void)setupViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

