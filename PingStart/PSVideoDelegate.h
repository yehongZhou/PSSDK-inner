//
//  PSVideoDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//
@class PSVideoView;

#import "PingStartDelegate.h"

@protocol PSVideoDelegate <PingStartDelegate>

@optional

/**
 video ad will start playing.

 @param view videoView
 */
-(void)psAdViewVideoWillStartPlaying:(PSVideoView*)view;

/**
 video ad will close

 @param view videoView
 */
-(void)psAdViewVideoWillClosePlaying:(PSVideoView*)view;

/**
 Called when the full screen
 
 @param view PSVideoView
 */
-(void)psAdViewWillPresentScreen:(PSVideoView*)view;

/**
 Called when the dismiss
 
 @param view PSVideoView
 */
-(void)psAdViewWillDismissScreen:(PSVideoView*)view;

/**
 Get rewarded
 
 @param view baseAdView
 @param reward reward
 */
-(void)psAdView:(PSBaseView*)view didReward:(PSReward*)reward;
@end
