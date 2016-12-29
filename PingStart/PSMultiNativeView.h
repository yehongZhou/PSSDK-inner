//
//  PSMultiNativeView.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/28.
//  Copyright © 2016年 nbt. All rights reserved.
//

#import "PSBaseView.h"
#import "PSMultiNativeDelegate.h"

/**
 Multiple native ad View
 */
@interface PSMultiNativeView : PSBaseView

/**
 PSMultiNativeDelegate
 */
@property(nonatomic,weak)id<PSMultiNativeDelegate> delegate;
@end
