//
//  PSLoadDelegate.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/13.
//  Copyright © 2016年 nbt. All rights reserved.
//
@class PSBaseView;

@protocol PSLoadDelegate <NSObject>

-(void)psLoadSuccess:(PSBaseView*)view;

-(void)psLoadFail:(PSBaseView*)view error:(NSError*)error;

@end
