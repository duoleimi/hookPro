//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WeAppDataValueObserverProtocal-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, UIViewController, WeAppActionManager, WeAppCache, WeAppComponent, WeAppConfigContext, WeAppDataAgent, WeAppDataManager, WeAppEnviroment, WeAppExtDataSourceAdapter, WeAppImageLoad, WeAppNetwork, WeAppPageItem, WeAppScrollViewAdapter, WeAppStepCenter, WeAppUserTrack, WeAppViewManager, WeAppViewModuleManager;

@interface WeAppEngine : NSObject <WeAppDataValueObserverProtocal>
{
    _Bool _showDebugTool;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    WeAppComponent *_rootComponent;	// 24 = 0x18
    WeAppStepCenter *_stepCenter;	// 32 = 0x20
    WeAppEnviroment *_enviroment;	// 40 = 0x28
    WeAppConfigContext *_configContext;	// 48 = 0x30
    NSDictionary *_businessParam;	// 56 = 0x38
    NSDictionary *_errorInfo;	// 64 = 0x40
    WeAppNetwork *_network;	// 72 = 0x48
    WeAppCache *_cache;	// 80 = 0x50
    WeAppImageLoad *_imageLoad;	// 88 = 0x58
    WeAppScrollViewAdapter *_scrolViewAdapter;	// 96 = 0x60
    WeAppExtDataSourceAdapter *_extDataSource;	// 104 = 0x68
    WeAppUserTrack *_userTrack;	// 112 = 0x70
    NSString *_apiName;	// 120 = 0x78
    NSDictionary *_dict;	// 128 = 0x80
    NSDictionary *_data;	// 136 = 0x88
    WeAppPageItem *_pageItem;	// 144 = 0x90
    WeAppViewManager *_viewManager;	// 152 = 0x98
    WeAppViewManager *_errorViewManager;	// 160 = 0xa0
    WeAppDataManager *_dataManager;	// 168 = 0xa8
    WeAppActionManager *_actionManager;	// 176 = 0xb0
    WeAppDataAgent *_dataAgent;	// 184 = 0xb8
    WeAppViewModuleManager *_moduleManager;	// 192 = 0xc0
    double _parseTime;	// 200 = 0xc8
    NSMutableDictionary *_engineObserver;	// 208 = 0xd0
    NSMutableDictionary *_engineSelector;	// 216 = 0xd8
    struct CGRect _frame;	// 224 = 0xe0
}

+ (id)getModuleVerify;
+ (id)getScrolViewAdapter;
+ (id)getImageLoad;
@property(retain, nonatomic) NSMutableDictionary *engineSelector; // @synthesize engineSelector=_engineSelector;
@property(retain, nonatomic) NSMutableDictionary *engineObserver; // @synthesize engineObserver=_engineObserver;
@property(nonatomic) double parseTime; // @synthesize parseTime=_parseTime;
@property(retain, nonatomic) WeAppViewModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
@property(retain, nonatomic) WeAppDataAgent *dataAgent; // @synthesize dataAgent=_dataAgent;
@property(retain, nonatomic) WeAppActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) WeAppDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) WeAppViewManager *errorViewManager; // @synthesize errorViewManager=_errorViewManager;
@property(retain, nonatomic) WeAppViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) WeAppPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) WeAppUserTrack *userTrack; // @synthesize userTrack=_userTrack;
@property(retain, nonatomic) WeAppExtDataSourceAdapter *extDataSource; // @synthesize extDataSource=_extDataSource;
@property(retain, nonatomic) WeAppScrollViewAdapter *scrolViewAdapter; // @synthesize scrolViewAdapter=_scrolViewAdapter;
@property(retain, nonatomic) WeAppImageLoad *imageLoad; // @synthesize imageLoad=_imageLoad;
@property(retain, nonatomic) WeAppCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) WeAppNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) _Bool showDebugTool; // @synthesize showDebugTool=_showDebugTool;
@property(nonatomic) __weak NSDictionary *businessParam; // @synthesize businessParam=_businessParam;
@property(retain, nonatomic) WeAppConfigContext *configContext; // @synthesize configContext=_configContext;
@property(retain, nonatomic) WeAppEnviroment *enviroment; // @synthesize enviroment=_enviroment;
@property(retain, nonatomic) WeAppStepCenter *stepCenter; // @synthesize stepCenter=_stepCenter;
@property(nonatomic) __weak WeAppComponent *rootComponent; // @synthesize rootComponent=_rootComponent;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)doCallBack:(id)arg1 withName:(id)arg2 withObject:(id)arg3;
- (void)doCallBack:(id)arg1 withName:(id)arg2;
- (void)refreshRootComponent;
- (void)observeValueForApiRequestPath:(id)arg1 WithDataManager:(id)arg2 changeData:(id)arg3 context:(id)arg4;
- (void)apiRequestDidLoadEmpty:(id)arg1;
- (void)apiRequestDidStart;
- (void)apiRequestDidLoad;
- (void)apiRequestDidFail;
- (void)apiRequestDidCancel;
- (void)parseDidFinished:(double)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
- (void)scrollRectToOffsetWithAnimated:(_Bool)arg1;
- (void)releaseConstrutView;
- (void)refreshDataWithDictionaryValue:(id)arg1;
- (void)refreshData;
- (void)refresh;
- (void)setSize;
- (void)updateFrame:(struct CGRect)arg1;
- (void)updateAdapterSize;
- (void)updateModule;
- (void)setNeedLazyLoad:(_Bool)arg1;
- (id)getWeAppComponentWithId:(id)arg1;
- (id)getPageItem;
- (id)getDataPool;
- (id)getObjectFromString:(id)arg1;
- (void)setDictionaryValue:(id)arg1 forKey:(id)arg2;
- (id)getErrorView;
- (struct CGRect)getWeAppViewRectWithProtocolString:(id)arg1 withData:(id)arg2 byFrame:(struct CGRect)arg3;
- (struct CGRect)getWeAppViewRectWithProtocol:(id)arg1 withData:(id)arg2 byFrame:(struct CGRect)arg3;
- (void)renderWithModuleType:(id)arg1 withData:(id)arg2 byFrame:(struct CGRect)arg3 onResult:(CDUnknownBlockType)arg4;
- (void)renderWithPage:(id)arg1 withParam:(id)arg2 withData:(id)arg3 byFrame:(struct CGRect)arg4 onResult:(CDUnknownBlockType)arg5;
- (void)renderWithPage:(id)arg1 withParam:(id)arg2 withData:(id)arg3 byFrame:(struct CGRect)arg4 requestFinished:(CDUnknownBlockType)arg5 onResult:(CDUnknownBlockType)arg6;
- (void)renderWithApiName:(id)arg1 Page:(id)arg2 withParam:(id)arg3 withData:(id)arg4 byFrame:(struct CGRect)arg5 requestFinished:(CDUnknownBlockType)arg6 onResult:(CDUnknownBlockType)arg7;
- (id)renderWithProtocol:(id)arg1 withData:(id)arg2 byFrame:(struct CGRect)arg3;
- (id)renderWithProtocolString:(id)arg1 withData:(id)arg2 byFrame:(struct CGRect)arg3;
- (void)doPerformanceUserTrack;
- (void)render;
- (id)addComponentToParent:(id)arg1 withItem:(id)arg2;
- (id)reCreateWithComponentItem:(id)arg1 atCompnentNodeId:(id)arg2;
- (id)getView;
- (void)setScrollViewAdapter:(id)arg1;
- (void)setUserTrackAdapter:(id)arg1;
- (void)setImageLoadAdapter:(id)arg1;
- (void)setCacheAdapter:(id)arg1;
- (void)setExtDataSourceAdapter:(id)arg1;
- (void)setNetworkAdapter:(id)arg1;
- (void)setDataToDataPool:(id)arg1 forKey:(id)arg2;
- (void)setAdapterBaseSize:(_Bool)arg1;
- (void)setup;
- (void)dealloc;
- (id)init;
- (id)initWithBizType:(id)arg1 withPageName:(id)arg2 withModuleName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

