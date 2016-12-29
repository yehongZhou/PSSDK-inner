//
//  PingStart.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/14.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PSVideoView.h"
#import "PSBannerView.h"
#import "PSNativeView.h"
#import "PSMultiNativeView.h"
#import "PSInterstitialView.h"

#import "PSError.h"
#import "PSErrorCode.h"
#import "PSReward.h"
#import "PSNativeAd.h"

#import "PSVideoDelegate.h"
#import "PSBannerDelegate.h"
#import "PSNativeDelegate.h"
#import "PSMultiNativeDelegate.h"
#import "PSInterstitialDelegate.h"


/**
 PingStart
 */
@interface PingStart : NSObject

/**
 Singleton

 @return PingStart
 */
+(instancetype)sharedInstance;

/**
 debug mode

 @param debug enable
 */
+(void)enableDebug:(BOOL)debug;

/**
 Ping Start SDK version

 @return version
 */
+(NSString*)version;
@end
