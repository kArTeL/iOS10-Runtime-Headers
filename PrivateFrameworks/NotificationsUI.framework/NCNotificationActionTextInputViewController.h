/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCNotificationActionTextInputViewController : UIViewController <NCInteractiveNotificationHost, UITextViewDelegate> {
    NSString * _actionIdentifier;
    NSString * _buttonTitle;
    _UITextFieldRoundedRectBackgroundViewNeue * _coverView;
    <NCInteractiveNotificationHostDelegate> * _delegate;
    double  _maximumHeight;
    bool  _modal;
    UIButton * _sendButton;
    UITextView * _textEntryView;
    <NCNotificationActionTextInputDelegate> * _textInputDelegate;
}

@property (nonatomic, readonly) NCViewServiceDescriptor *accessoryViewService;
@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, readonly) double bottomOverhangHeight;
@property (nonatomic, retain) NSString *buttonTitle;
@property (nonatomic, retain) _UITextFieldRoundedRectBackgroundViewNeue *coverView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCInteractiveNotificationHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCViewServiceDescriptor *inlayViewService;
@property (nonatomic) double maximumHeight;
@property (getter=isModal, nonatomic) bool modal;
@property (nonatomic, retain) UIButton *sendButton;
@property (nonatomic, readonly) bool showsKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textEntryView;
@property (nonatomic) <NCNotificationActionTextInputDelegate> *textInputDelegate;

- (void).cxx_destruct;
- (void)_sendButtonTouchUpInside:(id)arg1;
- (void)_updateForTextChanged;
- (id)accessoryViewService;
- (id)actionIdentifier;
- (double)bottomOverhangHeight;
- (id)buttonTitle;
- (id)coverView;
- (id)delegate;
- (void)didChangeRevealPercent:(double)arg1;
- (void)getActionContextWithCompletion:(id /* block */)arg1;
- (void)handleActionAtIndex:(long long)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (id)inlayViewService;
- (void)interactiveNotificationDidAppear;
- (bool)isModal;
- (double)maximumHeight;
- (double)preferredContentHeight;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)sendButton;
- (void)setActionIdentifier:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setModal:(bool)arg1;
- (void)setSendButton:(id)arg1;
- (void)setTextEntryView:(id)arg1;
- (void)setTextInputDelegate:(id)arg1;
- (bool)showsKeyboard;
- (id)textEntryView;
- (id)textInputDelegate;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
