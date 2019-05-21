//
//  BeeUserDefaults.h
//  BeeCommonSDK
//
//  Created by linshucan on 2019/5/20.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BeeUserDefaults : NSObject

+ (instancetype)standardUserDefaults;

/**
 * Override this method,you can setup default values
 * Description: If the object has two properties such as 'name' and 'gender',you should return @{@"name": @"defaultName", @"gender": @defaultGender}
 */
- (NSDictionary *)setupDefaultValues;

/**
 * Override this method,you can setup NSUserDefaults‘ suiteName.
 */
- (NSString *)suiteName;

@end

NS_ASSUME_NONNULL_END
