//
//  signUp.h
//  Cuisine
//
//  Created by Yeehan Chan on 10/25/15.
//  Copyright © 2015 Yeehan Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface signUp : UIViewController <NSURLConnectionDelegate,UITextFieldDelegate>
{
    NSMutableData * responseData;
    NSURLProtectionSpace *loginProtectionSpace;
    NSURL *url;
    NSURLCredential *credential;
}
@end
