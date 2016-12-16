//
//  PSVideoDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//
@class PSVideoView;
@class PSError;

#import "PSRewardEntity.h"
#import "PingStartDelegate.h"

@protocol PSVideoDelegate <PingStartDelegate>

@optional

-(void)psAdViewWillLoad:(PSVideoView*)view;

-(void)psAdViewDidReceiveAd:(PSVideoView*)view;

-(void)psAdView:(PSVideoView*)view didFailToReceiveAdWithError:(PSError*)error;

-(void)psAdView:(PSVideoView*)view didReward:(PSRewardEntity*)reward;

@end
