//
//  PSVideoDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//
@class PSVideoView;
@class PSError;

@protocol PSVideoDelegate <NSObject>

@optional

-(void)psAdViewWillLoad:(PSVideoView*)view;

-(void)psAdViewDidReceiveAd:(PSVideoView*)view;

-(void)psAdView:(PSVideoView*)view didFailToReceiveAdWithError:(PSError*)error;

//-(void)psAdViewWillPresentScreen:(PSBaseView*)view;
//
//-(void)psAdViewWillDismissScreen:(PSBaseView*)view;
//
//-(void)psAdViewDidDismissScreen:(PSBaseView *)view;
@end
