//
//  CAAnimation+BeeAnimation.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/4/1.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CAAnimation (BeeAnimation)

/**
 抖动动画
 
 @param repeatTimes 重复次数
 @return 返回关键帧动画
 */
+ (CAKeyframeAnimation *)Bee_ShakeAnimation_RepeatTimes:(float)repeatTimes;


/**
 透明过渡动画
 
 @param time 持续时间
 @return 返回透明过渡动画
 */
+ (CABasicAnimation *)Bee_OpacityAnimatioinDurTimes:(float)time;


/**
 缩放动画
 
 @return 返回缩放动画
 */
+ (CABasicAnimation *)Bee_ScaleAnimation;

+ (CABasicAnimation *)Bee_TabBarRotationY;
+ (CABasicAnimation *)Bee_TabBarBoundsMin;
+ (CABasicAnimation *)Bee_TabBarBoundsMax;


@end
