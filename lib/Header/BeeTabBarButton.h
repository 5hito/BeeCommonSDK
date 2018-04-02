//
//  BeeTabBarButton.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/11.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BeeBadgeValue.h"

@interface BeeTabBarButton : UIView

/** UIImageView */
@property (nonatomic, strong) UIImageView *imageView;
/** Title */
@property (nonatomic, strong) UILabel *titleLb;
/** 标题文字大小 (默认 12.f) */
@property (nonatomic, assign) CGFloat titleFont;
/** 图片的size (默认 28*28) */
@property (nonatomic, assign) CGSize imageSize;
/** 标题的偏移值 (标题距离底部的距离 默认 2.f) */
@property (nonatomic, assign) CGFloat titleOffset;
/** 图片的偏移值 (图片距离顶部的距离 默认 2.f) */
@property (nonatomic, assign) CGFloat imageOffset;
/** badgeValue */
@property (nonatomic, strong) BeeBadgeValue *badgeValue;
/** type */
@property (nonatomic, assign) BeeTabBarTypeLayout typeLayout;

@end
