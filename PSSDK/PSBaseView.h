//
//  PSBaseView.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PSBaseView : UIView

@property(nonatomic,weak,readonly,nullable)UIViewController *rootViewController;

@property(nonatomic,copy,nonnull)IBInspectable NSString *publisherId;
//位置id
@property(nonatomic,copy,nonnull)IBInspectable NSString *slotId;


-(nullable instancetype)initWithPublisherId:(nonnull NSString*)publisherId slotId:(nonnull NSString*)slotId;

//加载广告
-(void)loadAd;

//全屏显示广告
-(void)presentFullScreen:(nonnull UIViewController*)rootViewController;
@end
