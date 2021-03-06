//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASImageNode.h"

@class NSArray, NSOperation, PHImageManager;

@interface ASMultiplexImageNode : ASImageNode
{
    id <ASImageCacheProtocol><ASImageCacheProtocolDeprecated> _cache;
    id <ASImageDownloaderProtocol><ASImageDownloaderProtocolDeprecated> _downloader;
    id <ASMultiplexImageNodeDelegate> _delegate;
    struct {
        unsigned int downloadStart:1;
        unsigned int downloadProgress:1;
        unsigned int downloadFinish:1;
        unsigned int updatedImageDisplayFinish:1;
        unsigned int updatedImage:1;
        unsigned int displayFinish:1;
    } _delegateFlags;
    id <ASMultiplexImageNodeDataSource> _dataSource;
    struct {
        unsigned int image:1;
        unsigned int URL:1;
        unsigned int asset:1;
    } _dataSourceFlags;
    _Bool _downloadsIntermediateImages;
    struct Mutex _imageIdentifiersLock;
    NSArray *_imageIdentifiers;
    id _loadedImageIdentifier;
    id _loadingImageIdentifier;
    id _displayedImageIdentifier;
    NSOperation *_phImageRequestOperation;
    struct RecursiveMutex _downloadIdentifierLock;
    id _downloadIdentifier;
    struct RecursiveMutex _propertyLock;
    _Bool _shouldRenderProgressImages;
    _Bool _downloaderSupportsNewProtocol;
    _Bool _downloaderImplementsSetProgress;
    _Bool _downloaderImplementsSetPriority;
    _Bool _cacheSupportsNewProtocol;
    _Bool _cacheSupportsClearing;
    PHImageManager *_imageManager;
}

@property(copy, nonatomic) id loadingImageIdentifier; // @synthesize loadingImageIdentifier=_loadingImageIdentifier;
@property(retain, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(readonly, nonatomic) id <NSCopying><NSObject> displayedImageIdentifier; // @synthesize displayedImageIdentifier=_displayedImageIdentifier;
@property(copy, nonatomic) id loadedImageIdentifier; // @synthesize loadedImageIdentifier=_loadedImageIdentifier;
@property(nonatomic) _Bool downloadsIntermediateImages; // @synthesize downloadsIntermediateImages=_downloadsIntermediateImages;
@property(nonatomic) __weak id <ASMultiplexImageNodeDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ASMultiplexImageNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finishedLoadingImage:(id)arg1 forIdentifier:(id)arg2 error:(id)arg3;
- (void)_downloadImageWithIdentifier:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchImageWithIdentifierFromCache:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadPHAssetWithRequest:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadALAssetWithIdentifier:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadNextImage;
- (id)_nextImageIdentifierToDownload;
- (void)_clearImage;
- (void)_updateProgressImageBlockOnDownloaderIfNeeded;
- (id)_bestImmediatelyAvailableImageFromDataSource:(id *)arg1;
- (void)_loadImageIdentifiers;
- (void)_setDownloadIdentifier:(id)arg1;
- (void)_setDisplayedImageIdentifier:(id)arg1 withImage:(id)arg2;
- (void)reloadImageIdentifierSources;
@property(copy, nonatomic) NSArray *imageIdentifiers;
@property(nonatomic) _Bool shouldRenderProgressImages;
- (void)visibilityDidChange:(_Bool)arg1;
- (void)displayWillStart;
- (_Bool)placeholderShouldPersist;
- (void)displayDidFinish;
- (void)fetchData;
- (void)clearFetchedData;
- (void)clearContents;
- (void)dealloc;
- (id)init;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;

@end

