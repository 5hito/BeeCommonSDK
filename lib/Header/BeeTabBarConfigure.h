//
//  BeeTabBarConfigure.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/4/1.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 布局枚举 */
typedef NS_ENUM(NSInteger, BeeTabBarTypeLayout) {
    BeeTabBarTypeLayoutNormal, //默认布局 图片在上 文字在下
    BeeTabBarTypeLayoutImage,  //只有图片 (图片居中)
};

typedef NS_ENUM(NSInteger, BeeTabBarAnimType) {
    BeeTabBarAnimTypeNormal, //无动画
    BeeTabBarAnimTypeRotationY, //Y轴旋转
    BeeTabBarAnimTypeBoundsMin, //缩小
    BeeTabBarAnimTypeBoundsMax, //放大
    BeeTabBarAnimTypeScale, //缩放动画
};

typedef NS_ENUM(NSInteger, BeeBadgeValueType) {
    BeeBadgeValueTypePoint, //点
    BeeBadgeValueTypeNew, //new
    BeeBadgeValueTypeNumber, //number
};

/** badgeValue 动画枚举 */
typedef NS_ENUM(NSInteger, BeeBadgeAnimType) {
    BeeBadgeAnimTypeNormal, //无动画
    BeeBadgeAnimTypeShake, //抖动动画
    BeeBadgeAnimTypeOpacity, //透明过渡动画
    BeeBadgeAnimTypeScale, //缩放动画
};

@interface BeeTabBarConfigure : NSObject

@property (nonatomic, assign) BeeTabBarTypeLayout typeLayout;

/** 标题的默认颜色 (默认为 #808080) */
@property (nonatomic, strong) UIColor *norTitleColor;
/** 标题的选中颜色 (默认为 #d81e06)*/
@property (nonatomic, strong) UIColor *selTitleColor;
/** 图片的size (默认 28*28) */
@property (nonatomic, assign) CGSize imageSize;
/** 标题文字大小 (默认 12.f) */
@property (nonatomic, assign) CGFloat titleFont;
/** 标题的偏移值 (标题距离底部的距离 默认 2.f) */
@property (nonatomic, assign) CGFloat titleOffset;
/** 图片的偏移值 (图片距离顶部的距离 默认 2.f) */
@property (nonatomic, assign) CGFloat imageOffset;

/** tabBar */
@property (nonatomic, assign) BeeTabBarAnimType tabBarAnimType;
/** 是否显示tabBar顶部线条颜色 (默认 YES) */
@property (nonatomic, assign) BOOL isClearTabBarTopLine;
/** tabBar顶部线条颜色 (默认亮灰色) */
@property (nonatomic, strong) UIColor *tabBarTopLineColor;
/** tabBar的背景颜色 (默认白色) */
@property (nonatomic, strong) UIColor *tabBarBackground;

/******************************** badgeValue 基本配置 ********************************/

/** badgeColor(默认 #FFFFFF) */
@property (nonatomic, strong) UIColor *badgeTextColor;
/** badgeBackgroundColor (默认 #FF4040)*/
@property (nonatomic, strong) UIColor *badgeBackgroundColor;
/** badgeSize (如没有特殊需求, 请勿修改此属性, 此属性只有在控制器加载完成后有效)*/
@property (nonatomic, assign) CGSize badgeSize;
/** badgeOffset (如没有特殊需求, 请勿修改此属性, 此属性只有在控制器加载完成后有效) */
@property (nonatomic, assign) CGPoint badgeOffset;
/** badge圆角大小 (如没有特殊需求, 请勿修改此属性, 此属性只有在控制器加载完成后有效, 一般配合badgeSize或badgeOffset使用) */
@property (nonatomic, assign) CGFloat badgeRadius;
/** badge动画 (默认无动画) */
@property (nonatomic, assign) BeeBadgeAnimType animType;

@end
