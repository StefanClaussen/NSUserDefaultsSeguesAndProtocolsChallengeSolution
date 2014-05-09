//
//  STCCreateAccountViewController.h
//  NSUserDefaults, Segues and Protocols Challenge Solution
//
//  Created by Stefan Claussen on 09/05/2014.
//  Copyright (c) 2014 One foot after the other. All rights reserved.
//

#import <UIKit/UIKit.h>

#define USER_NAME @"username"
#define USER_PASSWORD @"password"

@protocol STCCreateAccountViewControllerDelegate <NSObject>

- (void)didCancel;
- (void)didCreateAccount;

@end

@interface STCCreateAccountViewController : UIViewController

@property (weak, nonatomic) id <STCCreateAccountViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *usernameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;
@property (strong, nonatomic) IBOutlet UITextField *confirmPasswordTextField;

- (IBAction)createAccountButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;

@end
