//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTActivateAccount, MRTCheckBox, MRTPasswordRules, MRTSignInViewController, MRTStyledButton, MRTStyledLabel, MRTStyledTextField, UIScrollView, UIView;

@interface MRTActivateAccountViewController : UIViewController
{
    MRTCheckBox *_touchIDCheckBox;
    MRTStyledLabel *_confirmPasswordLabel;
    MRTStyledLabel *_emailLabel;
    MRTStyledLabel *_passwordLabel;
    MRTStyledLabel *_passwordRulesLabel;
    MRTStyledLabel *_enableTouchIDLabel;
    MRTStyledLabel *_titleLabel;
    MRTStyledTextField *_confirmPasswordTextField;
    MRTStyledTextField *_emailTextField;
    MRTStyledTextField *_passwordTextField;
    MRTStyledButton *_privacyPolicyButton;
    MRTStyledButton *_submitButton;
    MRTStyledButton *_dismissButton;
    UIScrollView *_scrollView;
    MRTPasswordRules *_passwordRules;
    MRTActivateAccount *_activateAccount;
    MRTSignInViewController *_signInVC;
    UIView *_bottomView;
}

@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak MRTSignInViewController *signInVC; // @synthesize signInVC=_signInVC;
@property(retain, nonatomic) MRTActivateAccount *activateAccount; // @synthesize activateAccount=_activateAccount;
@property(retain, nonatomic) MRTPasswordRules *passwordRules; // @synthesize passwordRules=_passwordRules;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak MRTStyledButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak MRTStyledButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) __weak MRTStyledButton *privacyPolicyButton; // @synthesize privacyPolicyButton=_privacyPolicyButton;
@property(nonatomic) __weak MRTStyledTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak MRTStyledTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(nonatomic) __weak MRTStyledTextField *confirmPasswordTextField; // @synthesize confirmPasswordTextField=_confirmPasswordTextField;
@property(nonatomic) __weak MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MRTStyledLabel *enableTouchIDLabel; // @synthesize enableTouchIDLabel=_enableTouchIDLabel;
@property(nonatomic) __weak MRTStyledLabel *passwordRulesLabel; // @synthesize passwordRulesLabel=_passwordRulesLabel;
@property(nonatomic) __weak MRTStyledLabel *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(nonatomic) __weak MRTStyledLabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(nonatomic) __weak MRTStyledLabel *confirmPasswordLabel; // @synthesize confirmPasswordLabel=_confirmPasswordLabel;
@property(nonatomic) __weak MRTCheckBox *touchIDCheckBox; // @synthesize touchIDCheckBox=_touchIDCheckBox;
- (void).cxx_destruct;
- (void)_processMainActionButtonStatusWithFocusedTextField:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textField:(id)arg1 didSetObjectValue:(id)arg2;
- (void)attemptSignInWithUsername:(id)arg1 password:(id)arg2;
- (void)showAlertMessage:(id)arg1;
- (void)updateUIWithError:(id)arg1;
- (void)beginRequestForActivateAccount;
- (void)attemptToChangeTouchIDToEnabled:(_Bool)arg1 withSender:(id)arg2;
- (void)touchIDSettingChanged:(id)arg1;
- (void)privacyPolicyButtonTapped:(id)arg1;
- (void)submitButtonTapped:(id)arg1;
- (void)dismissButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)_updatePasswordRules;
- (void)setupSignInViewController:(id)arg1;
- (void)setupModelWithEmail:(id)arg1 searchOnlineAccount:(id)arg2;
- (void)_setupLocalizations;
- (void)updateTouchID;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

