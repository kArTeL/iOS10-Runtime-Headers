/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDIndexExtensionLoader : NSObject {
    NSObject<OS_dispatch_queue> * _extensionLoaderQueue;
    id  _extensionMatchingContext;
}

@property (retain) NSObject<OS_dispatch_queue> *extensionLoaderQueue;
@property (retain) id extensionMatchingContext;

- (void).cxx_destruct;
- (id)_activeIndexExtensionsForExtensions:(id)arg1;
- (id)_loadExtensionsSynchronously;
- (id)_matchingDictionary;
- (id)extensionLoaderQueue;
- (id)extensionMatchingContext;
- (id)init;
- (void)setExtensionLoaderQueue:(id)arg1;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(id /* block */)arg1;
- (void)stopLookingForExtensions;

@end