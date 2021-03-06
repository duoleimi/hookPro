//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDProfileBaseCell1.h"

#import "MDProfileBaseProtocol.h"

@class MDUserProfile, NSString, UIImageView, UILabel;

@interface MDProfileUserAudiobookCell : MDProfileBaseCell1 <MDProfileBaseProtocol>
{
    UIImageView *_filmImageView;
    UILabel *_filmNameLabel;
    UIImageView *_musicImageView;
    UILabel *_musicNameLabel;
    UIImageView *_bookImageView;
    UILabel *_bookNameLabel;
    UIImageView *_arrowImageView;
    MDUserProfile *_upi;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) MDUserProfile *upi; // @synthesize upi=_upi;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *bookNameLabel; // @synthesize bookNameLabel=_bookNameLabel;
@property(retain, nonatomic) UIImageView *bookImageView; // @synthesize bookImageView=_bookImageView;
@property(retain, nonatomic) UILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(retain, nonatomic) UIImageView *musicImageView; // @synthesize musicImageView=_musicImageView;
@property(retain, nonatomic) UILabel *filmNameLabel; // @synthesize filmNameLabel=_filmNameLabel;
@property(retain, nonatomic) UIImageView *filmImageView; // @synthesize filmImageView=_filmImageView;
- (void).cxx_destruct;
- (void)tapBook;
- (void)tapMusic;
- (void)tapFilm;
- (void)bindModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

