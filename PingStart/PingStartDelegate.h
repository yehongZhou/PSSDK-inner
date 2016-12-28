//
//  PingStartDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/15.
//  Copyright © 2016年 nbt. All rights reserved.
//

@class PSBaseView;
@class PSReward;
@class PSError;

@protocol PingStartDelegate <NSObject>

@optional

/**
 Start loading ad data

 @param view baseAdView
 */
-(void)psAdViewWillLoad:(PSBaseView*)view;

/**
 Ad data is loaded

 @param view baseAdView
 */
-(void)psAdViewDidReceiveAd:(PSBaseView*)view;

/**
 Ad data loading failed

 @param view baseAdView
 @param error reason
 */
-(void)psAdView:(PSBaseView*)view didFailToReceiveAdWithError:(PSError*)error;

@end

