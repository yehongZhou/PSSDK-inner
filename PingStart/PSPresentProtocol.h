//
//  PSPresentProtocol.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//
#import <UIKit/UIKit.h>

/**
 Ad View A protocol that can be modally displayed
 */
@protocol PSPresentProtocol <NSObject>

@required

/**
 Modal present view
 
 @param rootViewController The controller for which you want to present this view.eg:[UIApplication sharedApplication].keyWindow.rootViewController
 */
-(void)presentToViewController:(UIViewController*)rootViewController;
@end
