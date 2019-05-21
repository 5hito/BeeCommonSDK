//
//  BeeAppLauncherCenter.h
//  BeeCommonSDK
//
//  Created by linshucan on 2019/5/21.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BeeAppLauncherCenter : NSObject

+ (instancetype)defaultCenter;
- (void)startAllTask;

- (void)addLaunchTask:(Class)lancher;

@end

NS_ASSUME_NONNULL_END
