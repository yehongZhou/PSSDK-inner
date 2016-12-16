//
//  PingStart.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/14.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PSVideoView.h"

@interface PingStart : NSObject

+(instancetype)sharedInstance;

+(void)configWithID:(NSString*)appid secret:(NSString*)secret;

+(void)enableDebug:(BOOL)debug;

+(NSString*)version;
@end
