//
//  PSNativeAd.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Native ad object
 */
@interface PSNativeAd : NSObject

/**
 ad description
 */
@property(nonatomic,copy)NSString *desc;

/**
 ad title
 */
@property(nonatomic,copy)NSString *title;

/**
 The image url of the icon
 */
@property(nonatomic,copy)NSString *iconUrl;

/**
 The title of the download button
 */
@property(nonatomic,copy)NSString *calltoaction;

/**
 The image url of the cover
 */
@property(nonatomic,copy)NSString *coverimageUrl;
@end
