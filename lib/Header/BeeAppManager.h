//
//  BeeAppManager.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/30.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeAppManager : NSObject

+ (void)configure;
+ (instancetype)sharedManager;
+ (void)setShowNetChangeState:(BOOL)bShow;

@end
