//
//  BeeFunction.h
//  BeeCommonLibrary
//
//  Created by linshucan on 2018/2/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BeeSDKDefines.h"

#pragma mark 基础
void BeeLog(NSString *format, ...);
NSString* RL(NSString* key);
UIImage* BeeImage(NSString* name);
BOOL BeeAppRunningInBackground(void);//应用是否处于后台
BOOL BeeAppRunningInForeground(void);//应用是否处于前台
NSString* BeeSystemLocale(void);//获取手机设置地区
BOOL BeeIsInChinaLocale(void);//是否在中国地区
BOOL BeeIsZhLanguage(void);//是否是中文
BOOL BeeIsJaLanguage(void);//是否是日文
BOOL BeeIsRuLanguage(void);//是否是俄文
BOOL BeeIsDeLanguage(void);//是否是德文
NSString* BeeGetTemperatureUnit(void);//获取温度单位：Celsius(摄氏度) or Fahrenheit(华氏度)

#pragma mark 字符串encode、decode
NSString* BeeDecodeStringFromString(NSString* string);
NSString* BeeEncodeStringFromString(NSString* string);
NSString* BeePercentEscapedStringFromString(NSString* string);
NSString* BeeStringByTrimmingCharactersInSetForAll(NSString* key,NSCharacterSet* charset);
NSString* BeeRemoteNotificationsToken(NSData* deviceToken);

#pragma mark md5
NSString* BeeMD5StringFromString(NSString* string);

#pragma mark 设备idfi
NSString* BeeAdvertisingIdentifier(void);

#pragma mark DES加解密：默认采用sdk自带key,desKey必须24位 否则sdk采用默认值
NSString* BeeDecrypt3DESFromString(NSString* string);
NSString* BeeDecrypt3DESFromStringWithKey(NSString* string, NSString* desKey);
NSString* BeeEncrypt3DESFromString(NSString* string);
NSString* BeeEncrypt3DESFromStringWithKey(NSString* string, NSString* desKey);

#pragma mark 将字典与字符串互转
NSString* BeeDictionaryTurnToJsonString(NSDictionary* dic);
NSDictionary* BeeJsonStringTurnToDicionary(NSString* jsonStr);

#pragma mark 包相关
NSString* BeeAppBundleIdentifier(void);
NSString* BeeAppVersion(void);
NSString* BeeAppName(void);
NSString* BeeSchemesByIdentifier(NSString* identifier);
BOOL BeeSystemVesionIsUp(CGFloat ver);
NSInteger BeeAppVersionCompare(NSString *v1, NSString *v2);
BOOL BeeAppIsApprovedByVersion(NSString* ver);

#pragma mark 目录相关
NSString* BeeAppFilePath(void); //应用目录
NSString* BeeAppHomeFilePath(void); //根目录
NSString* BeeAppRootFilePath(void); //沙盒根目录
NSString* BeeAppDocumentFilePath(void); //document目录
NSString* BeeAppLibraryFilePath(void); //Library目录
NSString* BeeAppTmpFilePath(void); //tmp目录
NSString* BeeAppPreferenceFilePath(void);//默认文件夹
NSString* BeeAppPreferencePathWithFile(NSString* file);
NSString* BeeAppFilePathWithFile(NSString* file);
NSString* BeeAppTmpCachePath(void);
NSString* BeeAppTmpCacheFilePath(NSString* file);
NSString* BeeAppPreferencePathWithFolder(NSString* folder);//可定义文件夹

#pragma mark 图片处理
UIImage* BeeResizableImageWithCapInsets(UIEdgeInsets insets,UIImage* img);
UIImage* BeeResizableImageWithImg(UIImage* img);
UIImage* BeeImageFromViewByRect(UIView* view, CGRect rect);
UIImage* BeeThumbImgFromImage(UIImage* image);
UIImage* BeeRadiusThumbImgFromImage(UIImage* image, CGFloat cornerRadius);
UIImage* BeeBundleImage(NSString* imgFile);
UIImage* BeeHandleGrayImage(UIImage *sourceImage);
UIImage* BeeImageJPEGRepresentation(UIImage* image, CGFloat compressionQuality);//压缩图片，有些图片过大无法分享，故进行压缩

#pragma mark 时间相关
NSInteger BeeCurrentMilliSecondTime(void);//毫秒
NSInteger BeeCurrentTime(void);//秒
NSString* BeeTimeSince1970(void);
NSString* BeeTimeStringByTimeInterval(NSInteger timeInterval);
NSString* BeeTimeStringByString(NSString* timeString);
NSString* BeeTimeString(NSInteger timeInterval);
NSInteger BeeTimeTurnToTimestamp(NSString* formatTime);
NSString* BeeTimeDescribeFormTimestamp(NSInteger timeInterval);
NSString* BeeWeakTimeFormTimestamp(NSInteger timeInterval);

#pragma mark 文件操作
NSDate* BeeFileCreateTimeDate(NSString* file);
BOOL BeeIsOverDueFile(NSString* file, long overTime);
BOOL BeeIsDefaultOverDueFile(NSString* file);

#pragma mark 颜色处理
//将颜色字符串转成UIColor #44a100 - > uicolor
//此方法不适用带透明度，请使用UIColor+BeeColor中的拓展类方法
UIColor* BeeColorWithHexString(NSString *colorString) BEE_DEPRECATED_MSG_ATTRIBUTE("使用UIColor+BeeColor中的拓展类方法BeeColorWithHexString");
UIColor* BeeColorWithHexStringAndAlpha(NSString *colorString, CGFloat alpha) BEE_DEPRECATED_MSG_ATTRIBUTE("使用UIColor+BeeColor中的拓展类方法BeeColorWithHexString");

#pragma mark keychain
NSString* BeeGetKeychainDefaultService(void);//获取默认keychain服务
NSString* BeeGetStoreValueWithService(NSString* key, NSString* service, NSError** error);//获取存在keychain中的值
NSString* BeeGetStoreValue(NSString* key, NSError** error);//获取存在keychain中的值，默认采用service
BOOL BeeStoreOrUpdateValueWithService(NSString* key, NSString* value, NSString* service, BOOL update, NSError** error);////存值至keychain
BOOL BeeStoreValueWithService(NSString* key, NSString* value, NSString* service, NSError** error);//存值至keychain，默认强制更新
BOOL BeeStoreValue(NSString* key, NSString* value, NSError** error);//存值至keychain，默认采用service，并且强制更新
BOOL BeeDeleteStoreItemWithService(NSString* key, NSString* service, NSError** error);//删除keychain中值
BOOL BeeDeleteStoreItem(NSString* key, NSError** error);//删除keychain中值，默认采用service
BOOL BeePurgeItemWithService(NSString* service, NSError** error);//清除keychain中service的全部值

