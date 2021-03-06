//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HomePageChannelDisplayItem.h"
#import "HomePageChannelInteractiveItem.h"

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface HomePageChannelFloorFooterView : UIView <HomePageChannelDisplayItem, HomePageChannelInteractiveItem>
{
    UILabel *_titleLabel;
    UIImageView *_disclosureIndicator;
    UITapGestureRecognizer *_tapGestureRecongizer;
}

+ (struct CGSize)calculateSizeWithData:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecongizer; // @synthesize tapGestureRecongizer=_tapGestureRecongizer;
@property(retain, nonatomic) UIImageView *disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)handleActionBlock:(CDUnknownBlockType)arg1 withData:(id)arg2;
- (void)populateWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

