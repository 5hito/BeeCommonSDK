//
//  BeeClangWarning.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/8.
//  Copyright © 2018年 Bee. All rights reserved.
//

#ifndef BeeClangWarning_h
#define BeeClangWarning_h

//具体参数可参看文档：http://fuckingclangwarnings.com/

//方法调用警告
#define Bee_Warc_PerformSelector_Leaks(code) \
            _Pragma("clang diagnostic push") \
            _Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
            code \
            _Pragma("clang diagnostic pop")

//方法调用警告
#define Bee_Wundeclared_Selector(code) \
        _Pragma("clang diagnostic push") \
        _Pragma("clang diagnostic ignored \"-Wundeclared-selector\"") \
        code \
        _Pragma("clang diagnostic pop")

//方法弃用告警
#define Bee_Wdeprecated_Declarations(code) \
            _Pragma("clang diagnostic push") \
            _Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"") \
            code \
            _Pragma("clang diagnostic pop")

//不兼容指针类型
#define Bee_Wincompatible_Pointer_Types(code) \
            _Pragma("clang diagnostic push") \
            _Pragma("clang diagnostic ignored \"-Wincompatible-pointer-types\"") \
            code \
            _Pragma("clang diagnostic pop")

//循环引用
#define Bee_Warc_Retain_Cycles(code) \
            _Pragma("clang diagnostic push") \
            _Pragma("clang diagnostic ignored \"-Warc-retain-cycles\"") \
            code \
            _Pragma("clang diagnostic pop")

//未使用变量
#define Bee_Wunused_Variable(code) \
            _Pragma("clang diagnostic push") \
            _Pragma("clang diagnostic ignored \"-Wunused-variable\"") \
            code \
            _Pragma("clang diagnostic pop")

#endif /* BeeClangWarning_h */
