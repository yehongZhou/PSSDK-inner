//
//  PingStartDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/15.
//  Copyright © 2016年 nbt. All rights reserved.
//

@class PSBaseView;

@protocol PingStartDelegate <NSObject>

@optional
/**
 Called when the full screen（by presentFullScreen:）
 
 @param view PSVideoView
 */
-(void)psAdViewWillPresentScreen:(PSBaseView*)view;

/**
 Called when the dismiss（by presentFullScreen:）
 
 @param view PSVideoView
 */
-(void)psAdViewWillDismissScreen:(PSBaseView*)view;


@end

