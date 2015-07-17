/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKAccountRemoteUIController : GKRemoteUIController {
    BOOL _authenticatePlayerOnCompletion;
    NSArray *_availableExternalServices;
    int _mode;
}

@property (nonatomic) BOOL authenticatePlayerOnCompletion;
@property (nonatomic, retain) NSArray *availableExternalServices;
@property (nonatomic) int mode;

+ (void)accountRemoteUIControllerForMode:(int)arg1 completionHandler:(id /* block */)arg2;

- (BOOL)authenticatePlayerOnCompletion;
- (id)availableExternalServices;
- (id)bagKey;
- (void)dealloc;
- (id)fallbackURL;
- (void)fetchAvailableExternalServicesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchFacebookAuthTokenWithHandler:(id /* block */)arg1;
- (void)fetchICloudAuthTokenWithHandler:(id /* block */)arg1;
- (void)fireCompletionHandler;
- (id)initWithMode:(int)arg1;
- (int)mode;
- (id)postBodyForInitialLoad;
- (void)setAuthenticatePlayerOnCompletion:(BOOL)arg1;
- (void)setAvailableExternalServices:(id)arg1;
- (void)setMode:(int)arg1;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(id /* block */)arg2;

@end