//
//  STCSignInViewController.h
//  NSUserDefaults, Segues and Protocols Challenge Solution
//
//  Created by Stefan Claussen on 09/05/2014.
//  Copyright (c) 2014 One foot after the other. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STCSignInViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *userNameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;

- (IBAction)createAccountBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)loginButtonPressed:(UIButton *)sender;



@end
