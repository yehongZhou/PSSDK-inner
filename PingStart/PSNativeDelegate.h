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
 Native ad delegate
 */
@protocol PSNativeDelegate <PingStartDelegate>

@optional

/**
 Native is loaded,You can now customize the view to display ad data.
 
 @param view PSNativeView
 @param nativeAd PSNativeAd
 */
-(void)psAdViewNative:(PSNativeView*)view didLoadWithNativeAd:(PSNativeAd*)nativeAd;

@end
