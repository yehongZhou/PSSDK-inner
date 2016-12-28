//
//  PSVideoView.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSVideoDelegate.h"

/**
 Video ad view
 */
@interface PSVideoView : PSBaseView

@property(nonatomic,weak)id<PSVideoDelegate> delegate;

/**
 present this view
 
 @param rootViewController view controller
 */
-(void)presentToViewController:(UIViewController*)rootViewController;
@end
