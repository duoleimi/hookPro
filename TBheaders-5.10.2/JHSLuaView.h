//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LView.h"

@class JHSErrorInfoHandler, JHSLuaViewBridge, JHSUnionViewController, LVBlock, NSDate, NSDictionary, NSString, UIImageView, UIView;

@interface JHSLuaView : LView
{
    _Bool _isShowErrorInfo;	// 8 = 0x8
    _Bool _isDownloading;	// 9 = 0x9
    id _boxModel;	// 16 = 0x10
    id _dataModel;	// 24 = 0x18
    NSDictionary *_trackParams;	// 32 = 0x20
    JHSUnionViewController *_unionViewController;	// 40 = 0x28
    JHSLuaViewBridge *_bridge;	// 48 = 0x30
    NSDictionary *_dic;	// 56 = 0x38
    NSString *_package;	// 64 = 0x40
    NSDate *_sourceModifiyDate;	// 72 = 0x48
    CDUnknownBlockType _downloadEndCallback;	// 80 = 0x50
    JHSErrorInfoHandler *_statusHandlerAdapter;	// 88 = 0x58
    LVBlock *_loginBlock;	// 96 = 0x60
    UIView *_luaTitleView;	// 104 = 0x68
    UIImageView *_loadingImage;	// 112 = 0x70
    CDUnknownBlockType _errorCallback;	// 120 = 0x78
    long long _repeatRequestTimes;	// 128 = 0x80
}

@property(nonatomic) long long repeatRequestTimes; // @synthesize repeatRequestTimes=_repeatRequestTimes;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(retain, nonatomic) UIImageView *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(retain, nonatomic) UIView *luaTitleView; // @synthesize luaTitleView=_luaTitleView;
@property(retain, nonatomic) LVBlock *loginBlock; // @synthesize loginBlock=_loginBlock;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) _Bool isShowErrorInfo; // @synthesize isShowErrorInfo=_isShowErrorInfo;
@property(retain, nonatomic) JHSErrorInfoHandler *statusHandlerAdapter; // @synthesize statusHandlerAdapter=_statusHandlerAdapter;
@property(copy, nonatomic) CDUnknownBlockType downloadEndCallback; // @synthesize downloadEndCallback=_downloadEndCallback;
@property(retain, nonatomic) NSDate *sourceModifiyDate; // @synthesize sourceModifiyDate=_sourceModifiyDate;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(copy, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) JHSLuaViewBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic) __weak JHSUnionViewController *unionViewController; // @synthesize unionViewController=_unionViewController;
@property(copy, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(nonatomic) __weak id dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id boxModel; // @synthesize boxModel=_boxModel;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)layoutSubviews;
- (_Bool)haveNewVersion;
- (id)getFileModifiyDate:(id)arg1;
- (id)stringByDecodingURLFormat:(id)arg1;
- (_Bool)tryUpdateScriptFromUrl:(CDUnknownBlockType)arg1;
- (void)downloadPackageSilence:(id)arg1;
- (void)downloadPackage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)runLuaView;
- (void)reloadLuaViewPressedByUser;
- (void)luaviewScriptDownloadEndNotification:(id)arg1;
- (void)setupStatusHandlerAdapter;
- (void)showNetworkErrorPanel;
- (void)showDownloadErrorView;
- (void)hideLoading;
- (void)shouldShowLoading:(_Bool)arg1;
- (void)centerLoadingImage;
- (void)createLoadingImage;
- (void)showLoading;
- (void)loadScriptFromNet;
- (void)callCustomException;
- (_Bool)haveCustomExceptionCallback;
- (void)runLuaViewAndRenewModifiyDate;
- (void)dealloc;
- (void)releaseLuaView;
- (void)removeNotifications;
- (void)registerNotifications;
- (void)runWithPackageInfo:(id)arg1;
- (void)tryRunLuaView;
- (void)registerBase;
- (id)initWithURL:(id)arg1 query:(id)arg2 viewController:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

