//
//  BeeWebViewController.h
//
//  Created by linshucan on 2017/11/19.
//  Copyright © 2017年 lsc. All rights reserved.
//

#import "BeeViewController.h"

@interface BeeWebViewController : BeeViewController

@property(nonatomic, strong) UIBarButtonItem* leftBackItem;
@property(nonatomic, strong) UIBarButtonItem* leftCloseItem;
@property(nonatomic, strong) UIBarButtonItem* rightReloadItem;
@property(nonatomic, strong) UIColor* progressTintColor;

- (instancetype)initWithUrl:(NSString*)url;

@end
