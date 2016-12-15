//
//  PSErrorCode.h
//  PingStart-iOS
//
//  Created by nbt on 2016/12/14.
//  Copyright © 2016年 nbt. All rights reserved.
//

#ifndef PSErrorCode_h
#define PSErrorCode_h

typedef NS_ENUM(NSInteger,PSErrorCode) {
    PSErrorGeneral = 1,                      /*一般错误*/
    PSErrorNetworkUnavailable,               /*网络不可用*/
    PSErrorAdUnavailable,                    /*广告不可用*/
    PSErrorUnZip,                            /*文件解压错误*/
    PSErrorFrequencyLimit                    /*超过每日播放频率限制*/
};

#endif /* PSErrorCode_h */
