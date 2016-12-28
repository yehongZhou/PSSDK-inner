//
//  PSNativeDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PingStartDelegate.h"
@class PSNativeView;
@class PSNativeAd;

/**
 The delegate of the banner ad
 */
@protocol PSNativeDelegate <PingStartDelegate>

@optional

/**
 Native is loaded
 
 @param view PSNativeView
 @param nativeAd PSNativeAd
 */
-(void)psAdViewNative:(PSNativeView*)view didLoadWithNativeAd:(PSNativeAd*)nativeAd;

@end
