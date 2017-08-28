//
//  JGLoginManagerProtocol.h
//  Pods
//
//  Created by Magician on 2017/8/17.
//
//

#ifndef JGLoginManagerProtocol_h
#define JGLoginManagerProtocol_h

#import "JuGameSDKStatusCode.h"
@class UIViewController;

@protocol JGLoginManager <NSObject>

/**
 登录

 @param sender 调用登录窗口的控制器
 @param completion 登录回调
 */
- (void)loginViewController:(UIViewController *)sender
                 completion:(void(^)(NSString *sid, NSError *error))completion;


/**
 退出登录

 @param completion 回调
 */
- (void)logoutCompletion:(void (^)(NSError *error))completion;


/**
 获取sid(会话登录标识)

 @return sid
 */
- (NSString *)getSid;


/**
 进入用户中心

 @param targe 调用用户中心的控制器
 */
- (void)showUserCenterWithTarge:(UIViewController *)targe;


/**
 隐藏登录界面
 */
- (void)disMissLoginView;

@end

#endif /* JGLoginManagerProtocol_h */
