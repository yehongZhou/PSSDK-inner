//
//  PSBannerDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/21.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PingStartDelegate.h"
@class PSBannerView;

/**
 The delegate of the banner ad
 */
@protocol PSBannerDelegate <PingStartDelegate>

@optional

/**
 Banner is loaded, the height of the banner

 @param view PSBannerView
 @param height banner height
 */
-(void)psAdViewBanner:(PSBannerView*)view didLoadWithHeight:(CGFloat)height;

@end
