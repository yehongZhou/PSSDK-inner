//
//  PSBaseView.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PSBaseView : UIView

@property(nonatomic,weak)UIViewController *rootViewController;

-(void)loadAd;

-(void)presentFullScreen:(UIViewController*)parentViewController;
@end
