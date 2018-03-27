//
//  BeeNetWriter.h
//  BeeCommonLibrary
//
//  Created by linshucan on 2018/2/28.
//

#import <Foundation/Foundation.h>

@interface BeeNetWriter : NSObject

- (void)appendInteger:(NSString*)key value:(NSInteger)value;
- (void)appendInt64:(NSString *)key value:(long long)value;
- (void)appendString:(NSString *)key value:(NSString*)value;
- (void)appendBool:(NSString *)key value:(BOOL)value;
- (void)appendDic:(NSDictionary*) dic;

- (NSString*)url:(NSString*)actionID;
+ (NSMutableDictionary*)splitParams:(NSString*)url;

@end