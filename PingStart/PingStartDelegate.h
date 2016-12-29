//
//  PingStartDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/15.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class PSBaseView;
@class PSReward;
@class PSError;

/**
 PingStart base delegate
 */
@protocol PingStartDelegate <NSObject>

@optional

/**
 Start loading ad data

 @param view baseAdView
 */
-(void)psAdViewWillLoad:(PSBaseView*)view;

/**
 There was an error loading ad data

 @param view baseAdView
 @param error reason
 */
-(void)psAdView:(PSBaseView*)view didFailToReceiveAdWithError:(PSError*)error;

@end

