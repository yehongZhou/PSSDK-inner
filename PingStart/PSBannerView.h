//
//  PSBannerView.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/23.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSBannerDelegate.h"

/**
 Banner ad view
 */
@interface PSBannerView : PSBaseView

@property(nonatomic,weak)id<PSBannerDelegate> delegate;
@end
