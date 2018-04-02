//
//  BeeBadgeValue.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/4/1.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import "BeeView.h"
#import "BeeTabBarConfigure.h"

@interface BeeBadgeValue : BeeView

/** badgeL */
@property (nonatomic, strong) UILabel *badgeL;

/** type */
@property (nonatomic, assign) BeeBadgeValueType type;
/** badgeColor(默认 #FFFFFF) */
@property (nonatomic, strong) UIColor *badgeTextColor;
/** badgeBackgroundColor (默认 #FF4040)*/
@property (nonatomic, strong) UIColor *badgeBackgroundColor;
/** badge动画 (默认无动画) */
@property (nonatomic, assign) BeeBadgeAnimType animType;
@end
