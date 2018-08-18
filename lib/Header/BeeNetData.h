//
//  BeeNetData.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/8/18.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BeeNetCode) { //网络错误码
    BeeNetCodeNone = -3,
    BeeNetCodeCannel = -2,
    BeeNetCodeError = -1,
    BeeNetCodeSuccess = 0,
};

@interface BeeNetData : NSObject

@property(nonatomic, strong) NSObject* netData;
@property(nonatomic) BeeNetCode netCode;
@property(nonatomic, strong) NSString* netMsg;

- (BOOL)success;

@end
