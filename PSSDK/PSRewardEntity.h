//
//  PSRewardEntity.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/15.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PSRewardEntity : NSObject

@property(nonatomic,assign) BOOL success;
@property(nonatomic,assign) NSInteger amount;
@property(nonatomic,copy) NSString *currencyName;
@end
