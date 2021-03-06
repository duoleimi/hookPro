//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchComboViewComponentBase.h"

@class TBXSearchTipsComponentNative, TBXSearchTipsComponentNx, TBXSearchTipsViewModel;

@interface TBXSearchTipsComponent : TBXSearchComboViewComponentBase
{
    TBXSearchTipsViewModel *_viewModel;	// 8 = 0x8
    TBXSearchComboViewComponentBase *_component;	// 16 = 0x10
    TBXSearchTipsComponentNative *_nativeComponent;	// 24 = 0x18
    TBXSearchTipsComponentNx *_nxComponent;	// 32 = 0x20
}

@property(retain, nonatomic) TBXSearchTipsComponentNx *nxComponent; // @synthesize nxComponent=_nxComponent;
@property(retain, nonatomic) TBXSearchTipsComponentNative *nativeComponent; // @synthesize nativeComponent=_nativeComponent;
@property(retain, nonatomic) TBXSearchComboViewComponentBase *component; // @synthesize component=_component;
@property(retain, nonatomic) TBXSearchTipsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)getContainerHeight;
- (void)dataLoaded;
- (void)setTheViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

