//
//  PSBaseView.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Ad base view
 */
@interface PSBaseView : UIView

/**
 publisher id
 */
@property(nonatomic,copy,nonnull)IBInspectable NSString *publisherId;

/**
 slot id
 */
@property(nonatomic,copy,nonnull)IBInspectable NSString *slotId;

/**
 init

 @param publisherId publisher id
 @param slotId slot id
 @return instance
 */
-(nullable instancetype)initWithPublisherId:(nonnull NSString*)publisherId slotId:(nonnull NSString*)slotId;

/**
 Starts the ad load request
 */
-(void)loadAd;

@end
