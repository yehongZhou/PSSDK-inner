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
    PSErrorGeneral = 1,                      /*General*/
    PSErrorNetworkUnavailable,               /*Network unavailable*/
    PSErrorAdUnavailable,                    /*Ad unavailable*/
    PSErrorSlotIdOrPublisherIdUnavailable,   /*Corresponding ad is not available by slotId and publisherId*/
    PSErrorUnZip,                            /*File decompression error*/
    PSErrorFrequencyLimit                    /*More than the daily playback frequency limit*/
};

#endif /* PSErrorCode_h */
