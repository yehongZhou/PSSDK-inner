//
//  PSReward.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/15.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Ad View the reward object
 */
@interface PSReward : NSObject

/**
 reward state
 */
@property(nonatomic,assign) BOOL success;

/**
 reward amount
 */
@property(nonatomic,assign) float amount;

/**
 currency name
 */
@property(nonatomic,copy) NSString *currencyName;
@end
