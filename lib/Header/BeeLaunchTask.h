//
//  BeeLaunchTask.h
//  BeeCommonSDK
//
//  Created by linshucan on 2019/5/21.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BeeLaunchQueueType) {
    BeeLaunchQueueInMainQueue,
    BeeLaunchQueueInConcurrentQueue, //并行队列
    BeeLaunchQueueInSerialQueue // 串行队列，放入有执行顺序的block
};

@interface BeeLaunchTask : NSObject

+ (void)registerTask;

- (void)startTask;

- (NSInteger)priority;

- (BeeLaunchQueueType)inQueue;

@end

