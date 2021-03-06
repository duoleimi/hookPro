//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAAppTaskDelegate-Protocol.h"

@class MMTimer, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WAAppTaskMgr : MMService <WAAppTaskDelegate, MMService>
{
    NSString *_foregoundAppID;
    NSMutableDictionary *_dicAppID2Task;
    MMTimer *_timerCheckBackgroundTask;
    unsigned int lastMemoryWaringTimeStamp;
    NSString *_curBackToChatAppID;
}

- (void).cxx_destruct;
- (void)restartAppWithAppID:(id)arg1 extInfo:(id)arg2;
- (void)removeCurBackToChatState;
- (_Bool)isAppTaskBackingToChat:(id)arg1;
- (id)getCurrentBackToChatAppTask;
- (void)updateCurrentBackToChatState;
- (void)markBackToChatWithAppID:(id)arg1;
- (unsigned int)maxTaskRunningCount;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)invadateCheckBackgroundTaskTimer;
- (void)startCheckBackgroundTaskTimer;
- (void)taskDidClose:(id)arg1;
- (void)taskDidOpen:(id)arg1;
- (void)taskLeaveForeground:(id)arg1;
- (void)taskEnterForeground:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (void)closeTimeoutBackgoundTask;
- (void)closeBackgroundTask:(_Bool)arg1;
- (void)closeAllTaskUseTips:(_Bool)arg1;
- (void)closeTask:(id)arg1;
- (void)deleteTask:(id)arg1;
- (id)allTaskArray;
- (_Bool)isNeedCloseAppTaskToOpenPagePath:(id)arg1 appID:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isNeedNewTask:(id)arg1 pagePath:(id)arg2 appType:(unsigned int)arg3;
- (id)getTaskWithAppID:(id)arg1;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 debugModeType:(unsigned int)arg3;
- (void)checkForegroundApp;
- (_Bool)hasForegroundApp;
- (id)getForegroundAppID;
- (id)foregroundAppID;
- (void)setForegroundAppID:(id)arg1;
- (unsigned long long)getAppTaskCount;
- (_Bool)getWeAppTaskInfo:(id)arg1;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (void)closeTaskWithAppID:(id)arg1;
- (_Bool)isReachMaxWebViewDepthWithAppID:(id)arg1;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4 showConfig:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 relativeURL:(id)arg2 extraInfo:(id)arg3 navigationController:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)onServiceEnterBackground;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

